// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="sa_compute,hls_ip_2019_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a35t-cpg236-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.470000,HLS_SYN_LAT=25,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=177,HLS_SYN_LUT=624,HLS_VERSION=2019_2}" *)

module sa_compute (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        sa_pe_li_address0,
        sa_pe_li_ce0,
        sa_pe_li_we0,
        sa_pe_li_d0,
        sa_pe_li_q0,
        sa_pe_tw_address0,
        sa_pe_tw_ce0,
        sa_pe_tw_we0,
        sa_pe_tw_d0,
        sa_pe_tw_q0,
        sa_pe_ri_address0,
        sa_pe_ri_ce0,
        sa_pe_ri_we0,
        sa_pe_ri_d0,
        sa_pe_ri_q0,
        sa_pe_bw_address0,
        sa_pe_bw_ce0,
        sa_pe_bw_we0,
        sa_pe_bw_d0,
        sa_pe_bw_q0,
        sa_pe_ba_address0,
        sa_pe_ba_ce0,
        sa_pe_ba_we0,
        sa_pe_ba_d0,
        sa_pe_ba_q0,
        sa_buffer_a_li_ready_address0,
        sa_buffer_a_li_ready_ce0,
        sa_buffer_a_li_ready_we0,
        sa_buffer_a_li_ready_d0,
        sa_buffer_a_li_ready_q0,
        sa_buffer_a_li_value_address0,
        sa_buffer_a_li_value_ce0,
        sa_buffer_a_li_value_q0,
        sa_buffer_b_tw_ready_address0,
        sa_buffer_b_tw_ready_ce0,
        sa_buffer_b_tw_ready_we0,
        sa_buffer_b_tw_ready_d0,
        sa_buffer_b_tw_ready_q0,
        sa_buffer_b_tw_value_address0,
        sa_buffer_b_tw_value_ce0,
        sa_buffer_b_tw_value_q0,
        sa_ba_sa_address0,
        sa_ba_sa_ce0,
        sa_ba_sa_we0,
        sa_ba_sa_d0
);

parameter    ap_ST_fsm_state1 = 21'd1;
parameter    ap_ST_fsm_state2 = 21'd2;
parameter    ap_ST_fsm_state3 = 21'd4;
parameter    ap_ST_fsm_state4 = 21'd8;
parameter    ap_ST_fsm_state5 = 21'd16;
parameter    ap_ST_fsm_state6 = 21'd32;
parameter    ap_ST_fsm_state7 = 21'd64;
parameter    ap_ST_fsm_state8 = 21'd128;
parameter    ap_ST_fsm_state9 = 21'd256;
parameter    ap_ST_fsm_state10 = 21'd512;
parameter    ap_ST_fsm_state11 = 21'd1024;
parameter    ap_ST_fsm_state12 = 21'd2048;
parameter    ap_ST_fsm_state13 = 21'd4096;
parameter    ap_ST_fsm_state14 = 21'd8192;
parameter    ap_ST_fsm_state15 = 21'd16384;
parameter    ap_ST_fsm_state16 = 21'd32768;
parameter    ap_ST_fsm_state17 = 21'd65536;
parameter    ap_ST_fsm_state18 = 21'd131072;
parameter    ap_ST_fsm_state19 = 21'd262144;
parameter    ap_ST_fsm_state20 = 21'd524288;
parameter    ap_ST_fsm_state21 = 21'd1048576;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [1:0] sa_pe_li_address0;
output   sa_pe_li_ce0;
output   sa_pe_li_we0;
output  [31:0] sa_pe_li_d0;
input  [31:0] sa_pe_li_q0;
output  [1:0] sa_pe_tw_address0;
output   sa_pe_tw_ce0;
output   sa_pe_tw_we0;
output  [31:0] sa_pe_tw_d0;
input  [31:0] sa_pe_tw_q0;
output  [1:0] sa_pe_ri_address0;
output   sa_pe_ri_ce0;
output   sa_pe_ri_we0;
output  [31:0] sa_pe_ri_d0;
input  [31:0] sa_pe_ri_q0;
output  [1:0] sa_pe_bw_address0;
output   sa_pe_bw_ce0;
output   sa_pe_bw_we0;
output  [31:0] sa_pe_bw_d0;
input  [31:0] sa_pe_bw_q0;
output  [1:0] sa_pe_ba_address0;
output   sa_pe_ba_ce0;
output   sa_pe_ba_we0;
output  [31:0] sa_pe_ba_d0;
input  [31:0] sa_pe_ba_q0;
output  [0:0] sa_buffer_a_li_ready_address0;
output   sa_buffer_a_li_ready_ce0;
output   sa_buffer_a_li_ready_we0;
output  [0:0] sa_buffer_a_li_ready_d0;
input  [0:0] sa_buffer_a_li_ready_q0;
output  [0:0] sa_buffer_a_li_value_address0;
output   sa_buffer_a_li_value_ce0;
input  [31:0] sa_buffer_a_li_value_q0;
output  [0:0] sa_buffer_b_tw_ready_address0;
output   sa_buffer_b_tw_ready_ce0;
output   sa_buffer_b_tw_ready_we0;
output  [0:0] sa_buffer_b_tw_ready_d0;
input  [0:0] sa_buffer_b_tw_ready_q0;
output  [0:0] sa_buffer_b_tw_value_address0;
output   sa_buffer_b_tw_value_ce0;
input  [31:0] sa_buffer_b_tw_value_q0;
output  [1:0] sa_ba_sa_address0;
output   sa_ba_sa_ce0;
output   sa_ba_sa_we0;
output  [31:0] sa_ba_sa_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[1:0] sa_pe_li_address0;
reg sa_pe_li_ce0;
reg sa_pe_li_we0;
reg[31:0] sa_pe_li_d0;
reg[1:0] sa_pe_tw_address0;
reg sa_pe_tw_ce0;
reg sa_pe_tw_we0;
reg[31:0] sa_pe_tw_d0;
reg[1:0] sa_pe_ri_address0;
reg sa_pe_ri_ce0;
reg sa_pe_ri_we0;
reg[1:0] sa_pe_bw_address0;
reg sa_pe_bw_ce0;
reg sa_pe_bw_we0;
reg[1:0] sa_pe_ba_address0;
reg sa_pe_ba_ce0;
reg sa_pe_ba_we0;
reg[0:0] sa_buffer_a_li_ready_address0;
reg sa_buffer_a_li_ready_ce0;
reg sa_buffer_a_li_ready_we0;
reg sa_buffer_a_li_value_ce0;
reg[0:0] sa_buffer_b_tw_ready_address0;
reg sa_buffer_b_tw_ready_ce0;
reg sa_buffer_b_tw_ready_we0;
reg sa_buffer_b_tw_value_ce0;
reg sa_ba_sa_ce0;
reg sa_ba_sa_we0;

(* fsm_encoding = "none" *) reg   [20:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [0:0] icmp_ln35_fu_372_p2;
reg   [0:0] icmp_ln35_reg_632;
wire    ap_CS_fsm_state2;
wire   [1:0] i_fu_378_p2;
reg   [1:0] i_reg_636;
wire   [0:0] icmp_ln43_fu_389_p2;
reg   [0:0] icmp_ln43_reg_649;
wire    ap_CS_fsm_state4;
wire   [1:0] j_fu_395_p2;
reg   [1:0] j_reg_653;
wire   [1:0] i_3_fu_412_p2;
reg   [1:0] i_3_reg_669;
wire    ap_CS_fsm_state6;
wire   [0:0] icmp_ln51_fu_406_p2;
wire   [1:0] j_2_fu_443_p2;
reg   [1:0] j_2_reg_682;
wire    ap_CS_fsm_state8;
wire   [63:0] zext_ln58_fu_449_p1;
reg   [63:0] zext_ln58_reg_687;
wire   [0:0] icmp_ln57_fu_437_p2;
wire   [1:0] i_6_fu_460_p2;
reg   [1:0] i_6_reg_701;
wire    ap_CS_fsm_state10;
wire   [2:0] tmp_1_fu_466_p3;
reg   [2:0] tmp_1_reg_706;
wire   [0:0] icmp_ln63_fu_454_p2;
wire   [1:0] add_ln71_fu_499_p2;
reg   [1:0] add_ln71_reg_719;
wire    ap_CS_fsm_state12;
wire   [0:0] icmp_ln71_fu_493_p2;
wire   [1:0] i_7_fu_527_p2;
reg   [1:0] i_7_reg_732;
wire    ap_CS_fsm_state14;
wire   [3:0] zext_ln78_fu_541_p1;
reg   [3:0] zext_ln78_reg_737;
wire   [0:0] icmp_ln77_fu_521_p2;
wire   [1:0] j_3_fu_551_p2;
reg   [1:0] j_3_reg_745;
wire    ap_CS_fsm_state15;
wire   [63:0] zext_ln79_1_fu_566_p1;
reg   [63:0] zext_ln79_1_reg_750;
wire   [0:0] icmp_ln78_fu_545_p2;
reg   [1:0] sa_pe_ba_addr_reg_767;
wire    ap_CS_fsm_state16;
reg  signed [31:0] sa_pe_li_load_reg_772;
reg  signed [31:0] sa_pe_tw_load_reg_777;
wire   [31:0] mul_ln14_fu_572_p2;
reg   [31:0] mul_ln14_reg_782;
wire    ap_CS_fsm_state17;
wire   [1:0] i_8_fu_588_p2;
reg   [1:0] i_8_reg_790;
wire    ap_CS_fsm_state19;
wire   [3:0] zext_ln85_fu_602_p1;
reg   [3:0] zext_ln85_reg_795;
wire   [0:0] icmp_ln84_fu_582_p2;
wire   [1:0] j_6_fu_612_p2;
reg   [1:0] j_6_reg_803;
wire    ap_CS_fsm_state20;
wire   [63:0] zext_ln86_1_fu_627_p1;
reg   [63:0] zext_ln86_1_reg_808;
wire   [0:0] icmp_ln85_fu_606_p2;
reg   [1:0] i_0_reg_260;
wire    ap_CS_fsm_state3;
reg   [1:0] j_0_reg_271;
wire    ap_CS_fsm_state5;
reg   [1:0] i_1_reg_282;
wire    ap_CS_fsm_state7;
reg   [1:0] j_1_reg_294;
wire    ap_CS_fsm_state9;
reg   [1:0] i_2_reg_305;
wire    ap_CS_fsm_state11;
reg   [1:0] j_3_0_reg_316;
wire    ap_CS_fsm_state13;
reg   [1:0] i_4_reg_328;
reg   [1:0] j_4_reg_339;
wire    ap_CS_fsm_state18;
reg   [1:0] i_5_reg_350;
reg   [1:0] j_5_reg_361;
wire    ap_CS_fsm_state21;
wire   [63:0] zext_ln36_fu_384_p1;
wire   [63:0] zext_ln44_fu_401_p1;
wire   [63:0] zext_ln52_fu_418_p1;
wire   [63:0] zext_ln52_1_fu_432_p1;
wire   [63:0] zext_ln65_fu_474_p1;
wire   [63:0] tmp_2_fu_484_p3;
wire   [63:0] zext_ln72_fu_505_p1;
wire   [63:0] zext_ln72_1_fu_516_p1;
wire   [2:0] tmp_fu_424_p3;
wire   [2:0] or_ln65_fu_479_p2;
wire   [1:0] xor_ln72_fu_510_p2;
wire   [2:0] tmp_3_fu_533_p3;
wire   [3:0] zext_ln79_fu_557_p1;
wire   [3:0] add_ln79_fu_561_p2;
wire   [2:0] tmp_4_fu_594_p3;
wire   [3:0] zext_ln86_fu_618_p1;
wire   [3:0] add_ln86_fu_622_p2;
reg   [20:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 21'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((sa_buffer_a_li_ready_q0 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_0_reg_260 <= i_reg_636;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_260 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln43_fu_389_p2 == 1'd1))) begin
        i_1_reg_282 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_1_reg_282 <= i_3_reg_669;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln57_fu_437_p2 == 1'd1))) begin
        i_2_reg_305 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        i_2_reg_305 <= i_6_reg_701;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state12) & (icmp_ln71_fu_493_p2 == 1'd1))) begin
        i_4_reg_328 <= 2'd0;
    end else if (((icmp_ln78_fu_545_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state15))) begin
        i_4_reg_328 <= i_7_reg_732;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln77_fu_521_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14))) begin
        i_5_reg_350 <= 2'd0;
    end else if (((icmp_ln85_fu_606_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state20))) begin
        i_5_reg_350 <= i_8_reg_790;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln35_fu_372_p2 == 1'd1))) begin
        j_0_reg_271 <= 2'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (sa_buffer_b_tw_ready_q0 == 1'd1))) begin
        j_0_reg_271 <= j_reg_653;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln51_fu_406_p2 == 1'd1))) begin
        j_1_reg_294 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        j_1_reg_294 <= j_2_reg_682;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state10) & (icmp_ln63_fu_454_p2 == 1'd1))) begin
        j_3_0_reg_316 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        j_3_0_reg_316 <= add_ln71_reg_719;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state14) & (icmp_ln77_fu_521_p2 == 1'd0))) begin
        j_4_reg_339 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        j_4_reg_339 <= j_3_reg_745;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state19) & (icmp_ln43_reg_649 == 1'd1) & (icmp_ln84_fu_582_p2 == 1'd0) & (icmp_ln35_reg_632 == 1'd1))) begin
        j_5_reg_361 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state21)) begin
        j_5_reg_361 <= j_6_reg_803;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        add_ln71_reg_719 <= add_ln71_fu_499_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_3_reg_669 <= i_3_fu_412_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_6_reg_701 <= i_6_fu_460_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        i_7_reg_732 <= i_7_fu_527_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state19) & (icmp_ln43_reg_649 == 1'd1) & (icmp_ln35_reg_632 == 1'd1))) begin
        i_8_reg_790 <= i_8_fu_588_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_636 <= i_fu_378_p2;
        icmp_ln35_reg_632 <= icmp_ln35_fu_372_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        icmp_ln43_reg_649 <= icmp_ln43_fu_389_p2;
        j_reg_653 <= j_fu_395_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        j_2_reg_682 <= j_2_fu_443_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        j_3_reg_745 <= j_3_fu_551_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        j_6_reg_803 <= j_6_fu_612_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        mul_ln14_reg_782 <= mul_ln14_fu_572_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        sa_pe_ba_addr_reg_767 <= zext_ln79_1_reg_750;
        sa_pe_li_load_reg_772 <= sa_pe_li_q0;
        sa_pe_tw_load_reg_777 <= sa_pe_tw_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state10) & (icmp_ln63_fu_454_p2 == 1'd0))) begin
        tmp_1_reg_706[2 : 1] <= tmp_1_fu_466_p3[2 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln57_fu_437_p2 == 1'd0))) begin
        zext_ln58_reg_687[1 : 0] <= zext_ln58_fu_449_p1[1 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state14) & (icmp_ln77_fu_521_p2 == 1'd0))) begin
        zext_ln78_reg_737[2 : 1] <= zext_ln78_fu_541_p1[2 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state15) & (icmp_ln78_fu_545_p2 == 1'd0))) begin
        zext_ln79_1_reg_750[3 : 0] <= zext_ln79_1_fu_566_p1[3 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state19) & (icmp_ln43_reg_649 == 1'd1) & (icmp_ln84_fu_582_p2 == 1'd0) & (icmp_ln35_reg_632 == 1'd1))) begin
        zext_ln85_reg_795[2 : 1] <= zext_ln85_fu_602_p1[2 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state20) & (icmp_ln85_fu_606_p2 == 1'd0))) begin
        zext_ln86_1_reg_808[3 : 0] <= zext_ln86_1_fu_627_p1[3 : 0];
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state19) & ((icmp_ln35_reg_632 == 1'd0) | ((icmp_ln84_fu_582_p2 == 1'd1) | (icmp_ln43_reg_649 == 1'd0))))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state19) & ((icmp_ln35_reg_632 == 1'd0) | ((icmp_ln84_fu_582_p2 == 1'd1) | (icmp_ln43_reg_649 == 1'd0))))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        sa_ba_sa_ce0 = 1'b1;
    end else begin
        sa_ba_sa_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        sa_ba_sa_we0 = 1'b1;
    end else begin
        sa_ba_sa_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sa_buffer_a_li_ready_address0 = zext_ln52_fu_418_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        sa_buffer_a_li_ready_address0 = zext_ln36_fu_384_p1;
    end else begin
        sa_buffer_a_li_ready_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state2))) begin
        sa_buffer_a_li_ready_ce0 = 1'b1;
    end else begin
        sa_buffer_a_li_ready_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln51_fu_406_p2 == 1'd0))) begin
        sa_buffer_a_li_ready_we0 = 1'b1;
    end else begin
        sa_buffer_a_li_ready_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sa_buffer_a_li_value_ce0 = 1'b1;
    end else begin
        sa_buffer_a_li_value_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        sa_buffer_b_tw_ready_address0 = zext_ln58_reg_687;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        sa_buffer_b_tw_ready_address0 = zext_ln44_fu_401_p1;
    end else begin
        sa_buffer_b_tw_ready_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state4))) begin
        sa_buffer_b_tw_ready_ce0 = 1'b1;
    end else begin
        sa_buffer_b_tw_ready_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        sa_buffer_b_tw_ready_we0 = 1'b1;
    end else begin
        sa_buffer_b_tw_ready_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        sa_buffer_b_tw_value_ce0 = 1'b1;
    end else begin
        sa_buffer_b_tw_value_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        sa_pe_ba_address0 = zext_ln86_1_fu_627_p1;
    end else if (((1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17))) begin
        sa_pe_ba_address0 = sa_pe_ba_addr_reg_767;
    end else begin
        sa_pe_ba_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state17))) begin
        sa_pe_ba_ce0 = 1'b1;
    end else begin
        sa_pe_ba_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        sa_pe_ba_we0 = 1'b1;
    end else begin
        sa_pe_ba_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        sa_pe_bw_address0 = zext_ln79_1_reg_750;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        sa_pe_bw_address0 = zext_ln72_fu_505_p1;
    end else begin
        sa_pe_bw_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state12))) begin
        sa_pe_bw_ce0 = 1'b1;
    end else begin
        sa_pe_bw_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        sa_pe_bw_we0 = 1'b1;
    end else begin
        sa_pe_bw_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        sa_pe_li_address0 = zext_ln79_1_fu_566_p1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        sa_pe_li_address0 = tmp_2_fu_484_p3;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        sa_pe_li_address0 = zext_ln52_1_fu_432_p1;
    end else begin
        sa_pe_li_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state15))) begin
        sa_pe_li_ce0 = 1'b1;
    end else begin
        sa_pe_li_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        sa_pe_li_d0 = sa_pe_ri_q0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        sa_pe_li_d0 = sa_buffer_a_li_value_q0;
    end else begin
        sa_pe_li_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7))) begin
        sa_pe_li_we0 = 1'b1;
    end else begin
        sa_pe_li_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        sa_pe_ri_address0 = zext_ln79_1_reg_750;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        sa_pe_ri_address0 = zext_ln65_fu_474_p1;
    end else begin
        sa_pe_ri_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state10))) begin
        sa_pe_ri_ce0 = 1'b1;
    end else begin
        sa_pe_ri_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        sa_pe_ri_we0 = 1'b1;
    end else begin
        sa_pe_ri_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        sa_pe_tw_address0 = zext_ln79_1_fu_566_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        sa_pe_tw_address0 = zext_ln72_1_fu_516_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        sa_pe_tw_address0 = zext_ln58_reg_687;
    end else begin
        sa_pe_tw_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state15))) begin
        sa_pe_tw_ce0 = 1'b1;
    end else begin
        sa_pe_tw_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        sa_pe_tw_d0 = sa_pe_bw_q0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        sa_pe_tw_d0 = sa_buffer_b_tw_value_q0;
    end else begin
        sa_pe_tw_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state9))) begin
        sa_pe_tw_we0 = 1'b1;
    end else begin
        sa_pe_tw_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln35_fu_372_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((sa_buffer_a_li_ready_q0 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln43_fu_389_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (sa_buffer_b_tw_ready_q0 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln51_fu_406_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln57_fu_437_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state10 : begin
            if (((1'b1 == ap_CS_fsm_state10) & (icmp_ln63_fu_454_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state12 : begin
            if (((1'b1 == ap_CS_fsm_state12) & (icmp_ln71_fu_493_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state14 : begin
            if (((icmp_ln77_fu_521_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state15 : begin
            if (((icmp_ln78_fu_545_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state15))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state19 : begin
            if (((1'b1 == ap_CS_fsm_state19) & ((icmp_ln35_reg_632 == 1'd0) | ((icmp_ln84_fu_582_p2 == 1'd1) | (icmp_ln43_reg_649 == 1'd0))))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end
        end
        ap_ST_fsm_state20 : begin
            if (((icmp_ln85_fu_606_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state20))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln71_fu_499_p2 = (j_3_0_reg_316 + 2'd1);

assign add_ln79_fu_561_p2 = (zext_ln78_reg_737 + zext_ln79_fu_557_p1);

assign add_ln86_fu_622_p2 = (zext_ln85_reg_795 + zext_ln86_fu_618_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign i_3_fu_412_p2 = (i_1_reg_282 + 2'd1);

assign i_6_fu_460_p2 = (i_2_reg_305 + 2'd1);

assign i_7_fu_527_p2 = (i_4_reg_328 + 2'd1);

assign i_8_fu_588_p2 = (i_5_reg_350 + 2'd1);

assign i_fu_378_p2 = (i_0_reg_260 + 2'd1);

assign icmp_ln35_fu_372_p2 = ((i_0_reg_260 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln43_fu_389_p2 = ((j_0_reg_271 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln51_fu_406_p2 = ((i_1_reg_282 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln57_fu_437_p2 = ((j_1_reg_294 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln63_fu_454_p2 = ((i_2_reg_305 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln71_fu_493_p2 = ((j_3_0_reg_316 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln77_fu_521_p2 = ((i_4_reg_328 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln78_fu_545_p2 = ((j_4_reg_339 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln84_fu_582_p2 = ((i_5_reg_350 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln85_fu_606_p2 = ((j_5_reg_361 == 2'd2) ? 1'b1 : 1'b0);

assign j_2_fu_443_p2 = (j_1_reg_294 + 2'd1);

assign j_3_fu_551_p2 = (j_4_reg_339 + 2'd1);

assign j_6_fu_612_p2 = (j_5_reg_361 + 2'd1);

assign j_fu_395_p2 = (j_0_reg_271 + 2'd1);

assign mul_ln14_fu_572_p2 = ($signed(sa_pe_tw_load_reg_777) * $signed(sa_pe_li_load_reg_772));

assign or_ln65_fu_479_p2 = (tmp_1_reg_706 | 3'd1);

assign sa_ba_sa_address0 = zext_ln86_1_reg_808;

assign sa_ba_sa_d0 = sa_pe_ba_q0;

assign sa_buffer_a_li_ready_d0 = 1'd0;

assign sa_buffer_a_li_value_address0 = zext_ln52_fu_418_p1;

assign sa_buffer_b_tw_ready_d0 = 1'd0;

assign sa_buffer_b_tw_value_address0 = zext_ln58_fu_449_p1;

assign sa_pe_ba_d0 = (mul_ln14_reg_782 + sa_pe_ba_q0);

assign sa_pe_bw_d0 = sa_pe_tw_q0;

assign sa_pe_ri_d0 = sa_pe_li_q0;

assign tmp_1_fu_466_p3 = {{i_2_reg_305}, {1'd0}};

assign tmp_2_fu_484_p3 = {{61'd0}, {or_ln65_fu_479_p2}};

assign tmp_3_fu_533_p3 = {{i_4_reg_328}, {1'd0}};

assign tmp_4_fu_594_p3 = {{i_5_reg_350}, {1'd0}};

assign tmp_fu_424_p3 = {{i_1_reg_282}, {1'd0}};

assign xor_ln72_fu_510_p2 = (j_3_0_reg_316 ^ 2'd2);

assign zext_ln36_fu_384_p1 = i_0_reg_260;

assign zext_ln44_fu_401_p1 = j_0_reg_271;

assign zext_ln52_1_fu_432_p1 = tmp_fu_424_p3;

assign zext_ln52_fu_418_p1 = i_1_reg_282;

assign zext_ln58_fu_449_p1 = j_1_reg_294;

assign zext_ln65_fu_474_p1 = tmp_1_fu_466_p3;

assign zext_ln72_1_fu_516_p1 = xor_ln72_fu_510_p2;

assign zext_ln72_fu_505_p1 = j_3_0_reg_316;

assign zext_ln78_fu_541_p1 = tmp_3_fu_533_p3;

assign zext_ln79_1_fu_566_p1 = add_ln79_fu_561_p2;

assign zext_ln79_fu_557_p1 = j_4_reg_339;

assign zext_ln85_fu_602_p1 = tmp_4_fu_594_p3;

assign zext_ln86_1_fu_627_p1 = add_ln86_fu_622_p2;

assign zext_ln86_fu_618_p1 = j_5_reg_361;

always @ (posedge ap_clk) begin
    zext_ln58_reg_687[63:2] <= 62'b00000000000000000000000000000000000000000000000000000000000000;
    tmp_1_reg_706[0] <= 1'b0;
    zext_ln78_reg_737[0] <= 1'b0;
    zext_ln78_reg_737[3] <= 1'b0;
    zext_ln79_1_reg_750[63:4] <= 60'b000000000000000000000000000000000000000000000000000000000000;
    zext_ln85_reg_795[0] <= 1'b0;
    zext_ln85_reg_795[3] <= 1'b0;
    zext_ln86_1_reg_808[63:4] <= 60'b000000000000000000000000000000000000000000000000000000000000;
end

endmodule //sa_compute
