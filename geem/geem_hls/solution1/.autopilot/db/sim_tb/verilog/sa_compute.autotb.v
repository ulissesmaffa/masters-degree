// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      sa_compute
`define AUTOTB_DUT_INST AESL_inst_sa_compute
`define AUTOTB_TOP      apatb_sa_compute_top
`define AUTOTB_LAT_RESULT_FILE "sa_compute.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "sa_compute.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_sa_compute_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_MEM_sa_pe_li AESL_automem_sa_pe_li
`define AESL_MEM_INST_sa_pe_li mem_inst_sa_pe_li
`define AESL_MEM_sa_pe_tw AESL_automem_sa_pe_tw
`define AESL_MEM_INST_sa_pe_tw mem_inst_sa_pe_tw
`define AESL_MEM_sa_pe_ri AESL_automem_sa_pe_ri
`define AESL_MEM_INST_sa_pe_ri mem_inst_sa_pe_ri
`define AESL_MEM_sa_pe_bw AESL_automem_sa_pe_bw
`define AESL_MEM_INST_sa_pe_bw mem_inst_sa_pe_bw
`define AESL_MEM_sa_pe_ba AESL_automem_sa_pe_ba
`define AESL_MEM_INST_sa_pe_ba mem_inst_sa_pe_ba
`define AESL_MEM_sa_buffer_a_li_ready AESL_automem_sa_buffer_a_li_ready
`define AESL_MEM_INST_sa_buffer_a_li_ready mem_inst_sa_buffer_a_li_ready
`define AESL_MEM_sa_buffer_a_li_value AESL_automem_sa_buffer_a_li_value
`define AESL_MEM_INST_sa_buffer_a_li_value mem_inst_sa_buffer_a_li_value
`define AESL_MEM_sa_buffer_b_tw_ready AESL_automem_sa_buffer_b_tw_ready
`define AESL_MEM_INST_sa_buffer_b_tw_ready mem_inst_sa_buffer_b_tw_ready
`define AESL_MEM_sa_buffer_b_tw_value AESL_automem_sa_buffer_b_tw_value
`define AESL_MEM_INST_sa_buffer_b_tw_value mem_inst_sa_buffer_b_tw_value
`define AESL_MEM_sa_ba_sa AESL_automem_sa_ba_sa
`define AESL_MEM_INST_sa_ba_sa mem_inst_sa_ba_sa
`define AUTOTB_TVIN_sa_pe_li  "./c.sa_compute.autotvin_sa_pe_li.dat"
`define AUTOTB_TVIN_sa_pe_tw  "./c.sa_compute.autotvin_sa_pe_tw.dat"
`define AUTOTB_TVIN_sa_pe_ri  "./c.sa_compute.autotvin_sa_pe_ri.dat"
`define AUTOTB_TVIN_sa_pe_bw  "./c.sa_compute.autotvin_sa_pe_bw.dat"
`define AUTOTB_TVIN_sa_pe_ba  "./c.sa_compute.autotvin_sa_pe_ba.dat"
`define AUTOTB_TVIN_sa_buffer_a_li_ready  "./c.sa_compute.autotvin_sa_buffer_a_li_ready.dat"
`define AUTOTB_TVIN_sa_buffer_a_li_value  "./c.sa_compute.autotvin_sa_buffer_a_li_value.dat"
`define AUTOTB_TVIN_sa_buffer_b_tw_ready  "./c.sa_compute.autotvin_sa_buffer_b_tw_ready.dat"
`define AUTOTB_TVIN_sa_buffer_b_tw_value  "./c.sa_compute.autotvin_sa_buffer_b_tw_value.dat"
`define AUTOTB_TVIN_sa_ba_sa  "./c.sa_compute.autotvin_sa_ba_sa.dat"
`define AUTOTB_TVIN_sa_pe_li_out_wrapc  "./rtl.sa_compute.autotvin_sa_pe_li.dat"
`define AUTOTB_TVIN_sa_pe_tw_out_wrapc  "./rtl.sa_compute.autotvin_sa_pe_tw.dat"
`define AUTOTB_TVIN_sa_pe_ri_out_wrapc  "./rtl.sa_compute.autotvin_sa_pe_ri.dat"
`define AUTOTB_TVIN_sa_pe_bw_out_wrapc  "./rtl.sa_compute.autotvin_sa_pe_bw.dat"
`define AUTOTB_TVIN_sa_pe_ba_out_wrapc  "./rtl.sa_compute.autotvin_sa_pe_ba.dat"
`define AUTOTB_TVIN_sa_buffer_a_li_ready_out_wrapc  "./rtl.sa_compute.autotvin_sa_buffer_a_li_ready.dat"
`define AUTOTB_TVIN_sa_buffer_a_li_value_out_wrapc  "./rtl.sa_compute.autotvin_sa_buffer_a_li_value.dat"
`define AUTOTB_TVIN_sa_buffer_b_tw_ready_out_wrapc  "./rtl.sa_compute.autotvin_sa_buffer_b_tw_ready.dat"
`define AUTOTB_TVIN_sa_buffer_b_tw_value_out_wrapc  "./rtl.sa_compute.autotvin_sa_buffer_b_tw_value.dat"
`define AUTOTB_TVIN_sa_ba_sa_out_wrapc  "./rtl.sa_compute.autotvin_sa_ba_sa.dat"
`define AUTOTB_TVOUT_sa_pe_li  "./c.sa_compute.autotvout_sa_pe_li.dat"
`define AUTOTB_TVOUT_sa_pe_tw  "./c.sa_compute.autotvout_sa_pe_tw.dat"
`define AUTOTB_TVOUT_sa_pe_ri  "./c.sa_compute.autotvout_sa_pe_ri.dat"
`define AUTOTB_TVOUT_sa_pe_bw  "./c.sa_compute.autotvout_sa_pe_bw.dat"
`define AUTOTB_TVOUT_sa_pe_ba  "./c.sa_compute.autotvout_sa_pe_ba.dat"
`define AUTOTB_TVOUT_sa_buffer_a_li_ready  "./c.sa_compute.autotvout_sa_buffer_a_li_ready.dat"
`define AUTOTB_TVOUT_sa_buffer_b_tw_ready  "./c.sa_compute.autotvout_sa_buffer_b_tw_ready.dat"
`define AUTOTB_TVOUT_sa_ba_sa  "./c.sa_compute.autotvout_sa_ba_sa.dat"
`define AUTOTB_TVOUT_sa_pe_li_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_pe_li.dat"
`define AUTOTB_TVOUT_sa_pe_tw_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_pe_tw.dat"
`define AUTOTB_TVOUT_sa_pe_ri_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_pe_ri.dat"
`define AUTOTB_TVOUT_sa_pe_bw_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_pe_bw.dat"
`define AUTOTB_TVOUT_sa_pe_ba_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_pe_ba.dat"
`define AUTOTB_TVOUT_sa_buffer_a_li_ready_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat"
`define AUTOTB_TVOUT_sa_buffer_b_tw_ready_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat"
`define AUTOTB_TVOUT_sa_ba_sa_out_wrapc  "./impl_rtl.sa_compute.autotvout_sa_ba_sa.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 5;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 66;
parameter LENGTH_sa_pe_li = 4;
parameter LENGTH_sa_pe_tw = 4;
parameter LENGTH_sa_pe_ri = 4;
parameter LENGTH_sa_pe_bw = 4;
parameter LENGTH_sa_pe_ba = 4;
parameter LENGTH_sa_buffer_a_li_ready = 2;
parameter LENGTH_sa_buffer_a_li_value = 2;
parameter LENGTH_sa_buffer_b_tw_ready = 2;
parameter LENGTH_sa_buffer_b_tw_value = 2;
parameter LENGTH_sa_ba_sa = 4;

task read_token;
    input integer fp;
    output reg [255 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

task post_check;
    input integer fp1;
    input integer fp2;
    reg [255 : 0] token1;
    reg [255 : 0] token2;
    reg [255 : 0] golden;
    reg [255 : 0] result;
    integer ret;
    begin
        read_token(fp1, token1);
        read_token(fp2, token2);
        if (token1 != "[[[runtime]]]" || token2 != "[[[runtime]]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
            $finish;
        end
        read_token(fp1, token1);
        read_token(fp2, token2);
        while (token1 != "[[[/runtime]]]" && token2 != "[[[/runtime]]]") begin
            if (token1 != "[[transaction]]" || token2 != "[[transaction]]") begin
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
            end
            read_token(fp1, token1);  // skip transaction number
            read_token(fp2, token2);  // skip transaction number
              read_token(fp1, token1);
              read_token(fp2, token2);
            while(token1 != "[[/transaction]]" && token2 != "[[/transaction]]") begin
                ret = $sscanf(token1, "0x%x", golden);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                ret = $sscanf(token2, "0x%x", result);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                if(golden != result) begin
                      $display("%x (expected) vs. %x (actual) - mismatch", golden, result);
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                end
                  read_token(fp1, token1);
                  read_token(fp2, token2);
            end
              read_token(fp1, token1);
              read_token(fp2, token2);
        end
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [1 : 0] sa_pe_li_address0;
wire  sa_pe_li_ce0;
wire  sa_pe_li_we0;
wire [31 : 0] sa_pe_li_d0;
wire [31 : 0] sa_pe_li_q0;
wire [1 : 0] sa_pe_tw_address0;
wire  sa_pe_tw_ce0;
wire  sa_pe_tw_we0;
wire [31 : 0] sa_pe_tw_d0;
wire [31 : 0] sa_pe_tw_q0;
wire [1 : 0] sa_pe_ri_address0;
wire  sa_pe_ri_ce0;
wire  sa_pe_ri_we0;
wire [31 : 0] sa_pe_ri_d0;
wire [31 : 0] sa_pe_ri_q0;
wire [1 : 0] sa_pe_bw_address0;
wire  sa_pe_bw_ce0;
wire  sa_pe_bw_we0;
wire [31 : 0] sa_pe_bw_d0;
wire [31 : 0] sa_pe_bw_q0;
wire [1 : 0] sa_pe_ba_address0;
wire  sa_pe_ba_ce0;
wire  sa_pe_ba_we0;
wire [31 : 0] sa_pe_ba_d0;
wire [31 : 0] sa_pe_ba_q0;
wire [0 : 0] sa_buffer_a_li_ready_address0;
wire  sa_buffer_a_li_ready_ce0;
wire  sa_buffer_a_li_ready_we0;
wire [0 : 0] sa_buffer_a_li_ready_d0;
wire [0 : 0] sa_buffer_a_li_ready_q0;
wire [0 : 0] sa_buffer_a_li_value_address0;
wire  sa_buffer_a_li_value_ce0;
wire [31 : 0] sa_buffer_a_li_value_q0;
wire [0 : 0] sa_buffer_b_tw_ready_address0;
wire  sa_buffer_b_tw_ready_ce0;
wire  sa_buffer_b_tw_ready_we0;
wire [0 : 0] sa_buffer_b_tw_ready_d0;
wire [0 : 0] sa_buffer_b_tw_ready_q0;
wire [0 : 0] sa_buffer_b_tw_value_address0;
wire  sa_buffer_b_tw_value_ce0;
wire [31 : 0] sa_buffer_b_tw_value_q0;
wire [1 : 0] sa_ba_sa_address0;
wire  sa_ba_sa_ce0;
wire  sa_ba_sa_we0;
wire [31 : 0] sa_ba_sa_d0;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .sa_pe_li_address0(sa_pe_li_address0),
    .sa_pe_li_ce0(sa_pe_li_ce0),
    .sa_pe_li_we0(sa_pe_li_we0),
    .sa_pe_li_d0(sa_pe_li_d0),
    .sa_pe_li_q0(sa_pe_li_q0),
    .sa_pe_tw_address0(sa_pe_tw_address0),
    .sa_pe_tw_ce0(sa_pe_tw_ce0),
    .sa_pe_tw_we0(sa_pe_tw_we0),
    .sa_pe_tw_d0(sa_pe_tw_d0),
    .sa_pe_tw_q0(sa_pe_tw_q0),
    .sa_pe_ri_address0(sa_pe_ri_address0),
    .sa_pe_ri_ce0(sa_pe_ri_ce0),
    .sa_pe_ri_we0(sa_pe_ri_we0),
    .sa_pe_ri_d0(sa_pe_ri_d0),
    .sa_pe_ri_q0(sa_pe_ri_q0),
    .sa_pe_bw_address0(sa_pe_bw_address0),
    .sa_pe_bw_ce0(sa_pe_bw_ce0),
    .sa_pe_bw_we0(sa_pe_bw_we0),
    .sa_pe_bw_d0(sa_pe_bw_d0),
    .sa_pe_bw_q0(sa_pe_bw_q0),
    .sa_pe_ba_address0(sa_pe_ba_address0),
    .sa_pe_ba_ce0(sa_pe_ba_ce0),
    .sa_pe_ba_we0(sa_pe_ba_we0),
    .sa_pe_ba_d0(sa_pe_ba_d0),
    .sa_pe_ba_q0(sa_pe_ba_q0),
    .sa_buffer_a_li_ready_address0(sa_buffer_a_li_ready_address0),
    .sa_buffer_a_li_ready_ce0(sa_buffer_a_li_ready_ce0),
    .sa_buffer_a_li_ready_we0(sa_buffer_a_li_ready_we0),
    .sa_buffer_a_li_ready_d0(sa_buffer_a_li_ready_d0),
    .sa_buffer_a_li_ready_q0(sa_buffer_a_li_ready_q0),
    .sa_buffer_a_li_value_address0(sa_buffer_a_li_value_address0),
    .sa_buffer_a_li_value_ce0(sa_buffer_a_li_value_ce0),
    .sa_buffer_a_li_value_q0(sa_buffer_a_li_value_q0),
    .sa_buffer_b_tw_ready_address0(sa_buffer_b_tw_ready_address0),
    .sa_buffer_b_tw_ready_ce0(sa_buffer_b_tw_ready_ce0),
    .sa_buffer_b_tw_ready_we0(sa_buffer_b_tw_ready_we0),
    .sa_buffer_b_tw_ready_d0(sa_buffer_b_tw_ready_d0),
    .sa_buffer_b_tw_ready_q0(sa_buffer_b_tw_ready_q0),
    .sa_buffer_b_tw_value_address0(sa_buffer_b_tw_value_address0),
    .sa_buffer_b_tw_value_ce0(sa_buffer_b_tw_value_ce0),
    .sa_buffer_b_tw_value_q0(sa_buffer_b_tw_value_q0),
    .sa_ba_sa_address0(sa_ba_sa_address0),
    .sa_ba_sa_ce0(sa_ba_sa_ce0),
    .sa_ba_sa_we0(sa_ba_sa_we0),
    .sa_ba_sa_d0(sa_ba_sa_d0));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
//------------------------arraysa_pe_li Instantiation--------------

// The input and output of arraysa_pe_li
wire    arraysa_pe_li_ce0, arraysa_pe_li_ce1;
wire    arraysa_pe_li_we0, arraysa_pe_li_we1;
wire    [1 : 0]    arraysa_pe_li_address0, arraysa_pe_li_address1;
wire    [31 : 0]    arraysa_pe_li_din0, arraysa_pe_li_din1;
wire    [31 : 0]    arraysa_pe_li_dout0, arraysa_pe_li_dout1;
wire    arraysa_pe_li_ready;
wire    arraysa_pe_li_done;

`AESL_MEM_sa_pe_li `AESL_MEM_INST_sa_pe_li(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_pe_li_ce0),
    .we0        (arraysa_pe_li_we0),
    .address0   (arraysa_pe_li_address0),
    .din0       (arraysa_pe_li_din0),
    .dout0      (arraysa_pe_li_dout0),
    .ce1        (arraysa_pe_li_ce1),
    .we1        (arraysa_pe_li_we1),
    .address1   (arraysa_pe_li_address1),
    .din1       (arraysa_pe_li_din1),
    .dout1      (arraysa_pe_li_dout1),
    .ready      (arraysa_pe_li_ready),
    .done    (arraysa_pe_li_done)
);

// Assignment between dut and arraysa_pe_li
assign arraysa_pe_li_address0 = sa_pe_li_address0;
assign arraysa_pe_li_ce0 = sa_pe_li_ce0;
assign sa_pe_li_q0 = arraysa_pe_li_dout0;
assign arraysa_pe_li_we0 = sa_pe_li_we0;
assign arraysa_pe_li_din0 = sa_pe_li_d0;
assign arraysa_pe_li_we1 = 0;
assign arraysa_pe_li_din1 = 0;
assign arraysa_pe_li_ready= ready;
assign arraysa_pe_li_done = interface_done;


//------------------------arraysa_pe_tw Instantiation--------------

// The input and output of arraysa_pe_tw
wire    arraysa_pe_tw_ce0, arraysa_pe_tw_ce1;
wire    arraysa_pe_tw_we0, arraysa_pe_tw_we1;
wire    [1 : 0]    arraysa_pe_tw_address0, arraysa_pe_tw_address1;
wire    [31 : 0]    arraysa_pe_tw_din0, arraysa_pe_tw_din1;
wire    [31 : 0]    arraysa_pe_tw_dout0, arraysa_pe_tw_dout1;
wire    arraysa_pe_tw_ready;
wire    arraysa_pe_tw_done;

`AESL_MEM_sa_pe_tw `AESL_MEM_INST_sa_pe_tw(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_pe_tw_ce0),
    .we0        (arraysa_pe_tw_we0),
    .address0   (arraysa_pe_tw_address0),
    .din0       (arraysa_pe_tw_din0),
    .dout0      (arraysa_pe_tw_dout0),
    .ce1        (arraysa_pe_tw_ce1),
    .we1        (arraysa_pe_tw_we1),
    .address1   (arraysa_pe_tw_address1),
    .din1       (arraysa_pe_tw_din1),
    .dout1      (arraysa_pe_tw_dout1),
    .ready      (arraysa_pe_tw_ready),
    .done    (arraysa_pe_tw_done)
);

// Assignment between dut and arraysa_pe_tw
assign arraysa_pe_tw_address0 = sa_pe_tw_address0;
assign arraysa_pe_tw_ce0 = sa_pe_tw_ce0;
assign sa_pe_tw_q0 = arraysa_pe_tw_dout0;
assign arraysa_pe_tw_we0 = sa_pe_tw_we0;
assign arraysa_pe_tw_din0 = sa_pe_tw_d0;
assign arraysa_pe_tw_we1 = 0;
assign arraysa_pe_tw_din1 = 0;
assign arraysa_pe_tw_ready= ready;
assign arraysa_pe_tw_done = interface_done;


//------------------------arraysa_pe_ri Instantiation--------------

// The input and output of arraysa_pe_ri
wire    arraysa_pe_ri_ce0, arraysa_pe_ri_ce1;
wire    arraysa_pe_ri_we0, arraysa_pe_ri_we1;
wire    [1 : 0]    arraysa_pe_ri_address0, arraysa_pe_ri_address1;
wire    [31 : 0]    arraysa_pe_ri_din0, arraysa_pe_ri_din1;
wire    [31 : 0]    arraysa_pe_ri_dout0, arraysa_pe_ri_dout1;
wire    arraysa_pe_ri_ready;
wire    arraysa_pe_ri_done;

`AESL_MEM_sa_pe_ri `AESL_MEM_INST_sa_pe_ri(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_pe_ri_ce0),
    .we0        (arraysa_pe_ri_we0),
    .address0   (arraysa_pe_ri_address0),
    .din0       (arraysa_pe_ri_din0),
    .dout0      (arraysa_pe_ri_dout0),
    .ce1        (arraysa_pe_ri_ce1),
    .we1        (arraysa_pe_ri_we1),
    .address1   (arraysa_pe_ri_address1),
    .din1       (arraysa_pe_ri_din1),
    .dout1      (arraysa_pe_ri_dout1),
    .ready      (arraysa_pe_ri_ready),
    .done    (arraysa_pe_ri_done)
);

// Assignment between dut and arraysa_pe_ri
assign arraysa_pe_ri_address0 = sa_pe_ri_address0;
assign arraysa_pe_ri_ce0 = sa_pe_ri_ce0;
assign sa_pe_ri_q0 = arraysa_pe_ri_dout0;
assign arraysa_pe_ri_we0 = sa_pe_ri_we0;
assign arraysa_pe_ri_din0 = sa_pe_ri_d0;
assign arraysa_pe_ri_we1 = 0;
assign arraysa_pe_ri_din1 = 0;
assign arraysa_pe_ri_ready= ready;
assign arraysa_pe_ri_done = interface_done;


//------------------------arraysa_pe_bw Instantiation--------------

// The input and output of arraysa_pe_bw
wire    arraysa_pe_bw_ce0, arraysa_pe_bw_ce1;
wire    arraysa_pe_bw_we0, arraysa_pe_bw_we1;
wire    [1 : 0]    arraysa_pe_bw_address0, arraysa_pe_bw_address1;
wire    [31 : 0]    arraysa_pe_bw_din0, arraysa_pe_bw_din1;
wire    [31 : 0]    arraysa_pe_bw_dout0, arraysa_pe_bw_dout1;
wire    arraysa_pe_bw_ready;
wire    arraysa_pe_bw_done;

`AESL_MEM_sa_pe_bw `AESL_MEM_INST_sa_pe_bw(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_pe_bw_ce0),
    .we0        (arraysa_pe_bw_we0),
    .address0   (arraysa_pe_bw_address0),
    .din0       (arraysa_pe_bw_din0),
    .dout0      (arraysa_pe_bw_dout0),
    .ce1        (arraysa_pe_bw_ce1),
    .we1        (arraysa_pe_bw_we1),
    .address1   (arraysa_pe_bw_address1),
    .din1       (arraysa_pe_bw_din1),
    .dout1      (arraysa_pe_bw_dout1),
    .ready      (arraysa_pe_bw_ready),
    .done    (arraysa_pe_bw_done)
);

// Assignment between dut and arraysa_pe_bw
assign arraysa_pe_bw_address0 = sa_pe_bw_address0;
assign arraysa_pe_bw_ce0 = sa_pe_bw_ce0;
assign sa_pe_bw_q0 = arraysa_pe_bw_dout0;
assign arraysa_pe_bw_we0 = sa_pe_bw_we0;
assign arraysa_pe_bw_din0 = sa_pe_bw_d0;
assign arraysa_pe_bw_we1 = 0;
assign arraysa_pe_bw_din1 = 0;
assign arraysa_pe_bw_ready= ready;
assign arraysa_pe_bw_done = interface_done;


//------------------------arraysa_pe_ba Instantiation--------------

// The input and output of arraysa_pe_ba
wire    arraysa_pe_ba_ce0, arraysa_pe_ba_ce1;
wire    arraysa_pe_ba_we0, arraysa_pe_ba_we1;
wire    [1 : 0]    arraysa_pe_ba_address0, arraysa_pe_ba_address1;
wire    [31 : 0]    arraysa_pe_ba_din0, arraysa_pe_ba_din1;
wire    [31 : 0]    arraysa_pe_ba_dout0, arraysa_pe_ba_dout1;
wire    arraysa_pe_ba_ready;
wire    arraysa_pe_ba_done;

`AESL_MEM_sa_pe_ba `AESL_MEM_INST_sa_pe_ba(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_pe_ba_ce0),
    .we0        (arraysa_pe_ba_we0),
    .address0   (arraysa_pe_ba_address0),
    .din0       (arraysa_pe_ba_din0),
    .dout0      (arraysa_pe_ba_dout0),
    .ce1        (arraysa_pe_ba_ce1),
    .we1        (arraysa_pe_ba_we1),
    .address1   (arraysa_pe_ba_address1),
    .din1       (arraysa_pe_ba_din1),
    .dout1      (arraysa_pe_ba_dout1),
    .ready      (arraysa_pe_ba_ready),
    .done    (arraysa_pe_ba_done)
);

// Assignment between dut and arraysa_pe_ba
assign arraysa_pe_ba_address0 = sa_pe_ba_address0;
assign arraysa_pe_ba_ce0 = sa_pe_ba_ce0;
assign sa_pe_ba_q0 = arraysa_pe_ba_dout0;
assign arraysa_pe_ba_we0 = sa_pe_ba_we0;
assign arraysa_pe_ba_din0 = sa_pe_ba_d0;
assign arraysa_pe_ba_we1 = 0;
assign arraysa_pe_ba_din1 = 0;
assign arraysa_pe_ba_ready= ready;
assign arraysa_pe_ba_done = interface_done;


//------------------------arraysa_buffer_a_li_ready Instantiation--------------

// The input and output of arraysa_buffer_a_li_ready
wire    arraysa_buffer_a_li_ready_ce0, arraysa_buffer_a_li_ready_ce1;
wire    arraysa_buffer_a_li_ready_we0, arraysa_buffer_a_li_ready_we1;
wire    [0 : 0]    arraysa_buffer_a_li_ready_address0, arraysa_buffer_a_li_ready_address1;
wire    [0 : 0]    arraysa_buffer_a_li_ready_din0, arraysa_buffer_a_li_ready_din1;
wire    [0 : 0]    arraysa_buffer_a_li_ready_dout0, arraysa_buffer_a_li_ready_dout1;
wire    arraysa_buffer_a_li_ready_ready;
wire    arraysa_buffer_a_li_ready_done;

`AESL_MEM_sa_buffer_a_li_ready `AESL_MEM_INST_sa_buffer_a_li_ready(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_buffer_a_li_ready_ce0),
    .we0        (arraysa_buffer_a_li_ready_we0),
    .address0   (arraysa_buffer_a_li_ready_address0),
    .din0       (arraysa_buffer_a_li_ready_din0),
    .dout0      (arraysa_buffer_a_li_ready_dout0),
    .ce1        (arraysa_buffer_a_li_ready_ce1),
    .we1        (arraysa_buffer_a_li_ready_we1),
    .address1   (arraysa_buffer_a_li_ready_address1),
    .din1       (arraysa_buffer_a_li_ready_din1),
    .dout1      (arraysa_buffer_a_li_ready_dout1),
    .ready      (arraysa_buffer_a_li_ready_ready),
    .done    (arraysa_buffer_a_li_ready_done)
);

// Assignment between dut and arraysa_buffer_a_li_ready
assign arraysa_buffer_a_li_ready_address0 = sa_buffer_a_li_ready_address0;
assign arraysa_buffer_a_li_ready_ce0 = sa_buffer_a_li_ready_ce0;
assign sa_buffer_a_li_ready_q0 = arraysa_buffer_a_li_ready_dout0;
assign arraysa_buffer_a_li_ready_we0 = sa_buffer_a_li_ready_we0;
assign arraysa_buffer_a_li_ready_din0 = sa_buffer_a_li_ready_d0;
assign arraysa_buffer_a_li_ready_we1 = 0;
assign arraysa_buffer_a_li_ready_din1 = 0;
assign arraysa_buffer_a_li_ready_ready= ready;
assign arraysa_buffer_a_li_ready_done = interface_done;


//------------------------arraysa_buffer_a_li_value Instantiation--------------

// The input and output of arraysa_buffer_a_li_value
wire    arraysa_buffer_a_li_value_ce0, arraysa_buffer_a_li_value_ce1;
wire    arraysa_buffer_a_li_value_we0, arraysa_buffer_a_li_value_we1;
wire    [0 : 0]    arraysa_buffer_a_li_value_address0, arraysa_buffer_a_li_value_address1;
wire    [31 : 0]    arraysa_buffer_a_li_value_din0, arraysa_buffer_a_li_value_din1;
wire    [31 : 0]    arraysa_buffer_a_li_value_dout0, arraysa_buffer_a_li_value_dout1;
wire    arraysa_buffer_a_li_value_ready;
wire    arraysa_buffer_a_li_value_done;

`AESL_MEM_sa_buffer_a_li_value `AESL_MEM_INST_sa_buffer_a_li_value(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_buffer_a_li_value_ce0),
    .we0        (arraysa_buffer_a_li_value_we0),
    .address0   (arraysa_buffer_a_li_value_address0),
    .din0       (arraysa_buffer_a_li_value_din0),
    .dout0      (arraysa_buffer_a_li_value_dout0),
    .ce1        (arraysa_buffer_a_li_value_ce1),
    .we1        (arraysa_buffer_a_li_value_we1),
    .address1   (arraysa_buffer_a_li_value_address1),
    .din1       (arraysa_buffer_a_li_value_din1),
    .dout1      (arraysa_buffer_a_li_value_dout1),
    .ready      (arraysa_buffer_a_li_value_ready),
    .done    (arraysa_buffer_a_li_value_done)
);

// Assignment between dut and arraysa_buffer_a_li_value
assign arraysa_buffer_a_li_value_address0 = sa_buffer_a_li_value_address0;
assign arraysa_buffer_a_li_value_ce0 = sa_buffer_a_li_value_ce0;
assign sa_buffer_a_li_value_q0 = arraysa_buffer_a_li_value_dout0;
assign arraysa_buffer_a_li_value_we0 = 0;
assign arraysa_buffer_a_li_value_din0 = 0;
assign arraysa_buffer_a_li_value_we1 = 0;
assign arraysa_buffer_a_li_value_din1 = 0;
assign arraysa_buffer_a_li_value_ready=    ready;
assign arraysa_buffer_a_li_value_done = 0;


//------------------------arraysa_buffer_b_tw_ready Instantiation--------------

// The input and output of arraysa_buffer_b_tw_ready
wire    arraysa_buffer_b_tw_ready_ce0, arraysa_buffer_b_tw_ready_ce1;
wire    arraysa_buffer_b_tw_ready_we0, arraysa_buffer_b_tw_ready_we1;
wire    [0 : 0]    arraysa_buffer_b_tw_ready_address0, arraysa_buffer_b_tw_ready_address1;
wire    [0 : 0]    arraysa_buffer_b_tw_ready_din0, arraysa_buffer_b_tw_ready_din1;
wire    [0 : 0]    arraysa_buffer_b_tw_ready_dout0, arraysa_buffer_b_tw_ready_dout1;
wire    arraysa_buffer_b_tw_ready_ready;
wire    arraysa_buffer_b_tw_ready_done;

`AESL_MEM_sa_buffer_b_tw_ready `AESL_MEM_INST_sa_buffer_b_tw_ready(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_buffer_b_tw_ready_ce0),
    .we0        (arraysa_buffer_b_tw_ready_we0),
    .address0   (arraysa_buffer_b_tw_ready_address0),
    .din0       (arraysa_buffer_b_tw_ready_din0),
    .dout0      (arraysa_buffer_b_tw_ready_dout0),
    .ce1        (arraysa_buffer_b_tw_ready_ce1),
    .we1        (arraysa_buffer_b_tw_ready_we1),
    .address1   (arraysa_buffer_b_tw_ready_address1),
    .din1       (arraysa_buffer_b_tw_ready_din1),
    .dout1      (arraysa_buffer_b_tw_ready_dout1),
    .ready      (arraysa_buffer_b_tw_ready_ready),
    .done    (arraysa_buffer_b_tw_ready_done)
);

// Assignment between dut and arraysa_buffer_b_tw_ready
assign arraysa_buffer_b_tw_ready_address0 = sa_buffer_b_tw_ready_address0;
assign arraysa_buffer_b_tw_ready_ce0 = sa_buffer_b_tw_ready_ce0;
assign sa_buffer_b_tw_ready_q0 = arraysa_buffer_b_tw_ready_dout0;
assign arraysa_buffer_b_tw_ready_we0 = sa_buffer_b_tw_ready_we0;
assign arraysa_buffer_b_tw_ready_din0 = sa_buffer_b_tw_ready_d0;
assign arraysa_buffer_b_tw_ready_we1 = 0;
assign arraysa_buffer_b_tw_ready_din1 = 0;
assign arraysa_buffer_b_tw_ready_ready= ready;
assign arraysa_buffer_b_tw_ready_done = interface_done;


//------------------------arraysa_buffer_b_tw_value Instantiation--------------

// The input and output of arraysa_buffer_b_tw_value
wire    arraysa_buffer_b_tw_value_ce0, arraysa_buffer_b_tw_value_ce1;
wire    arraysa_buffer_b_tw_value_we0, arraysa_buffer_b_tw_value_we1;
wire    [0 : 0]    arraysa_buffer_b_tw_value_address0, arraysa_buffer_b_tw_value_address1;
wire    [31 : 0]    arraysa_buffer_b_tw_value_din0, arraysa_buffer_b_tw_value_din1;
wire    [31 : 0]    arraysa_buffer_b_tw_value_dout0, arraysa_buffer_b_tw_value_dout1;
wire    arraysa_buffer_b_tw_value_ready;
wire    arraysa_buffer_b_tw_value_done;

`AESL_MEM_sa_buffer_b_tw_value `AESL_MEM_INST_sa_buffer_b_tw_value(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_buffer_b_tw_value_ce0),
    .we0        (arraysa_buffer_b_tw_value_we0),
    .address0   (arraysa_buffer_b_tw_value_address0),
    .din0       (arraysa_buffer_b_tw_value_din0),
    .dout0      (arraysa_buffer_b_tw_value_dout0),
    .ce1        (arraysa_buffer_b_tw_value_ce1),
    .we1        (arraysa_buffer_b_tw_value_we1),
    .address1   (arraysa_buffer_b_tw_value_address1),
    .din1       (arraysa_buffer_b_tw_value_din1),
    .dout1      (arraysa_buffer_b_tw_value_dout1),
    .ready      (arraysa_buffer_b_tw_value_ready),
    .done    (arraysa_buffer_b_tw_value_done)
);

// Assignment between dut and arraysa_buffer_b_tw_value
assign arraysa_buffer_b_tw_value_address0 = sa_buffer_b_tw_value_address0;
assign arraysa_buffer_b_tw_value_ce0 = sa_buffer_b_tw_value_ce0;
assign sa_buffer_b_tw_value_q0 = arraysa_buffer_b_tw_value_dout0;
assign arraysa_buffer_b_tw_value_we0 = 0;
assign arraysa_buffer_b_tw_value_din0 = 0;
assign arraysa_buffer_b_tw_value_we1 = 0;
assign arraysa_buffer_b_tw_value_din1 = 0;
assign arraysa_buffer_b_tw_value_ready=    ready;
assign arraysa_buffer_b_tw_value_done = 0;


//------------------------arraysa_ba_sa Instantiation--------------

// The input and output of arraysa_ba_sa
wire    arraysa_ba_sa_ce0, arraysa_ba_sa_ce1;
wire    arraysa_ba_sa_we0, arraysa_ba_sa_we1;
wire    [1 : 0]    arraysa_ba_sa_address0, arraysa_ba_sa_address1;
wire    [31 : 0]    arraysa_ba_sa_din0, arraysa_ba_sa_din1;
wire    [31 : 0]    arraysa_ba_sa_dout0, arraysa_ba_sa_dout1;
wire    arraysa_ba_sa_ready;
wire    arraysa_ba_sa_done;

`AESL_MEM_sa_ba_sa `AESL_MEM_INST_sa_ba_sa(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysa_ba_sa_ce0),
    .we0        (arraysa_ba_sa_we0),
    .address0   (arraysa_ba_sa_address0),
    .din0       (arraysa_ba_sa_din0),
    .dout0      (arraysa_ba_sa_dout0),
    .ce1        (arraysa_ba_sa_ce1),
    .we1        (arraysa_ba_sa_we1),
    .address1   (arraysa_ba_sa_address1),
    .din1       (arraysa_ba_sa_din1),
    .dout1      (arraysa_ba_sa_dout1),
    .ready      (arraysa_ba_sa_ready),
    .done    (arraysa_ba_sa_done)
);

// Assignment between dut and arraysa_ba_sa
assign arraysa_ba_sa_address0 = sa_ba_sa_address0;
assign arraysa_ba_sa_ce0 = sa_ba_sa_ce0;
assign arraysa_ba_sa_we0 = sa_ba_sa_we0;
assign arraysa_ba_sa_din0 = sa_ba_sa_d0;
assign arraysa_ba_sa_we1 = 0;
assign arraysa_ba_sa_din1 = 0;
assign arraysa_ba_sa_ready= ready_initial | arraysa_ba_sa_done;
assign arraysa_ba_sa_done =    AESL_done_delay;


initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        integer fp1;
        integer fp2;
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_pe_li.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_pe_li.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_pe_li.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_pe_li.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_pe_li.dat with impl_rtl.sa_compute.autotvout_sa_pe_li.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_pe_tw.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_pe_tw.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_pe_tw.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_pe_tw.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_pe_tw.dat with impl_rtl.sa_compute.autotvout_sa_pe_tw.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_pe_ri.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_pe_ri.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_pe_ri.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_pe_ri.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_pe_ri.dat with impl_rtl.sa_compute.autotvout_sa_pe_ri.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_pe_bw.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_pe_bw.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_pe_bw.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_pe_bw.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_pe_bw.dat with impl_rtl.sa_compute.autotvout_sa_pe_bw.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_pe_ba.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_pe_ba.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_pe_ba.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_pe_ba.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_pe_ba.dat with impl_rtl.sa_compute.autotvout_sa_pe_ba.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat with impl_rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat with impl_rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.sa_compute.autotvout_sa_ba_sa.dat", "r");
    fp2 = $fopen("./impl_rtl.sa_compute.autotvout_sa_ba_sa.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sa_compute.autotvout_sa_ba_sa.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sa_compute.autotvout_sa_ba_sa.dat\"!");
    else begin
        $display("Comparing rtl.sa_compute.autotvout_sa_ba_sa.dat with impl_rtl.sa_compute.autotvout_sa_ba_sa.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
        $display("Simulation Passed.");
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_sa_pe_li;
reg [31:0] size_sa_pe_li;
reg [31:0] size_sa_pe_li_backup;
reg end_sa_pe_tw;
reg [31:0] size_sa_pe_tw;
reg [31:0] size_sa_pe_tw_backup;
reg end_sa_pe_ri;
reg [31:0] size_sa_pe_ri;
reg [31:0] size_sa_pe_ri_backup;
reg end_sa_pe_bw;
reg [31:0] size_sa_pe_bw;
reg [31:0] size_sa_pe_bw_backup;
reg end_sa_pe_ba;
reg [31:0] size_sa_pe_ba;
reg [31:0] size_sa_pe_ba_backup;
reg end_sa_buffer_a_li_ready;
reg [31:0] size_sa_buffer_a_li_ready;
reg [31:0] size_sa_buffer_a_li_ready_backup;
reg end_sa_buffer_a_li_value;
reg [31:0] size_sa_buffer_a_li_value;
reg [31:0] size_sa_buffer_a_li_value_backup;
reg end_sa_buffer_b_tw_ready;
reg [31:0] size_sa_buffer_b_tw_ready;
reg [31:0] size_sa_buffer_b_tw_ready_backup;
reg end_sa_buffer_b_tw_value;
reg [31:0] size_sa_buffer_b_tw_value;
reg [31:0] size_sa_buffer_b_tw_value_backup;
reg end_sa_ba_sa;
reg [31:0] size_sa_ba_sa;
reg [31:0] size_sa_ba_sa_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

reg dump_tvout_finish_sa_pe_li;

initial begin : dump_tvout_runtime_sign_sa_pe_li
    integer fp;
    dump_tvout_finish_sa_pe_li = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_li_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_li_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_li_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_li_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_pe_li = 1;
end


reg dump_tvout_finish_sa_pe_tw;

initial begin : dump_tvout_runtime_sign_sa_pe_tw
    integer fp;
    dump_tvout_finish_sa_pe_tw = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_tw_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_tw_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_tw_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_tw_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_pe_tw = 1;
end


reg dump_tvout_finish_sa_pe_ri;

initial begin : dump_tvout_runtime_sign_sa_pe_ri
    integer fp;
    dump_tvout_finish_sa_pe_ri = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_ri_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_ri_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_ri_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_ri_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_pe_ri = 1;
end


reg dump_tvout_finish_sa_pe_bw;

initial begin : dump_tvout_runtime_sign_sa_pe_bw
    integer fp;
    dump_tvout_finish_sa_pe_bw = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_bw_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_bw_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_bw_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_bw_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_pe_bw = 1;
end


reg dump_tvout_finish_sa_pe_ba;

initial begin : dump_tvout_runtime_sign_sa_pe_ba
    integer fp;
    dump_tvout_finish_sa_pe_ba = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_ba_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_ba_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_pe_ba_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_pe_ba_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_pe_ba = 1;
end


reg dump_tvout_finish_sa_buffer_a_li_ready;

initial begin : dump_tvout_runtime_sign_sa_buffer_a_li_ready
    integer fp;
    dump_tvout_finish_sa_buffer_a_li_ready = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_buffer_a_li_ready_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_buffer_a_li_ready_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_buffer_a_li_ready_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_buffer_a_li_ready_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_buffer_a_li_ready = 1;
end


reg dump_tvout_finish_sa_buffer_b_tw_ready;

initial begin : dump_tvout_runtime_sign_sa_buffer_b_tw_ready
    integer fp;
    dump_tvout_finish_sa_buffer_b_tw_ready = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_buffer_b_tw_ready_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_buffer_b_tw_ready_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_buffer_b_tw_ready_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_buffer_b_tw_ready_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_buffer_b_tw_ready = 1;
end


reg dump_tvout_finish_sa_ba_sa;

initial begin : dump_tvout_runtime_sign_sa_ba_sa
    integer fp;
    dump_tvout_finish_sa_ba_sa = 0;
    fp = $fopen(`AUTOTB_TVOUT_sa_ba_sa_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_ba_sa_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sa_ba_sa_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sa_ba_sa_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sa_ba_sa = 1;
end


////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = finish_timestamp[i] - start_timestamp[i]+1;
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
