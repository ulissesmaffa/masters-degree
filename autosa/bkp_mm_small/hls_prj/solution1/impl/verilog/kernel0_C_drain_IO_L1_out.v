// ==============================================================
// Generated by Vitis HLS v2023.1.1
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps 

module kernel0_C_drain_IO_L1_out (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        fifo_C_drain_C_drain_IO_L1_out_1_1_dout,
        fifo_C_drain_C_drain_IO_L1_out_1_1_num_data_valid,
        fifo_C_drain_C_drain_IO_L1_out_1_1_fifo_cap,
        fifo_C_drain_C_drain_IO_L1_out_1_1_empty_n,
        fifo_C_drain_C_drain_IO_L1_out_1_1_read,
        fifo_C_drain_C_drain_IO_L1_out_1_0_din,
        fifo_C_drain_C_drain_IO_L1_out_1_0_num_data_valid,
        fifo_C_drain_C_drain_IO_L1_out_1_0_fifo_cap,
        fifo_C_drain_C_drain_IO_L1_out_1_0_full_n,
        fifo_C_drain_C_drain_IO_L1_out_1_0_write,
        fifo_C_drain_PE_0_1_dout,
        fifo_C_drain_PE_0_1_num_data_valid,
        fifo_C_drain_PE_0_1_fifo_cap,
        fifo_C_drain_PE_0_1_empty_n,
        fifo_C_drain_PE_0_1_read
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_state5 = 6'd16;
parameter    ap_ST_fsm_state6 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [127:0] fifo_C_drain_C_drain_IO_L1_out_1_1_dout;
input  [1:0] fifo_C_drain_C_drain_IO_L1_out_1_1_num_data_valid;
input  [1:0] fifo_C_drain_C_drain_IO_L1_out_1_1_fifo_cap;
input   fifo_C_drain_C_drain_IO_L1_out_1_1_empty_n;
output   fifo_C_drain_C_drain_IO_L1_out_1_1_read;
output  [127:0] fifo_C_drain_C_drain_IO_L1_out_1_0_din;
input  [1:0] fifo_C_drain_C_drain_IO_L1_out_1_0_num_data_valid;
input  [1:0] fifo_C_drain_C_drain_IO_L1_out_1_0_fifo_cap;
input   fifo_C_drain_C_drain_IO_L1_out_1_0_full_n;
output   fifo_C_drain_C_drain_IO_L1_out_1_0_write;
input  [31:0] fifo_C_drain_PE_0_1_dout;
input  [1:0] fifo_C_drain_PE_0_1_num_data_valid;
input  [1:0] fifo_C_drain_PE_0_1_fifo_cap;
input   fifo_C_drain_PE_0_1_empty_n;
output   fifo_C_drain_PE_0_1_read;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg fifo_C_drain_C_drain_IO_L1_out_1_1_read;
reg[127:0] fifo_C_drain_C_drain_IO_L1_out_1_0_din;
reg fifo_C_drain_C_drain_IO_L1_out_1_0_write;
reg fifo_C_drain_PE_0_1_read;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] add_ln953_fu_119_p2;
reg   [4:0] add_ln953_reg_157;
wire    ap_CS_fsm_state2;
wire   [1:0] c4_1_fu_131_p2;
reg   [1:0] c4_1_reg_165;
wire    ap_CS_fsm_state5;
wire   [0:0] icmp_ln884_fu_137_p2;
reg   [0:0] icmp_ln884_reg_170;
wire   [0:0] icmp_ln882_fu_125_p2;
reg   [3:0] local_C_address0;
reg    local_C_ce0;
wire   [127:0] local_C_q0;
reg    local_C_ce1;
reg    local_C_we1;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_done;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_idle;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_ready;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_fifo_C_drain_PE_0_1_read;
wire   [3:0] grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_address0;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_ce0;
wire   [3:0] grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_address1;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_ce1;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_we1;
wire   [127:0] grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_d1;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_done;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_idle;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_ready;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_1_read;
wire   [127:0] grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_0_din;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_0_write;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_done;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_idle;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_ready;
wire   [127:0] grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_din;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_write;
wire   [3:0] grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_local_C_address0;
wire    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_local_C_ce0;
reg   [1:0] c4_reg_72;
wire    ap_CS_fsm_state6;
reg    ap_block_state6_on_subcall_done;
wire    ap_CS_fsm_state4;
reg    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start_reg;
wire   [0:0] icmp_ln953_fu_113_p2;
wire    ap_CS_fsm_state3;
reg    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start_reg;
reg    grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start_reg;
reg   [4:0] indvar_flatten20_fu_64;
reg   [5:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
reg    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
reg    ap_ST_fsm_state6_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start_reg = 1'b0;
#0 grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start_reg = 1'b0;
#0 grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start_reg = 1'b0;
end

kernel0_C_drain_IO_L1_out_boundary_wrapper_local_C_RAM_bkb #(
    .DataWidth( 128 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
local_C_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(local_C_address0),
    .ce0(local_C_ce0),
    .q0(local_C_q0),
    .address1(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_address1),
    .ce1(local_C_ce1),
    .we1(local_C_we1),
    .d1(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_d1)
);

kernel0_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start),
    .ap_done(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_done),
    .ap_idle(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_idle),
    .ap_ready(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_ready),
    .fifo_C_drain_PE_0_1_dout(fifo_C_drain_PE_0_1_dout),
    .fifo_C_drain_PE_0_1_num_data_valid(2'd0),
    .fifo_C_drain_PE_0_1_fifo_cap(2'd0),
    .fifo_C_drain_PE_0_1_empty_n(fifo_C_drain_PE_0_1_empty_n),
    .fifo_C_drain_PE_0_1_read(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_fifo_C_drain_PE_0_1_read),
    .local_C_address0(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_address0),
    .local_C_ce0(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_ce0),
    .local_C_q0(local_C_q0),
    .local_C_address1(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_address1),
    .local_C_ce1(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_ce1),
    .local_C_we1(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_we1),
    .local_C_d1(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_d1)
);

kernel0_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start),
    .ap_done(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_done),
    .ap_idle(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_idle),
    .ap_ready(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_ready),
    .fifo_C_drain_C_drain_IO_L1_out_1_1_dout(fifo_C_drain_C_drain_IO_L1_out_1_1_dout),
    .fifo_C_drain_C_drain_IO_L1_out_1_1_num_data_valid(2'd0),
    .fifo_C_drain_C_drain_IO_L1_out_1_1_fifo_cap(2'd0),
    .fifo_C_drain_C_drain_IO_L1_out_1_1_empty_n(fifo_C_drain_C_drain_IO_L1_out_1_1_empty_n),
    .fifo_C_drain_C_drain_IO_L1_out_1_1_read(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_1_read),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_din(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_0_din),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_num_data_valid(2'd0),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_fifo_cap(2'd0),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_full_n(fifo_C_drain_C_drain_IO_L1_out_1_0_full_n),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_write(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_0_write)
);

kernel0_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start),
    .ap_done(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_done),
    .ap_idle(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_idle),
    .ap_ready(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_ready),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_din(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_din),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_num_data_valid(2'd0),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_fifo_cap(2'd0),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_full_n(fifo_C_drain_C_drain_IO_L1_out_1_0_full_n),
    .fifo_C_drain_C_drain_IO_L1_out_1_0_write(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_write),
    .local_C_address0(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_local_C_address0),
    .local_C_ce0(grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_local_C_ce0),
    .local_C_q0(local_C_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln953_fu_113_p2 == 1'd0))) begin
            grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start_reg <= 1'b1;
        end else if ((grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_ready == 1'b1)) begin
            grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln882_fu_125_p2 == 1'd0) & (icmp_ln884_fu_137_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
            grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start_reg <= 1'b1;
        end else if ((grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_ready == 1'b1)) begin
            grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln882_fu_125_p2 == 1'd0) & (icmp_ln884_fu_137_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
            grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start_reg <= 1'b1;
        end else if ((grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_ready == 1'b1)) begin
            grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        c4_reg_72 <= 2'd0;
    end else if (((1'b1 == ap_CS_fsm_state6) & (1'b0 == ap_block_state6_on_subcall_done))) begin
        c4_reg_72 <= c4_1_reg_165;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvar_flatten20_fu_64 <= 5'd0;
    end else if (((icmp_ln882_fu_125_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        indvar_flatten20_fu_64 <= add_ln953_reg_157;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        add_ln953_reg_157 <= add_ln953_fu_119_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c4_1_reg_165 <= c4_1_fu_131_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln882_fu_125_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        icmp_ln884_reg_170 <= icmp_ln884_fu_137_p2;
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

assign ap_ST_fsm_state2_blk = 1'b0;

always @ (*) begin
    if ((grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_done == 1'b0)) begin
        ap_ST_fsm_state3_blk = 1'b1;
    end else begin
        ap_ST_fsm_state3_blk = 1'b0;
    end
end

assign ap_ST_fsm_state4_blk = 1'b0;

assign ap_ST_fsm_state5_blk = 1'b0;

always @ (*) begin
    if ((1'b1 == ap_block_state6_on_subcall_done)) begin
        ap_ST_fsm_state6_blk = 1'b1;
    end else begin
        ap_ST_fsm_state6_blk = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state2) & (icmp_ln953_fu_113_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln953_fu_113_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        if ((icmp_ln884_reg_170 == 1'd1)) begin
            fifo_C_drain_C_drain_IO_L1_out_1_0_din = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_din;
        end else if ((icmp_ln884_reg_170 == 1'd0)) begin
            fifo_C_drain_C_drain_IO_L1_out_1_0_din = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_0_din;
        end else begin
            fifo_C_drain_C_drain_IO_L1_out_1_0_din = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_din;
        end
    end else begin
        fifo_C_drain_C_drain_IO_L1_out_1_0_din = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_din;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        if ((icmp_ln884_reg_170 == 1'd1)) begin
            fifo_C_drain_C_drain_IO_L1_out_1_0_write = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_fifo_C_drain_C_drain_IO_L1_out_1_0_write;
        end else if ((icmp_ln884_reg_170 == 1'd0)) begin
            fifo_C_drain_C_drain_IO_L1_out_1_0_write = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_0_write;
        end else begin
            fifo_C_drain_C_drain_IO_L1_out_1_0_write = 1'b0;
        end
    end else begin
        fifo_C_drain_C_drain_IO_L1_out_1_0_write = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln884_reg_170 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        fifo_C_drain_C_drain_IO_L1_out_1_1_read = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_fifo_C_drain_C_drain_IO_L1_out_1_1_read;
    end else begin
        fifo_C_drain_C_drain_IO_L1_out_1_1_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        fifo_C_drain_PE_0_1_read = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_fifo_C_drain_PE_0_1_read;
    end else begin
        fifo_C_drain_PE_0_1_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln884_reg_170 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        local_C_address0 = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_local_C_address0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        local_C_address0 = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_address0;
    end else begin
        local_C_address0 = 'bx;
    end
end

always @ (*) begin
    if (((icmp_ln884_reg_170 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        local_C_ce0 = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_local_C_ce0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        local_C_ce0 = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_ce0;
    end else begin
        local_C_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        local_C_ce1 = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_ce1;
    end else begin
        local_C_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        local_C_we1 = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_local_C_we1;
    end else begin
        local_C_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln953_fu_113_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((icmp_ln882_fu_125_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (1'b0 == ap_block_state6_on_subcall_done))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln953_fu_119_p2 = (indvar_flatten20_fu_64 + 5'd1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

always @ (*) begin
    ap_block_state6_on_subcall_done = (((icmp_ln884_reg_170 == 1'd1) & (grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_done == 1'b0)) | ((grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_done == 1'b0) & (icmp_ln884_reg_170 == 1'd0)));
end

assign c4_1_fu_131_p2 = (c4_reg_72 + 2'd1);

assign grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83_ap_start_reg;

assign grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98_ap_start_reg;

assign grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start = grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90_ap_start_reg;

assign icmp_ln882_fu_125_p2 = ((c4_reg_72 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln884_fu_137_p2 = ((c4_reg_72 == 2'd0) ? 1'b1 : 1'b0);

assign icmp_ln953_fu_113_p2 = ((indvar_flatten20_fu_64 == 5'd16) ? 1'b1 : 1'b0);

endmodule //kernel0_C_drain_IO_L1_out