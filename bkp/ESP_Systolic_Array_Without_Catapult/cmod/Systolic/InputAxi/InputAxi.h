#ifndef __INPUTAXI_H__
#define __INPUTAXI_H__

#include <nvhls_connections.h>
#include <nvhls_int.h>
#include <nvhls_vector.h>
#include <systemc.h>

#include "../InputSetup/InputSetup.h"
#include "../Memory/Memory.h"
#include "../include/AxiSpec.h"
#include "../include/SysSpec.h"
#include <string>

SC_MODULE(InputAxi) {
  // Customized data type for triggering read request to Memory run
  //   for master write task
  class WriteReqTrig : public nvhls_message {
  public:
    Memory::AddrType addr;
    NVUINT8 len; // len - 1, i.e. 1~256
    static const unsigned int width = Memory::AddrType::width + 8;

    template <unsigned int Size> void Marshall(Marshaller<Size> &m) {
      m & addr;
      m & len;
    }
  };

public:
  sc_in_clk clk;
  sc_in<bool> rst;

  typedef spec::InputType InputType;
  // typedef Memory::MemType MemType;
  typedef Memory MemType;
  static const int N = spec::N; // # banks = N

  // Customized data type master axi read/write trigger
  class MasterTrig : public nvhls_message {
  public:
    NVUINT32 base_addr;
    Memory::IndexType M_1; // column M = M_1 + 1
    static const unsigned int width = 32 + Memory::IndexBits;

    template <unsigned int Size> void Marshall(Marshaller<Size> &m) {
      m & base_addr;
      m & M_1;
    }
  };

  // Master read request interfaces
  typename spec::AxiData::axi4_data::read::template master<> if_data_rd;
  typename spec::AxiData::axi4_data::write::template master<> if_data_wr;

  // IRQs
  Connections::Out<bool> rd_IRQ;
  Connections::Out<bool> wr_IRQ;

  // Trigger for Control.h
  Connections::In<MasterTrig> master_read;
  Connections::In<MasterTrig> master_write;

  // Memory req for master read operation
  Connections::Out<MemType::req_t> mem_wr_req;
  // Memory req/rsp for master write operation
  Connections::Out<MemType::req_t> mem_rd_req;
  Connections::In<MemType::rsp_t> mem_rd_rsp;

  // Interconnect
  Connections::Combinational<WriteReqTrig> write_req_trig;

  SC_HAS_PROCESS(InputAxi);
  InputAxi(sc_module_name name_)
      : sc_module(name_), if_data_rd("if_data_rd"), if_data_wr("if_data_wr") {

    SC_THREAD(MasterRead);
    sensitive << clk.pos();
    NVHLS_NEG_RESET_SIGNAL_IS(rst);

    SC_THREAD(MasterWriteReq);
    sensitive << clk.pos();
    NVHLS_NEG_RESET_SIGNAL_IS(rst);

    SC_THREAD(MasterWrite);
    sensitive << clk.pos();
    NVHLS_NEG_RESET_SIGNAL_IS(rst);
  }

  // Load data from outside
  void MasterRead() {
    // Axi Read master
    if_data_rd.reset();
    // Trigger
    master_read.Reset();
    // Send write request to Memory.h
    mem_wr_req.Reset();
    rd_IRQ.Reset();
    while (1) {
      MemType::req_t req_reg;
      NVUINT12 num_words = 0;
      NVUINT32 base_addr = 0;
      req_reg.type.val = CLITYPE_T::STORE;

      // Master read trigger (base_addr, and M-1)
      MasterTrig master_trig = master_read.Pop();
      Memory::IndexType M_1 = master_trig.M_1;

      // Use base_addr and M_1 to determine
      // number of DATA_WIDTH words
      base_addr = master_trig.base_addr;
      num_words = (N * (M_1 + 1)) / (DATA_WIDTH / 8);

      // For each burst
      NVUINT4 burst_count = 0;
      while (num_words > 0) {
        // 1. Push addr_pld
        typename spec::AxiData::axi4_data::AddrPayload rd_addr_pld;
        rd_addr_pld.addr =
            base_addr + burst_count * (DATA_WIDTH / 8) * MAX_BURST_SIZE;
        if (num_words > MAX_BURST_SIZE) {
          rd_addr_pld.len = MAX_BURST_SIZE - 1; // num data in this = len +1
          num_words -= MAX_BURST_SIZE;
        } else {
          NVHLS_ASSERT(num_words > 0);
          rd_addr_pld.len = num_words - 1;
          num_words = 0;
        }
        // Push read address and len
        if_data_rd.ar.Push(rd_addr_pld);

        // 2. Recieve Data (don't need to check is last)
        //   Only this part needs to be II=1
        typename spec::AxiData::axi4_data::ReadPayload rd_data_pld;
#pragma hls_pipeline_init_interval 1
        for (int i = 0; i <= rd_addr_pld.len; i++) {
          rd_data_pld = if_data_rd.r.Pop(); // for each data payload
          // organize write quest to memory.h, only 8 channels are used
          //   note that address is sequential
          // cout << hex << "rd_data_pld.data: " << rd_data_pld.data << endl;

          if (N >= DATA_WIDTH / 8) {
#pragma hls_unroll yes
            for (int j = 0; j < N; j++) {
              if (j < DATA_WIDTH / 8) {
                req_reg.data[j] = nvhls::get_slc<8>(rd_data_pld.data, 8 * j);
                req_reg.addr[j] =
                    j + (DATA_WIDTH / 8) * i +
                    burst_count * (DATA_WIDTH / 8) * MAX_BURST_SIZE;
                req_reg.valids[j] = 1;
              } else { // when N > DATA_WIDTH / 8
                req_reg.data[j] = 0;
                req_reg.addr[j] = 0;
                req_reg.valids[j] = 0;
              }
            }
            mem_wr_req.Push(req_reg);
            wait();
          } else {
            // N < DATA_WIDTH / 8, so we need to save the data multiple times
            // Probably won't work
            for (int j = 0; j < DATA_WIDTH / 8; j += N) {
#pragma hls_unroll yes
              for (int k = 0; k < N; k++) {
                if (j + k < DATA_WIDTH / 8) {
                  req_reg.data[k] =
                      nvhls::get_slc<8>(rd_data_pld.data, 8 * (j + k));
                  req_reg.addr[k] =
                      j + k + (DATA_WIDTH / 8) * i +
                      burst_count * (DATA_WIDTH / 8) * MAX_BURST_SIZE;
                  req_reg.valids[k] = 1;
                } else {
                  req_reg.data[k] = 0;
                  req_reg.addr[k] = 0;
                  req_reg.valids[k] = 0;
                }
              }
              mem_wr_req.Push(req_reg);
              wait(); // TODO: might need to wait for multiple cycles
            }
          }
        }
        // Finish one burst
        burst_count += 1;
        wait();
      }
      // Finish all bursts for this master read task
      rd_IRQ.Push(1);
      wait();
    }
  }

  // This SC_THREAD is handling memory read req
  //   during a burst in master write task
  // Send out request to READ the memory
  void MasterWriteReq() {
    write_req_trig.ResetRead();
    mem_rd_req.Reset();
    while (1) {
      MemType::req_t req_reg;
      req_reg.type.val = CLITYPE_T::LOAD; // Read from Memory.h

      WriteReqTrig w_req_trig_tmp = write_req_trig.Pop(); // Pop trigger

      Memory::AddrType addr = w_req_trig_tmp.addr; // Base addr of this burst
      NVUINT8 len = w_req_trig_tmp.len;            // (len+1) DATA_WIDTH words

// cout << "trig.addr: " << addr << "\t" << "trig.len: " << len << endl;
// cout << "addr bit: " << Memory::AddrType::width << endl;
#pragma hls_pipeline_init_interval 1
      for (int i = 0; i <= len; i++) {
        // TODO: Check xx
        // if (N >= DATA_WIDTH / 8) {
#pragma hls_unroll yes
        for (int j = 0; j < N; j++) {
          req_reg.data[j] = 0;
          if (j < DATA_WIDTH / 8) {
            req_reg.addr[j] = j + DATA_WIDTH / 8 * i + addr;
            // cout << "\t\t\t" << req_reg.addr[j] << endl;
            req_reg.valids[j] = 1;
          } else {
            req_reg.addr[j] = 0;
            req_reg.valids[j] = 0;
          }
        }
        mem_rd_req.Push(req_reg);
        wait();
        //         } else {
        //           // N < DATA_WIDTH / 8, so we need to save the data multiple
        //           times
        //           // Probably won't work
        //           for (int j = 0; j < DATA_WIDTH / 8; j += N) {
        // #pragma hls_unroll yes
        //             for (int k = 0; k < N; k++) {
        //               req_reg.data[k] = 0;
        //               if (j + k < DATA_WIDTH / 8) {
        //                 req_reg.addr[k] = j + k + DATA_WIDTH / 8 * i + addr;
        //                 req_reg.valids[k] = 1;
        //               } else {
        //                 req_reg.addr[k] = 0;
        //                 req_reg.valids[k] = 0;
        //               }
        //             }
        //             mem_rd_req.Push(req_reg);
        //             wait(); // TODO: might need to wait for multiple cycles
        //           }
        //         }
        // }
        wait();
      }
    }
  }

  // Read Memory, send data to slave
  //   No write response from slave
  void MasterWrite() {
    // Memory interface
    mem_rd_rsp.Reset();
    // Req trigger
    write_req_trig.ResetWrite();
    // AXI master write interface
    if_data_wr.reset();
    // Trigger
    master_write.Reset();
    // IRQ
    wr_IRQ.Reset();
    while (1) {
      NVUINT12 num_words = 0;
      NVUINT32 base_addr = 0;

      // Master Write trigger (base_addr, and num_words)
      MasterTrig master_trig = master_write.Pop();
      Memory::IndexType M_1 = master_trig.M_1;

      // Use base_addr and num_words to determine
      //     number of requests DATA_WIDTH (128-bit) (16 byte/word)
      base_addr = master_trig.base_addr;
      num_words = (N * (M_1 + 1)) / (DATA_WIDTH / 8);

      // For each AXI burst (assume at most 7 bursts)
      NVUINT3 burst_count = 0;
      while (num_words > 0) {
        // 1. Push addr_pld
        typename spec::AxiData::axi4_data::AddrPayload wr_addr_pld;
        wr_addr_pld.addr =
            base_addr + burst_count * (DATA_WIDTH / 8) * MAX_BURST_SIZE;
        if (num_words > MAX_BURST_SIZE) {
          wr_addr_pld.len = MAX_BURST_SIZE - 1;
          num_words -= MAX_BURST_SIZE;
        } else {
          wr_addr_pld.len = num_words - 1;
          num_words = 0;
        }
        if_data_wr.aw.Push(wr_addr_pld);

        // If memory bandwidth is higher than AXI datawidth
        if (N >= DATA_WIDTH / 8) {
          // 2. Push req trigger for MEM read
          WriteReqTrig w_req_trig_tmp;
          // base addr of read req
          w_req_trig_tmp.addr = MAX_BURST_SIZE * (DATA_WIDTH / 8) * burst_count;
          // (len+1) (DATA_WIDTH)128-bit words
          w_req_trig_tmp.len = wr_addr_pld.len;
          write_req_trig.Push(w_req_trig_tmp);

          // 3. Send rsp to master write, only this step requires II=1
          MemType::rsp_t rsp_reg;
          typename spec::AxiData::axi4_data::WritePayload wr_data_pld;
#pragma hls_pipeline_init_interval 1
          for (int i = 0; i <= wr_addr_pld.len; i++) {
            rsp_reg = mem_rd_rsp.Pop();
// cout << "master write mem rsp pop " << rsp_reg.data[0] << endl;
#pragma hls_unroll yes
            for (int j = 0; j < DATA_WIDTH / 8; j++) {
              wr_data_pld.data.set_slc<8>(8 * j, rsp_reg.data[j]);
              NVHLS_ASSERT(rsp_reg.valids[j] == true)
            }
            wr_data_pld.wstrb = ~0;
            wr_data_pld.last = (i == wr_addr_pld.len);

            if_data_wr.w.Push(wr_data_pld);
            wait();
          }
          // FIXME pop write response from slave?
          if_data_wr.b.Pop();

          burst_count += 1;
          wait();
        }
        // N is too small, memory bandwidth lower than AXI data width
        // need to read multiple times to form an AXI request
        else {
          // int num_mem_read_per_axi = (DATA_WIDTH / 8) / N;
          // for {
          //   int mem_r_i = 0;
          //   mem_r_i < num_mem_read_per_axi;
          //   mem_r_i++
          // }
          // {
          //   // Push req trigger for MEM read
          //   WriteReqTrig w_req_trig_tmp;
          //   w_req_trig_tmp.addr =
          // }
        }
      }
      // TODO   done signal to controller
      wr_IRQ.Push(1);
      wait();
    }
  }
};

#endif
