#ifndef __SYSPE_H__
#define __SYSPE_H__

#include <systemc.h>
#include <nvhls_int.h>
#include <nvhls_connections.h>

#include "../include/SysSpec.h"

SC_MODULE(SysPE)
{
  public:
  sc_in_clk     clk;
  sc_in<bool>   rst;


  // Interface Ports
  Connections::In<spec::InputType>   weight_in;
  Connections::In<spec::InputType>   act_in;
  Connections::In<spec::AccumType>   accum_in;
  
  Connections::Out<spec::InputType>  weight_out;
  Connections::Out<spec::InputType>  act_out;
  Connections::Out<spec::AccumType>  accum_out;

  SC_HAS_PROCESS(SysPE);
  SysPE(sc_module_name name_) : sc_module(name_) {
    SC_THREAD (PERun);
    sensitive << clk.pos();
    NVHLS_NEG_RESET_SIGNAL_IS(rst);
  }

  bool is_weight_in, is_act_in, is_accum_in;

  spec::InputType weight_reg, weight_out_reg;
  spec::InputType act_reg;
  spec::AccumType accum_reg;

  void PERun() {
    weight_in.Reset();
    act_in.Reset();
    accum_in.Reset();
    weight_out.Reset();
    act_out.Reset();
    accum_out.Reset();
    
    is_weight_in = 0;
    is_act_in = 0;
    is_accum_in = 0;
    weight_reg = 0;
    weight_out_reg = 0;
    act_reg = 0;
    accum_reg = 0;

    wait();

    #pragma hls_pipeline_init_interval 1
    while(1) {
      spec::InputType tmp;
      if (weight_in.PopNB(tmp)){
        is_weight_in = 1;
        weight_out_reg = weight_reg;
        weight_reg = tmp;
      }
      if (!is_act_in) {
        is_act_in = act_in.PopNB(act_reg);
      }
      if (!is_accum_in) {
        is_accum_in = accum_in.PopNB(accum_reg);
      }
    
      if (is_act_in && is_accum_in) {
        is_act_in = 0;
        is_accum_in = 0;

        spec::AccumType accum_out_reg = act_reg*weight_reg + accum_reg;

        act_out.Push(act_reg);
        accum_out.Push(accum_out_reg);
      }
      if (is_weight_in == 1) {
        is_weight_in = 0;
        weight_out.Push(weight_out_reg);
      }
      wait();
    }
  }


};
#endif
