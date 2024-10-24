// ==============================================================
// Generated by Vitis HLS v2023.1.1
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps 

module kernel0_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        fifo_C_drain_PE_1_0_dout,
        fifo_C_drain_PE_1_0_num_data_valid,
        fifo_C_drain_PE_1_0_fifo_cap,
        fifo_C_drain_PE_1_0_empty_n,
        fifo_C_drain_PE_1_0_read,
        local_C_address0,
        local_C_ce0,
        local_C_q0,
        local_C_address1,
        local_C_ce1,
        local_C_we1,
        local_C_d1
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] fifo_C_drain_PE_1_0_dout;
input  [1:0] fifo_C_drain_PE_1_0_num_data_valid;
input  [1:0] fifo_C_drain_PE_1_0_fifo_cap;
input   fifo_C_drain_PE_1_0_empty_n;
output   fifo_C_drain_PE_1_0_read;
output  [3:0] local_C_address0;
output   local_C_ce0;
input  [127:0] local_C_q0;
output  [3:0] local_C_address1;
output   local_C_ce1;
output   local_C_we1;
output  [127:0] local_C_d1;

reg ap_idle;
reg fifo_C_drain_PE_1_0_read;
reg local_C_ce0;
reg local_C_ce1;
reg local_C_we1;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_idle_pp0;
wire    ap_block_state1_pp0_stage0_iter0;
reg   [0:0] icmp_ln849_reg_363;
reg    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln849_fu_187_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
reg    fifo_C_drain_PE_1_0_blk_n;
wire    ap_block_pp0_stage0;
reg    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln849_reg_363_pp0_iter1_reg;
wire   [1:0] trunc_ln849_1_fu_242_p1;
reg   [1:0] trunc_ln849_1_reg_367;
reg   [3:0] local_C_addr_reg_371;
reg   [31:0] data_split_4_reg_377;
reg   [31:0] ap_phi_mux_data_split_8_phi_fu_120_p8;
wire   [31:0] ap_phi_reg_pp0_iter2_data_split_8_reg_117;
reg   [31:0] ap_phi_mux_data_split_7_phi_fu_133_p8;
wire   [31:0] ap_phi_reg_pp0_iter2_data_split_7_reg_130;
reg   [31:0] ap_phi_mux_data_split_6_phi_fu_146_p8;
wire   [31:0] ap_phi_reg_pp0_iter2_data_split_6_reg_143;
reg   [31:0] ap_phi_mux_data_split_5_phi_fu_159_p8;
wire   [31:0] data_split_fu_283_p1;
wire   [31:0] ap_phi_reg_pp0_iter2_data_split_5_reg_156;
wire   [63:0] zext_ln859_fu_262_p1;
reg   [3:0] c7_fu_82;
wire   [3:0] add_ln851_fu_267_p2;
wire    ap_loop_init;
reg   [3:0] c6_fu_86;
wire   [3:0] select_ln849_1_fu_234_p3;
reg   [6:0] indvar_flatten_fu_90;
wire   [6:0] add_ln849_1_fu_193_p2;
reg   [6:0] ap_sig_allocacmp_indvar_flatten_load;
wire   [0:0] icmp_ln851_fu_216_p2;
wire   [3:0] select_ln849_fu_222_p3;
wire   [3:0] add_ln849_fu_210_p2;
wire   [2:0] trunc_ln849_fu_230_p1;
wire   [0:0] tmp_1_fu_246_p3;
wire   [3:0] tmp_fu_254_p3;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg    ap_loop_exit_ready_pp0_iter1_reg;
reg   [0:0] ap_NS_fsm;
wire    ap_enable_pp0;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_done_reg = 1'b0;
end

kernel0_flow_control_loop_pipe_sequential_init flow_control_loop_pipe_sequential_init_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage0),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int)
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
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter1_reg == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter1 <= ap_start_int;
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
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if ((ap_loop_init == 1'b1)) begin
            c6_fu_86 <= 4'd0;
        end else if ((ap_enable_reg_pp0_iter1 == 1'b1)) begin
            c6_fu_86 <= select_ln849_1_fu_234_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if ((ap_loop_init == 1'b1)) begin
            c7_fu_82 <= 4'd0;
        end else if ((ap_enable_reg_pp0_iter1 == 1'b1)) begin
            c7_fu_82 <= add_ln851_fu_267_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln849_fu_187_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            indvar_flatten_fu_90 <= add_ln849_1_fu_193_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            indvar_flatten_fu_90 <= 7'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
        icmp_ln849_reg_363 <= icmp_ln849_fu_187_p2;
        icmp_ln849_reg_363_pp0_iter1_reg <= icmp_ln849_reg_363;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln849_reg_363 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_split_4_reg_377 <= fifo_C_drain_PE_1_0_dout;
        local_C_addr_reg_371 <= zext_ln859_fu_262_p1;
        trunc_ln849_1_reg_367 <= trunc_ln849_1_fu_242_p1;
    end
end

always @ (*) begin
    if (((icmp_ln849_fu_187_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter1_reg == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln849_1_reg_367 == 2'd0) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0))) begin
        ap_phi_mux_data_split_5_phi_fu_159_p8 = data_split_4_reg_377;
    end else if ((((trunc_ln849_1_reg_367 == 2'd2) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd1) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd3) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)))) begin
        ap_phi_mux_data_split_5_phi_fu_159_p8 = data_split_fu_283_p1;
    end else begin
        ap_phi_mux_data_split_5_phi_fu_159_p8 = ap_phi_reg_pp0_iter2_data_split_5_reg_156;
    end
end

always @ (*) begin
    if (((trunc_ln849_1_reg_367 == 2'd1) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0))) begin
        ap_phi_mux_data_split_6_phi_fu_146_p8 = data_split_4_reg_377;
    end else if ((((trunc_ln849_1_reg_367 == 2'd0) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd2) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd3) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)))) begin
        ap_phi_mux_data_split_6_phi_fu_146_p8 = {{local_C_q0[63:32]}};
    end else begin
        ap_phi_mux_data_split_6_phi_fu_146_p8 = ap_phi_reg_pp0_iter2_data_split_6_reg_143;
    end
end

always @ (*) begin
    if (((trunc_ln849_1_reg_367 == 2'd2) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0))) begin
        ap_phi_mux_data_split_7_phi_fu_133_p8 = data_split_4_reg_377;
    end else if ((((trunc_ln849_1_reg_367 == 2'd0) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd1) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd3) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)))) begin
        ap_phi_mux_data_split_7_phi_fu_133_p8 = {{local_C_q0[95:64]}};
    end else begin
        ap_phi_mux_data_split_7_phi_fu_133_p8 = ap_phi_reg_pp0_iter2_data_split_7_reg_130;
    end
end

always @ (*) begin
    if ((((trunc_ln849_1_reg_367 == 2'd0) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd2) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)) | ((trunc_ln849_1_reg_367 == 2'd1) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0)))) begin
        ap_phi_mux_data_split_8_phi_fu_120_p8 = {{local_C_q0[127:96]}};
    end else if (((trunc_ln849_1_reg_367 == 2'd3) & (icmp_ln849_reg_363_pp0_iter1_reg == 1'd0))) begin
        ap_phi_mux_data_split_8_phi_fu_120_p8 = data_split_4_reg_377;
    end else begin
        ap_phi_mux_data_split_8_phi_fu_120_p8 = ap_phi_reg_pp0_iter2_data_split_8_reg_117;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_indvar_flatten_load = 7'd0;
    end else begin
        ap_sig_allocacmp_indvar_flatten_load = indvar_flatten_fu_90;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln849_reg_363 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        fifo_C_drain_PE_1_0_blk_n = fifo_C_drain_PE_1_0_empty_n;
    end else begin
        fifo_C_drain_PE_1_0_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln849_reg_363 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        fifo_C_drain_PE_1_0_read = 1'b1;
    end else begin
        fifo_C_drain_PE_1_0_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        local_C_ce0 = 1'b1;
    end else begin
        local_C_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        local_C_ce1 = 1'b1;
    end else begin
        local_C_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        local_C_we1 = 1'b1;
    end else begin
        local_C_we1 = 1'b0;
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

assign add_ln849_1_fu_193_p2 = (ap_sig_allocacmp_indvar_flatten_load + 7'd1);

assign add_ln849_fu_210_p2 = (c6_fu_86 + 4'd1);

assign add_ln851_fu_267_p2 = (select_ln849_fu_222_p3 + 4'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((icmp_ln849_reg_363 == 1'd0) & (fifo_C_drain_PE_1_0_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((icmp_ln849_reg_363 == 1'd0) & (fifo_C_drain_PE_1_0_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state2_pp0_stage0_iter1 = ((icmp_ln849_reg_363 == 1'd0) & (fifo_C_drain_PE_1_0_empty_n == 1'b0));
end

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start_int;

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign ap_phi_reg_pp0_iter2_data_split_5_reg_156 = 'bx;

assign ap_phi_reg_pp0_iter2_data_split_6_reg_143 = 'bx;

assign ap_phi_reg_pp0_iter2_data_split_7_reg_130 = 'bx;

assign ap_phi_reg_pp0_iter2_data_split_8_reg_117 = 'bx;

assign data_split_fu_283_p1 = local_C_q0[31:0];

assign icmp_ln849_fu_187_p2 = ((ap_sig_allocacmp_indvar_flatten_load == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln851_fu_216_p2 = ((c7_fu_82 == 4'd8) ? 1'b1 : 1'b0);

assign local_C_address0 = zext_ln859_fu_262_p1;

assign local_C_address1 = local_C_addr_reg_371;

assign local_C_d1 = {{{{ap_phi_mux_data_split_8_phi_fu_120_p8}, {ap_phi_mux_data_split_7_phi_fu_133_p8}}, {ap_phi_mux_data_split_6_phi_fu_146_p8}}, {ap_phi_mux_data_split_5_phi_fu_159_p8}};

assign select_ln849_1_fu_234_p3 = ((icmp_ln851_fu_216_p2[0:0] == 1'b1) ? add_ln849_fu_210_p2 : c6_fu_86);

assign select_ln849_fu_222_p3 = ((icmp_ln851_fu_216_p2[0:0] == 1'b1) ? 4'd0 : c7_fu_82);

assign tmp_1_fu_246_p3 = select_ln849_1_fu_234_p3[32'd2];

assign tmp_fu_254_p3 = {{trunc_ln849_fu_230_p1}, {tmp_1_fu_246_p3}};

assign trunc_ln849_1_fu_242_p1 = select_ln849_1_fu_234_p3[1:0];

assign trunc_ln849_fu_230_p1 = select_ln849_fu_222_p3[2:0];

assign zext_ln859_fu_262_p1 = tmp_fu_254_p3;

endmodule //kernel0_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1
