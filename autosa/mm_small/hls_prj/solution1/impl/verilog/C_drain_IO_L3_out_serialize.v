// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module C_drain_IO_L3_out_serialize (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        m_axi_C_V_AWVALID,
        m_axi_C_V_AWREADY,
        m_axi_C_V_AWADDR,
        m_axi_C_V_AWID,
        m_axi_C_V_AWLEN,
        m_axi_C_V_AWSIZE,
        m_axi_C_V_AWBURST,
        m_axi_C_V_AWLOCK,
        m_axi_C_V_AWCACHE,
        m_axi_C_V_AWPROT,
        m_axi_C_V_AWQOS,
        m_axi_C_V_AWREGION,
        m_axi_C_V_AWUSER,
        m_axi_C_V_WVALID,
        m_axi_C_V_WREADY,
        m_axi_C_V_WDATA,
        m_axi_C_V_WSTRB,
        m_axi_C_V_WLAST,
        m_axi_C_V_WID,
        m_axi_C_V_WUSER,
        m_axi_C_V_ARVALID,
        m_axi_C_V_ARREADY,
        m_axi_C_V_ARADDR,
        m_axi_C_V_ARID,
        m_axi_C_V_ARLEN,
        m_axi_C_V_ARSIZE,
        m_axi_C_V_ARBURST,
        m_axi_C_V_ARLOCK,
        m_axi_C_V_ARCACHE,
        m_axi_C_V_ARPROT,
        m_axi_C_V_ARQOS,
        m_axi_C_V_ARREGION,
        m_axi_C_V_ARUSER,
        m_axi_C_V_RVALID,
        m_axi_C_V_RREADY,
        m_axi_C_V_RDATA,
        m_axi_C_V_RLAST,
        m_axi_C_V_RID,
        m_axi_C_V_RUSER,
        m_axi_C_V_RRESP,
        m_axi_C_V_BVALID,
        m_axi_C_V_BREADY,
        m_axi_C_V_BRESP,
        m_axi_C_V_BID,
        m_axi_C_V_BUSER,
        C_V_offset_dout,
        C_V_offset_empty_n,
        C_V_offset_read,
        fifo_C_drain_local_in_V_V_dout,
        fifo_C_drain_local_in_V_V_empty_n,
        fifo_C_drain_local_in_V_V_read
);

parameter    ap_ST_fsm_state1 = 11'd1;
parameter    ap_ST_fsm_state2 = 11'd2;
parameter    ap_ST_fsm_pp0_stage0 = 11'd4;
parameter    ap_ST_fsm_pp0_stage1 = 11'd8;
parameter    ap_ST_fsm_pp0_stage2 = 11'd16;
parameter    ap_ST_fsm_pp0_stage3 = 11'd32;
parameter    ap_ST_fsm_state9 = 11'd64;
parameter    ap_ST_fsm_state10 = 11'd128;
parameter    ap_ST_fsm_state11 = 11'd256;
parameter    ap_ST_fsm_state12 = 11'd512;
parameter    ap_ST_fsm_state13 = 11'd1024;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   m_axi_C_V_AWVALID;
input   m_axi_C_V_AWREADY;
output  [31:0] m_axi_C_V_AWADDR;
output  [0:0] m_axi_C_V_AWID;
output  [31:0] m_axi_C_V_AWLEN;
output  [2:0] m_axi_C_V_AWSIZE;
output  [1:0] m_axi_C_V_AWBURST;
output  [1:0] m_axi_C_V_AWLOCK;
output  [3:0] m_axi_C_V_AWCACHE;
output  [2:0] m_axi_C_V_AWPROT;
output  [3:0] m_axi_C_V_AWQOS;
output  [3:0] m_axi_C_V_AWREGION;
output  [0:0] m_axi_C_V_AWUSER;
output   m_axi_C_V_WVALID;
input   m_axi_C_V_WREADY;
output  [511:0] m_axi_C_V_WDATA;
output  [63:0] m_axi_C_V_WSTRB;
output   m_axi_C_V_WLAST;
output  [0:0] m_axi_C_V_WID;
output  [0:0] m_axi_C_V_WUSER;
output   m_axi_C_V_ARVALID;
input   m_axi_C_V_ARREADY;
output  [31:0] m_axi_C_V_ARADDR;
output  [0:0] m_axi_C_V_ARID;
output  [31:0] m_axi_C_V_ARLEN;
output  [2:0] m_axi_C_V_ARSIZE;
output  [1:0] m_axi_C_V_ARBURST;
output  [1:0] m_axi_C_V_ARLOCK;
output  [3:0] m_axi_C_V_ARCACHE;
output  [2:0] m_axi_C_V_ARPROT;
output  [3:0] m_axi_C_V_ARQOS;
output  [3:0] m_axi_C_V_ARREGION;
output  [0:0] m_axi_C_V_ARUSER;
input   m_axi_C_V_RVALID;
output   m_axi_C_V_RREADY;
input  [511:0] m_axi_C_V_RDATA;
input   m_axi_C_V_RLAST;
input  [0:0] m_axi_C_V_RID;
input  [0:0] m_axi_C_V_RUSER;
input  [1:0] m_axi_C_V_RRESP;
input   m_axi_C_V_BVALID;
output   m_axi_C_V_BREADY;
input  [1:0] m_axi_C_V_BRESP;
input  [0:0] m_axi_C_V_BID;
input  [0:0] m_axi_C_V_BUSER;
input  [31:0] C_V_offset_dout;
input   C_V_offset_empty_n;
output   C_V_offset_read;
input  [127:0] fifo_C_drain_local_in_V_V_dout;
input   fifo_C_drain_local_in_V_V_empty_n;
output   fifo_C_drain_local_in_V_V_read;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg m_axi_C_V_AWVALID;
reg m_axi_C_V_WVALID;
reg m_axi_C_V_BREADY;
reg C_V_offset_read;
reg fifo_C_drain_local_in_V_V_read;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [10:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    C_V_blk_n_AW;
wire    ap_CS_fsm_state2;
reg    C_V_blk_n_W;
wire    ap_CS_fsm_pp0_stage1;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage1;
reg   [0:0] icmp_ln1164_reg_159;
reg   [0:0] icmp_ln1164_reg_159_pp0_iter1_reg;
reg    C_V_blk_n_B;
wire    ap_CS_fsm_state13;
reg    C_V_offset_blk_n;
reg    fifo_C_drain_local_in_V_V_blk_n;
reg    ap_enable_reg_pp0_iter0;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_pp0_stage2;
wire    ap_CS_fsm_pp0_stage3;
wire    ap_block_pp0_stage3;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_pp0_stage0;
reg   [8:0] t_V_reg_96;
reg   [25:0] C_V_offset1_i_reg_148;
reg    ap_block_state1;
wire   [0:0] icmp_ln1164_fu_127_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state7_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
wire   [8:0] i_V_fu_133_p2;
reg   [8:0] i_V_reg_163;
reg   [127:0] tmp_V_reg_168;
reg    ap_block_state4_pp0_stage1_iter0;
wire    ap_block_state8_pp0_stage1_iter1;
reg    ap_block_state8_io;
reg    ap_block_pp0_stage1_11001;
reg   [127:0] tmp_V_2_reg_173;
reg    ap_block_state5_pp0_stage2_iter0;
reg    ap_block_pp0_stage2_11001;
reg   [127:0] tmp_V_3_reg_178;
reg    ap_block_state6_pp0_stage3_iter0;
reg    ap_block_pp0_stage3_11001;
reg   [127:0] tmp_V_4_reg_183;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg    ap_block_pp0_stage3_subdone;
reg    ap_block_pp0_stage1_subdone;
reg   [8:0] ap_phi_mux_t_V_phi_fu_100_p4;
wire   [63:0] zext_ln1159_fu_117_p1;
reg    ap_block_pp0_stage1_01001;
reg   [10:0] ap_NS_fsm;
reg    ap_block_pp0_stage2_subdone;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 11'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((m_axi_C_V_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((m_axi_C_V_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3)) | ((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((m_axi_C_V_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        t_V_reg_96 <= i_V_reg_163;
    end else if (((m_axi_C_V_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        t_V_reg_96 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((1'b0 == C_V_offset_empty_n) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        C_V_offset1_i_reg_148 <= {{C_V_offset_dout[31:6]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_V_reg_163 <= i_V_fu_133_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln1164_reg_159 <= icmp_ln1164_fu_127_p2;
        icmp_ln1164_reg_159_pp0_iter1_reg <= icmp_ln1164_reg_159;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1164_reg_159 == 1'd0) & (1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        tmp_V_2_reg_173 <= fifo_C_drain_local_in_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1164_reg_159 == 1'd0) & (1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        tmp_V_3_reg_178 <= fifo_C_drain_local_in_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_V_4_reg_183 <= fifo_C_drain_local_in_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1164_reg_159 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        tmp_V_reg_168 <= fifo_C_drain_local_in_V_V_dout;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        C_V_blk_n_AW = m_axi_C_V_AWREADY;
    end else begin
        C_V_blk_n_AW = 1'b1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        C_V_blk_n_B = m_axi_C_V_BVALID;
    end else begin
        C_V_blk_n_B = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln1164_reg_159_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
        C_V_blk_n_W = m_axi_C_V_WREADY;
    end else begin
        C_V_blk_n_W = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        C_V_offset_blk_n = C_V_offset_empty_n;
    end else begin
        C_V_offset_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((1'b0 == C_V_offset_empty_n) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        C_V_offset_read = 1'b1;
    end else begin
        C_V_offset_read = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln1164_fu_127_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if (((m_axi_C_V_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
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
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_t_V_phi_fu_100_p4 = i_V_reg_163;
    end else begin
        ap_phi_mux_t_V_phi_fu_100_p4 = t_V_reg_96;
    end
end

always @ (*) begin
    if (((m_axi_C_V_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage3)) | ((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage2)) | ((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0)) | ((icmp_ln1164_reg_159 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1)))) begin
        fifo_C_drain_local_in_V_V_blk_n = fifo_C_drain_local_in_V_V_empty_n;
    end else begin
        fifo_C_drain_local_in_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((icmp_ln1164_reg_159 == 1'd0) & (1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((icmp_ln1164_reg_159 == 1'd0) & (1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((icmp_ln1164_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001)) | ((icmp_ln1164_reg_159 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        fifo_C_drain_local_in_V_V_read = 1'b1;
    end else begin
        fifo_C_drain_local_in_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((m_axi_C_V_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        m_axi_C_V_AWVALID = 1'b1;
    end else begin
        m_axi_C_V_AWVALID = 1'b0;
    end
end

always @ (*) begin
    if (((m_axi_C_V_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
        m_axi_C_V_BREADY = 1'b1;
    end else begin
        m_axi_C_V_BREADY = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln1164_reg_159_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        m_axi_C_V_WVALID = 1'b1;
    end else begin
        m_axi_C_V_WVALID = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((1'b0 == C_V_offset_empty_n) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((m_axi_C_V_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln1164_fu_127_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln1164_fu_127_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((~((1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b0)) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else if (((1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if ((1'b0 == ap_block_pp0_stage2_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        ap_ST_fsm_pp0_stage3 : begin
            if ((1'b0 == ap_block_pp0_stage3_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            if (((m_axi_C_V_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage1_01001 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage1_11001 = (((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((1'b1 == ap_block_state8_io) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage1_subdone = (((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((1'b1 == ap_block_state8_io) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage2_11001 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage2_subdone = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

assign ap_block_pp0_stage3 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage3_11001 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage3_subdone = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_state1 = ((1'b0 == C_V_offset_empty_n) | (ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_pp0_stage1_iter0 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state5_pp0_stage2_iter0 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state6_pp0_stage3_iter0 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state7_pp0_stage0_iter1 = ((icmp_ln1164_reg_159 == 1'd0) & (fifo_C_drain_local_in_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state8_io = ((icmp_ln1164_reg_159_pp0_iter1_reg == 1'd0) & (m_axi_C_V_WREADY == 1'b0));
end

assign ap_block_state8_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign i_V_fu_133_p2 = (ap_phi_mux_t_V_phi_fu_100_p4 + 9'd1);

assign icmp_ln1164_fu_127_p2 = ((ap_phi_mux_t_V_phi_fu_100_p4 == 9'd256) ? 1'b1 : 1'b0);

assign m_axi_C_V_ARADDR = 32'd0;

assign m_axi_C_V_ARBURST = 2'd0;

assign m_axi_C_V_ARCACHE = 4'd0;

assign m_axi_C_V_ARID = 1'd0;

assign m_axi_C_V_ARLEN = 32'd0;

assign m_axi_C_V_ARLOCK = 2'd0;

assign m_axi_C_V_ARPROT = 3'd0;

assign m_axi_C_V_ARQOS = 4'd0;

assign m_axi_C_V_ARREGION = 4'd0;

assign m_axi_C_V_ARSIZE = 3'd0;

assign m_axi_C_V_ARUSER = 1'd0;

assign m_axi_C_V_ARVALID = 1'b0;

assign m_axi_C_V_AWADDR = zext_ln1159_fu_117_p1;

assign m_axi_C_V_AWBURST = 2'd0;

assign m_axi_C_V_AWCACHE = 4'd0;

assign m_axi_C_V_AWID = 1'd0;

assign m_axi_C_V_AWLEN = 32'd256;

assign m_axi_C_V_AWLOCK = 2'd0;

assign m_axi_C_V_AWPROT = 3'd0;

assign m_axi_C_V_AWQOS = 4'd0;

assign m_axi_C_V_AWREGION = 4'd0;

assign m_axi_C_V_AWSIZE = 3'd0;

assign m_axi_C_V_AWUSER = 1'd0;

assign m_axi_C_V_RREADY = 1'b0;

assign m_axi_C_V_WDATA = {{{{tmp_V_4_reg_183}, {tmp_V_3_reg_178}}, {tmp_V_2_reg_173}}, {tmp_V_reg_168}};

assign m_axi_C_V_WID = 1'd0;

assign m_axi_C_V_WLAST = 1'b0;

assign m_axi_C_V_WSTRB = 64'd18446744073709551615;

assign m_axi_C_V_WUSER = 1'd0;

assign zext_ln1159_fu_117_p1 = C_V_offset1_i_reg_148;

endmodule //C_drain_IO_L3_out_serialize