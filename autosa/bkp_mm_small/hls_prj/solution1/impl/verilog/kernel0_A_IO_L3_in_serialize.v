// ==============================================================
// Generated by Vitis HLS v2023.1.1
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps 

module kernel0_A_IO_L3_in_serialize (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        m_axi_gmem_A_AWVALID,
        m_axi_gmem_A_AWREADY,
        m_axi_gmem_A_AWADDR,
        m_axi_gmem_A_AWID,
        m_axi_gmem_A_AWLEN,
        m_axi_gmem_A_AWSIZE,
        m_axi_gmem_A_AWBURST,
        m_axi_gmem_A_AWLOCK,
        m_axi_gmem_A_AWCACHE,
        m_axi_gmem_A_AWPROT,
        m_axi_gmem_A_AWQOS,
        m_axi_gmem_A_AWREGION,
        m_axi_gmem_A_AWUSER,
        m_axi_gmem_A_WVALID,
        m_axi_gmem_A_WREADY,
        m_axi_gmem_A_WDATA,
        m_axi_gmem_A_WSTRB,
        m_axi_gmem_A_WLAST,
        m_axi_gmem_A_WID,
        m_axi_gmem_A_WUSER,
        m_axi_gmem_A_ARVALID,
        m_axi_gmem_A_ARREADY,
        m_axi_gmem_A_ARADDR,
        m_axi_gmem_A_ARID,
        m_axi_gmem_A_ARLEN,
        m_axi_gmem_A_ARSIZE,
        m_axi_gmem_A_ARBURST,
        m_axi_gmem_A_ARLOCK,
        m_axi_gmem_A_ARCACHE,
        m_axi_gmem_A_ARPROT,
        m_axi_gmem_A_ARQOS,
        m_axi_gmem_A_ARREGION,
        m_axi_gmem_A_ARUSER,
        m_axi_gmem_A_RVALID,
        m_axi_gmem_A_RREADY,
        m_axi_gmem_A_RDATA,
        m_axi_gmem_A_RLAST,
        m_axi_gmem_A_RID,
        m_axi_gmem_A_RFIFONUM,
        m_axi_gmem_A_RUSER,
        m_axi_gmem_A_RRESP,
        m_axi_gmem_A_BVALID,
        m_axi_gmem_A_BREADY,
        m_axi_gmem_A_BRESP,
        m_axi_gmem_A_BID,
        m_axi_gmem_A_BUSER,
        fifo_A_A_IO_L3_in_serialize_din,
        fifo_A_A_IO_L3_in_serialize_num_data_valid,
        fifo_A_A_IO_L3_in_serialize_fifo_cap,
        fifo_A_A_IO_L3_in_serialize_full_n,
        fifo_A_A_IO_L3_in_serialize_write,
        start_out,
        start_write,
        A
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   m_axi_gmem_A_AWVALID;
input   m_axi_gmem_A_AWREADY;
output  [63:0] m_axi_gmem_A_AWADDR;
output  [0:0] m_axi_gmem_A_AWID;
output  [31:0] m_axi_gmem_A_AWLEN;
output  [2:0] m_axi_gmem_A_AWSIZE;
output  [1:0] m_axi_gmem_A_AWBURST;
output  [1:0] m_axi_gmem_A_AWLOCK;
output  [3:0] m_axi_gmem_A_AWCACHE;
output  [2:0] m_axi_gmem_A_AWPROT;
output  [3:0] m_axi_gmem_A_AWQOS;
output  [3:0] m_axi_gmem_A_AWREGION;
output  [0:0] m_axi_gmem_A_AWUSER;
output   m_axi_gmem_A_WVALID;
input   m_axi_gmem_A_WREADY;
output  [511:0] m_axi_gmem_A_WDATA;
output  [63:0] m_axi_gmem_A_WSTRB;
output   m_axi_gmem_A_WLAST;
output  [0:0] m_axi_gmem_A_WID;
output  [0:0] m_axi_gmem_A_WUSER;
output   m_axi_gmem_A_ARVALID;
input   m_axi_gmem_A_ARREADY;
output  [63:0] m_axi_gmem_A_ARADDR;
output  [0:0] m_axi_gmem_A_ARID;
output  [31:0] m_axi_gmem_A_ARLEN;
output  [2:0] m_axi_gmem_A_ARSIZE;
output  [1:0] m_axi_gmem_A_ARBURST;
output  [1:0] m_axi_gmem_A_ARLOCK;
output  [3:0] m_axi_gmem_A_ARCACHE;
output  [2:0] m_axi_gmem_A_ARPROT;
output  [3:0] m_axi_gmem_A_ARQOS;
output  [3:0] m_axi_gmem_A_ARREGION;
output  [0:0] m_axi_gmem_A_ARUSER;
input   m_axi_gmem_A_RVALID;
output   m_axi_gmem_A_RREADY;
input  [511:0] m_axi_gmem_A_RDATA;
input   m_axi_gmem_A_RLAST;
input  [0:0] m_axi_gmem_A_RID;
input  [8:0] m_axi_gmem_A_RFIFONUM;
input  [0:0] m_axi_gmem_A_RUSER;
input  [1:0] m_axi_gmem_A_RRESP;
input   m_axi_gmem_A_BVALID;
output   m_axi_gmem_A_BREADY;
input  [1:0] m_axi_gmem_A_BRESP;
input  [0:0] m_axi_gmem_A_BID;
input  [0:0] m_axi_gmem_A_BUSER;
output  [511:0] fifo_A_A_IO_L3_in_serialize_din;
input  [1:0] fifo_A_A_IO_L3_in_serialize_num_data_valid;
input  [1:0] fifo_A_A_IO_L3_in_serialize_fifo_cap;
input   fifo_A_A_IO_L3_in_serialize_full_n;
output   fifo_A_A_IO_L3_in_serialize_write;
output   start_out;
output   start_write;
input  [63:0] A;

reg ap_idle;
reg m_axi_gmem_A_ARVALID;
reg m_axi_gmem_A_RREADY;
reg fifo_A_A_IO_L3_in_serialize_write;
reg start_write;

reg    real_start;
reg    start_once_reg;
(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter9;
reg    ap_enable_reg_pp0_iter10;
reg    ap_idle_pp0;
wire    internal_ap_ready;
reg    ap_done_reg;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
reg   [0:0] first_iter_0_reg_91;
reg    ap_block_state2_io;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_state7_pp0_stage0_iter6;
wire    ap_block_state8_pp0_stage0_iter7;
wire    ap_block_state9_pp0_stage0_iter8;
reg   [0:0] icmp_ln38_reg_160;
reg   [0:0] icmp_ln38_reg_160_pp0_iter8_reg;
reg    ap_block_state10_pp0_stage0_iter9;
reg   [0:0] icmp_ln38_reg_160_pp0_iter9_reg;
reg    ap_block_state11_pp0_stage0_iter10;
reg    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln38_fu_111_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
reg    gmem_A_blk_n_AR;
wire    ap_block_pp0_stage0;
reg    gmem_A_blk_n_R;
reg    fifo_A_A_IO_L3_in_serialize_blk_n;
reg    ap_block_pp0_stage0_11001;
reg   [63:0] A_read_reg_155;
reg   [0:0] icmp_ln38_reg_160_pp0_iter1_reg;
reg   [0:0] icmp_ln38_reg_160_pp0_iter2_reg;
reg   [0:0] icmp_ln38_reg_160_pp0_iter3_reg;
reg   [0:0] icmp_ln38_reg_160_pp0_iter4_reg;
reg   [0:0] icmp_ln38_reg_160_pp0_iter5_reg;
reg   [0:0] icmp_ln38_reg_160_pp0_iter6_reg;
reg   [0:0] icmp_ln38_reg_160_pp0_iter7_reg;
reg   [511:0] gmem_A_addr_read_reg_170;
wire    ap_loop_init;
wire  signed [63:0] sext_ln38_fu_137_p1;
reg   [10:0] i_fu_62;
wire   [10:0] add_ln38_fu_117_p2;
reg   [10:0] ap_sig_allocacmp_i_3;
reg    ap_block_pp0_stage0_01001;
wire   [57:0] trunc_ln_fu_128_p4;
wire    ap_continue_int;
reg    ap_done_int;
reg    ap_loop_exit_ready_pp0_iter1_reg;
reg    ap_loop_exit_ready_pp0_iter2_reg;
reg    ap_loop_exit_ready_pp0_iter3_reg;
reg    ap_loop_exit_ready_pp0_iter4_reg;
reg    ap_loop_exit_ready_pp0_iter5_reg;
reg    ap_loop_exit_ready_pp0_iter6_reg;
reg    ap_loop_exit_ready_pp0_iter7_reg;
reg    ap_loop_exit_ready_pp0_iter8_reg;
reg    ap_loop_exit_ready_pp0_iter9_reg;
reg   [0:0] ap_NS_fsm;
wire    ap_enable_pp0;
wire    ap_start_int;
reg    ap_condition_338;
reg    ap_condition_257;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
#0 ap_enable_reg_pp0_iter10 = 1'b0;
#0 ap_done_reg = 1'b0;
end

kernel0_flow_control_loop_pipe flow_control_loop_pipe_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(real_start),
    .ap_ready(internal_ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage0),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int),
    .ap_continue(ap_continue)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue_int == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((ap_loop_exit_ready_pp0_iter9_reg == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_exit_pp0_iter0_stage0)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start_int;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((real_start == 1'b1) & (internal_ap_ready == 1'b0))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        if (((ap_loop_init == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            first_iter_0_reg_91 <= 1'd1;
        end else if ((1'b1 == ap_condition_338)) begin
            first_iter_0_reg_91 <= 1'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_condition_257)) begin
        if ((icmp_ln38_fu_111_p2 == 1'd0)) begin
            i_fu_62 <= add_ln38_fu_117_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_62 <= 11'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        A_read_reg_155 <= A;
        ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
        ap_loop_exit_ready_pp0_iter2_reg <= ap_loop_exit_ready_pp0_iter1_reg;
        icmp_ln38_reg_160 <= icmp_ln38_fu_111_p2;
        icmp_ln38_reg_160_pp0_iter1_reg <= icmp_ln38_reg_160;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        ap_loop_exit_ready_pp0_iter3_reg <= ap_loop_exit_ready_pp0_iter2_reg;
        ap_loop_exit_ready_pp0_iter4_reg <= ap_loop_exit_ready_pp0_iter3_reg;
        ap_loop_exit_ready_pp0_iter5_reg <= ap_loop_exit_ready_pp0_iter4_reg;
        ap_loop_exit_ready_pp0_iter6_reg <= ap_loop_exit_ready_pp0_iter5_reg;
        ap_loop_exit_ready_pp0_iter7_reg <= ap_loop_exit_ready_pp0_iter6_reg;
        ap_loop_exit_ready_pp0_iter8_reg <= ap_loop_exit_ready_pp0_iter7_reg;
        ap_loop_exit_ready_pp0_iter9_reg <= ap_loop_exit_ready_pp0_iter8_reg;
        icmp_ln38_reg_160_pp0_iter2_reg <= icmp_ln38_reg_160_pp0_iter1_reg;
        icmp_ln38_reg_160_pp0_iter3_reg <= icmp_ln38_reg_160_pp0_iter2_reg;
        icmp_ln38_reg_160_pp0_iter4_reg <= icmp_ln38_reg_160_pp0_iter3_reg;
        icmp_ln38_reg_160_pp0_iter5_reg <= icmp_ln38_reg_160_pp0_iter4_reg;
        icmp_ln38_reg_160_pp0_iter6_reg <= icmp_ln38_reg_160_pp0_iter5_reg;
        icmp_ln38_reg_160_pp0_iter7_reg <= icmp_ln38_reg_160_pp0_iter6_reg;
        icmp_ln38_reg_160_pp0_iter8_reg <= icmp_ln38_reg_160_pp0_iter7_reg;
        icmp_ln38_reg_160_pp0_iter9_reg <= icmp_ln38_reg_160_pp0_iter8_reg;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln38_reg_160_pp0_iter8_reg == 1'd0))) begin
        gmem_A_addr_read_reg_170 <= m_axi_gmem_A_RDATA;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln38_fu_111_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_exit_ready_pp0_iter9_reg == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_idle_pp0 == 1'b1) & (ap_start_int == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (ap_loop_init == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_sig_allocacmp_i_3 = 11'd0;
    end else begin
        ap_sig_allocacmp_i_3 = i_fu_62;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter10 == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (icmp_ln38_reg_160_pp0_iter9_reg == 1'd0))) begin
        fifo_A_A_IO_L3_in_serialize_blk_n = fifo_A_A_IO_L3_in_serialize_full_n;
    end else begin
        fifo_A_A_IO_L3_in_serialize_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter10 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln38_reg_160_pp0_iter9_reg == 1'd0))) begin
        fifo_A_A_IO_L3_in_serialize_write = 1'b1;
    end else begin
        fifo_A_A_IO_L3_in_serialize_write = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0) & (first_iter_0_reg_91 == 1'd1))) begin
        gmem_A_blk_n_AR = m_axi_gmem_A_ARREADY;
    end else begin
        gmem_A_blk_n_AR = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (icmp_ln38_reg_160_pp0_iter8_reg == 1'd0))) begin
        gmem_A_blk_n_R = m_axi_gmem_A_RVALID;
    end else begin
        gmem_A_blk_n_R = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (first_iter_0_reg_91 == 1'd1))) begin
        m_axi_gmem_A_ARVALID = 1'b1;
    end else begin
        m_axi_gmem_A_ARVALID = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln38_reg_160_pp0_iter8_reg == 1'd0))) begin
        m_axi_gmem_A_RREADY = 1'b1;
    end else begin
        m_axi_gmem_A_RREADY = 1'b0;
    end
end

always @ (*) begin
    if (((start_full_n == 1'b0) & (start_once_reg == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((real_start == 1'b1) & (start_once_reg == 1'b0))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln38_fu_117_p2 = (ap_sig_allocacmp_i_3 + 11'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_done_reg == 1'b1) | ((ap_done_reg == 1'b1) & (ap_start_int == 1'b1)) | ((ap_enable_reg_pp0_iter10 == 1'b1) & (icmp_ln38_reg_160_pp0_iter9_reg == 1'd0) & (fifo_A_A_IO_L3_in_serialize_full_n == 1'b0)) | ((ap_enable_reg_pp0_iter9 == 1'b1) & (icmp_ln38_reg_160_pp0_iter8_reg == 1'd0) & (m_axi_gmem_A_RVALID == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_done_reg == 1'b1) | ((ap_done_reg == 1'b1) & (ap_start_int == 1'b1)) | ((ap_enable_reg_pp0_iter10 == 1'b1) & (icmp_ln38_reg_160_pp0_iter9_reg == 1'd0) & (fifo_A_A_IO_L3_in_serialize_full_n == 1'b0)) | ((ap_enable_reg_pp0_iter9 == 1'b1) & (icmp_ln38_reg_160_pp0_iter8_reg == 1'd0) & (m_axi_gmem_A_RVALID == 1'b0)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_block_state2_io)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_done_reg == 1'b1) | ((ap_done_reg == 1'b1) & (ap_start_int == 1'b1)) | ((ap_enable_reg_pp0_iter10 == 1'b1) & (icmp_ln38_reg_160_pp0_iter9_reg == 1'd0) & (fifo_A_A_IO_L3_in_serialize_full_n == 1'b0)) | ((ap_enable_reg_pp0_iter9 == 1'b1) & (icmp_ln38_reg_160_pp0_iter8_reg == 1'd0) & (m_axi_gmem_A_RVALID == 1'b0)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_block_state2_io)));
end

always @ (*) begin
    ap_block_state10_pp0_stage0_iter9 = ((icmp_ln38_reg_160_pp0_iter8_reg == 1'd0) & (m_axi_gmem_A_RVALID == 1'b0));
end

always @ (*) begin
    ap_block_state11_pp0_stage0_iter10 = ((icmp_ln38_reg_160_pp0_iter9_reg == 1'd0) & (fifo_A_A_IO_L3_in_serialize_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_done_reg == 1'b1);
end

always @ (*) begin
    ap_block_state2_io = ((m_axi_gmem_A_ARREADY == 1'b0) & (first_iter_0_reg_91 == 1'd1));
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_condition_257 = ((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001));
end

always @ (*) begin
    ap_condition_338 = ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln38_reg_160 == 1'd0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start_int;

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign ap_ready = internal_ap_ready;

assign fifo_A_A_IO_L3_in_serialize_din = gmem_A_addr_read_reg_170;

assign icmp_ln38_fu_111_p2 = ((ap_sig_allocacmp_i_3 == 11'd1024) ? 1'b1 : 1'b0);

assign m_axi_gmem_A_ARADDR = sext_ln38_fu_137_p1;

assign m_axi_gmem_A_ARBURST = 2'd0;

assign m_axi_gmem_A_ARCACHE = 4'd0;

assign m_axi_gmem_A_ARID = 1'd0;

assign m_axi_gmem_A_ARLEN = 32'd1024;

assign m_axi_gmem_A_ARLOCK = 2'd0;

assign m_axi_gmem_A_ARPROT = 3'd0;

assign m_axi_gmem_A_ARQOS = 4'd0;

assign m_axi_gmem_A_ARREGION = 4'd0;

assign m_axi_gmem_A_ARSIZE = 3'd0;

assign m_axi_gmem_A_ARUSER = 1'd0;

assign m_axi_gmem_A_AWADDR = 64'd0;

assign m_axi_gmem_A_AWBURST = 2'd0;

assign m_axi_gmem_A_AWCACHE = 4'd0;

assign m_axi_gmem_A_AWID = 1'd0;

assign m_axi_gmem_A_AWLEN = 32'd0;

assign m_axi_gmem_A_AWLOCK = 2'd0;

assign m_axi_gmem_A_AWPROT = 3'd0;

assign m_axi_gmem_A_AWQOS = 4'd0;

assign m_axi_gmem_A_AWREGION = 4'd0;

assign m_axi_gmem_A_AWSIZE = 3'd0;

assign m_axi_gmem_A_AWUSER = 1'd0;

assign m_axi_gmem_A_AWVALID = 1'b0;

assign m_axi_gmem_A_BREADY = 1'b0;

assign m_axi_gmem_A_WDATA = 512'd0;

assign m_axi_gmem_A_WID = 1'd0;

assign m_axi_gmem_A_WLAST = 1'b0;

assign m_axi_gmem_A_WSTRB = 64'd0;

assign m_axi_gmem_A_WUSER = 1'd0;

assign m_axi_gmem_A_WVALID = 1'b0;

assign sext_ln38_fu_137_p1 = $signed(trunc_ln_fu_128_p4);

assign start_out = real_start;

assign trunc_ln_fu_128_p4 = {{A_read_reg_155[63:6]}};

endmodule //kernel0_A_IO_L3_in_serialize
