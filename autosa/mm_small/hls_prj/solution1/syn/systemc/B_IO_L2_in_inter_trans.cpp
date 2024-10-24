// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "B_IO_L2_in_inter_trans.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic B_IO_L2_in_inter_trans::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic B_IO_L2_in_inter_trans::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> B_IO_L2_in_inter_trans::ap_ST_fsm_state1 = "1";
const sc_lv<5> B_IO_L2_in_inter_trans::ap_ST_fsm_state2 = "10";
const sc_lv<5> B_IO_L2_in_inter_trans::ap_ST_fsm_pp0_stage0 = "100";
const sc_lv<5> B_IO_L2_in_inter_trans::ap_ST_fsm_state5 = "1000";
const sc_lv<5> B_IO_L2_in_inter_trans::ap_ST_fsm_pp1_stage0 = "10000";
const bool B_IO_L2_in_inter_trans::ap_const_boolean_1 = true;
const sc_lv<32> B_IO_L2_in_inter_trans::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> B_IO_L2_in_inter_trans::ap_const_lv32_4 = "100";
const bool B_IO_L2_in_inter_trans::ap_const_boolean_0 = false;
const sc_lv<1> B_IO_L2_in_inter_trans::ap_const_lv1_0 = "0";
const sc_lv<32> B_IO_L2_in_inter_trans::ap_const_lv32_2 = "10";
const sc_lv<32> B_IO_L2_in_inter_trans::ap_const_lv32_1 = "1";
const sc_lv<1> B_IO_L2_in_inter_trans::ap_const_lv1_1 = "1";
const sc_lv<2> B_IO_L2_in_inter_trans::ap_const_lv2_0 = "00";
const sc_lv<32> B_IO_L2_in_inter_trans::ap_const_lv32_3 = "11";
const sc_lv<4> B_IO_L2_in_inter_trans::ap_const_lv4_0 = "0000";
const sc_lv<2> B_IO_L2_in_inter_trans::ap_const_lv2_2 = "10";
const sc_lv<2> B_IO_L2_in_inter_trans::ap_const_lv2_1 = "1";
const sc_lv<4> B_IO_L2_in_inter_trans::ap_const_lv4_8 = "1000";
const sc_lv<4> B_IO_L2_in_inter_trans::ap_const_lv4_1 = "1";

B_IO_L2_in_inter_trans::B_IO_L2_in_inter_trans(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp1_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( fifo_B_out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln457_reg_188 );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( fifo_B_out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln457_reg_188 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( fifo_B_out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln457_reg_188 );

    SC_METHOD(thread_ap_block_pp1_stage0);

    SC_METHOD(thread_ap_block_pp1_stage0_11001);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( icmp_ln445_reg_197 );

    SC_METHOD(thread_ap_block_pp1_stage0_subdone);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( icmp_ln445_reg_197 );

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( fifo_B_out_V_V_full_n );
    sensitive << ( icmp_ln457_reg_188 );

    SC_METHOD(thread_ap_block_state6_pp1_stage0_iter0);

    SC_METHOD(thread_ap_block_state7_pp1_stage0_iter1);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( icmp_ln445_reg_197 );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state3);
    sensitive << ( icmp_ln457_fu_146_p2 );

    SC_METHOD(thread_ap_condition_pp1_exit_iter0_state6);
    sensitive << ( icmp_ln445_fu_158_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln442_fu_128_p2 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_pp1);
    sensitive << ( ap_idle_pp1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_idle_pp1);
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( ap_enable_reg_pp1_iter0 );

    SC_METHOD(thread_ap_phi_mux_p_069_0_phi_fu_120_p4);
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( ap_block_pp1_stage0 );
    sensitive << ( icmp_ln445_reg_197 );
    sensitive << ( p_069_0_reg_116 );
    sensitive << ( c4_V_reg_201 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( icmp_ln442_fu_128_p2 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_c3_V_fu_134_p2);
    sensitive << ( p_084_0_reg_94 );

    SC_METHOD(thread_c4_V_1_fu_152_p2);
    sensitive << ( p_047_0_reg_105 );

    SC_METHOD(thread_c4_V_fu_164_p2);
    sensitive << ( ap_phi_mux_p_069_0_phi_fu_120_p4 );

    SC_METHOD(thread_fifo_B_in_V_V_blk_n);
    sensitive << ( fifo_B_in_V_V_empty_n );
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( ap_block_pp1_stage0 );
    sensitive << ( icmp_ln445_reg_197 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln457_reg_188 );

    SC_METHOD(thread_fifo_B_in_V_V_read);
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( icmp_ln445_reg_197 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln457_reg_188 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_block_pp1_stage0_11001 );

    SC_METHOD(thread_fifo_B_out_V_V_blk_n);
    sensitive << ( fifo_B_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln457_reg_188 );

    SC_METHOD(thread_fifo_B_out_V_V_din);
    sensitive << ( fifo_B_in_V_V_dout );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln457_reg_188 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_fifo_B_out_V_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln457_reg_188 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_icmp_ln442_fu_128_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( p_084_0_reg_94 );

    SC_METHOD(thread_icmp_ln445_fu_158_p2);
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_block_pp1_stage0_11001 );
    sensitive << ( ap_enable_reg_pp1_iter0 );
    sensitive << ( ap_phi_mux_p_069_0_phi_fu_120_p4 );

    SC_METHOD(thread_icmp_ln457_fu_146_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( p_047_0_reg_105 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_ln879_fu_140_p2);
    sensitive << ( icmp_ln442_fu_128_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( p_084_0_reg_94 );

    SC_METHOD(thread_local_B_V_address1);
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( ap_block_pp1_stage0 );
    sensitive << ( zext_ln544_fu_170_p1 );

    SC_METHOD(thread_local_B_V_ce1);
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( ap_block_pp1_stage0_11001 );

    SC_METHOD(thread_local_B_V_d1);
    sensitive << ( fifo_B_in_V_V_dout );
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( ap_block_pp1_stage0 );

    SC_METHOD(thread_local_B_V_we1);
    sensitive << ( ap_CS_fsm_pp1_stage0 );
    sensitive << ( ap_enable_reg_pp1_iter1 );
    sensitive << ( icmp_ln445_reg_197 );
    sensitive << ( ap_block_pp1_stage0_11001 );

    SC_METHOD(thread_zext_ln544_fu_170_p1);
    sensitive << ( p_069_0_reg_116 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln442_fu_128_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln879_fu_140_p2 );
    sensitive << ( icmp_ln457_fu_146_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( icmp_ln445_fu_158_p2 );
    sensitive << ( ap_enable_reg_pp1_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_block_pp1_stage0_subdone );

    ap_CS_fsm = "00001";
    ap_enable_reg_pp1_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp1_iter0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "B_IO_L2_in_inter_trans_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, local_B_V_address1, "(port)local_B_V_address1");
    sc_trace(mVcdFile, local_B_V_ce1, "(port)local_B_V_ce1");
    sc_trace(mVcdFile, local_B_V_we1, "(port)local_B_V_we1");
    sc_trace(mVcdFile, local_B_V_d1, "(port)local_B_V_d1");
    sc_trace(mVcdFile, fifo_B_in_V_V_dout, "(port)fifo_B_in_V_V_dout");
    sc_trace(mVcdFile, fifo_B_in_V_V_empty_n, "(port)fifo_B_in_V_V_empty_n");
    sc_trace(mVcdFile, fifo_B_in_V_V_read, "(port)fifo_B_in_V_V_read");
    sc_trace(mVcdFile, fifo_B_out_V_V_din, "(port)fifo_B_out_V_V_din");
    sc_trace(mVcdFile, fifo_B_out_V_V_full_n, "(port)fifo_B_out_V_V_full_n");
    sc_trace(mVcdFile, fifo_B_out_V_V_write, "(port)fifo_B_out_V_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, fifo_B_in_V_V_blk_n, "fifo_B_in_V_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_pp1_stage0, "ap_CS_fsm_pp1_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp1_iter1, "ap_enable_reg_pp1_iter1");
    sc_trace(mVcdFile, ap_block_pp1_stage0, "ap_block_pp1_stage0");
    sc_trace(mVcdFile, icmp_ln445_reg_197, "icmp_ln445_reg_197");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, icmp_ln457_reg_188, "icmp_ln457_reg_188");
    sc_trace(mVcdFile, fifo_B_out_V_V_blk_n, "fifo_B_out_V_V_blk_n");
    sc_trace(mVcdFile, p_047_0_reg_105, "p_047_0_reg_105");
    sc_trace(mVcdFile, p_069_0_reg_116, "p_069_0_reg_116");
    sc_trace(mVcdFile, icmp_ln442_fu_128_p2, "icmp_ln442_fu_128_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, c3_V_fu_134_p2, "c3_V_fu_134_p2");
    sc_trace(mVcdFile, c3_V_reg_179, "c3_V_reg_179");
    sc_trace(mVcdFile, icmp_ln879_fu_140_p2, "icmp_ln879_fu_140_p2");
    sc_trace(mVcdFile, icmp_ln457_fu_146_p2, "icmp_ln457_fu_146_p2");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter0, "ap_block_state3_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, c4_V_1_fu_152_p2, "c4_V_1_fu_152_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, icmp_ln445_fu_158_p2, "icmp_ln445_fu_158_p2");
    sc_trace(mVcdFile, ap_block_state6_pp1_stage0_iter0, "ap_block_state6_pp1_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state7_pp1_stage0_iter1, "ap_block_state7_pp1_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp1_stage0_11001, "ap_block_pp1_stage0_11001");
    sc_trace(mVcdFile, c4_V_fu_164_p2, "c4_V_fu_164_p2");
    sc_trace(mVcdFile, c4_V_reg_201, "c4_V_reg_201");
    sc_trace(mVcdFile, ap_enable_reg_pp1_iter0, "ap_enable_reg_pp1_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state3, "ap_condition_pp0_exit_iter0_state3");
    sc_trace(mVcdFile, ap_block_pp1_stage0_subdone, "ap_block_pp1_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp1_exit_iter0_state6, "ap_condition_pp1_exit_iter0_state6");
    sc_trace(mVcdFile, p_084_0_reg_94, "p_084_0_reg_94");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_phi_mux_p_069_0_phi_fu_120_p4, "ap_phi_mux_p_069_0_phi_fu_120_p4");
    sc_trace(mVcdFile, zext_ln544_fu_170_p1, "zext_ln544_fu_170_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
    sc_trace(mVcdFile, ap_idle_pp1, "ap_idle_pp1");
    sc_trace(mVcdFile, ap_enable_pp1, "ap_enable_pp1");
#endif

    }
}

B_IO_L2_in_inter_trans::~B_IO_L2_in_inter_trans() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void B_IO_L2_in_inter_trans::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_fu_140_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_fu_140_p2.read()))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state6.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && 
                    esl_seteq<1,1,1>(icmp_ln879_fu_140_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state6.read()))) {
            ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state6.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && 
                    esl_seteq<1,1,1>(icmp_ln879_fu_140_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp1_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_fu_140_p2.read()))) {
        p_047_0_reg_105 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_fu_146_p2.read()))) {
        p_047_0_reg_105 = c4_V_1_fu_152_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && 
         esl_seteq<1,1,1>(icmp_ln879_fu_140_p2.read(), ap_const_lv1_1))) {
        p_069_0_reg_116 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        p_069_0_reg_116 = c4_V_reg_201.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        p_084_0_reg_94 = c3_V_reg_179.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        p_084_0_reg_94 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        c3_V_reg_179 = c3_V_fu_134_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        c4_V_reg_201 = c4_V_fu_164_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln445_reg_197 = icmp_ln445_fu_158_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln457_reg_188 = icmp_ln457_fu_146_p2.read();
    }
}

void B_IO_L2_in_inter_trans::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void B_IO_L2_in_inter_trans::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[4];
}

void B_IO_L2_in_inter_trans::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void B_IO_L2_in_inter_trans::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void B_IO_L2_in_inter_trans::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_out_V_V_full_n.read()))));
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_out_V_V_full_n.read()))));
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_out_V_V_full_n.read()))));
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read()));
}

void B_IO_L2_in_inter_trans::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read()));
}

void B_IO_L2_in_inter_trans::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void B_IO_L2_in_inter_trans::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_out_V_V_full_n.read())));
}

void B_IO_L2_in_inter_trans::thread_ap_block_state6_pp1_stage0_iter0() {
    ap_block_state6_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void B_IO_L2_in_inter_trans::thread_ap_block_state7_pp1_stage0_iter1() {
    ap_block_state7_pp1_stage0_iter1 = (esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, fifo_B_in_V_V_empty_n.read()));
}

void B_IO_L2_in_inter_trans::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(icmp_ln457_fu_146_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_ap_condition_pp1_exit_iter0_state6() {
    if (esl_seteq<1,1,1>(icmp_ln445_fu_158_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state6 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state6 = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln442_fu_128_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void B_IO_L2_in_inter_trans::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void B_IO_L2_in_inter_trans::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_ap_phi_mux_p_069_0_phi_fu_120_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0))) {
        ap_phi_mux_p_069_0_phi_fu_120_p4 = c4_V_reg_201.read();
    } else {
        ap_phi_mux_p_069_0_phi_fu_120_p4 = p_069_0_reg_116.read();
    }
}

void B_IO_L2_in_inter_trans::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln442_fu_128_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_c3_V_fu_134_p2() {
    c3_V_fu_134_p2 = (!p_084_0_reg_94.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(p_084_0_reg_94.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void B_IO_L2_in_inter_trans::thread_c4_V_1_fu_152_p2() {
    c4_V_1_fu_152_p2 = (!p_047_0_reg_105.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(p_047_0_reg_105.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void B_IO_L2_in_inter_trans::thread_c4_V_fu_164_p2() {
    c4_V_fu_164_p2 = (!ap_phi_mux_p_069_0_phi_fu_120_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_p_069_0_phi_fu_120_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void B_IO_L2_in_inter_trans::thread_fifo_B_in_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read())))) {
        fifo_B_in_V_V_blk_n = fifo_B_in_V_V_empty_n.read();
    } else {
        fifo_B_in_V_V_blk_n = ap_const_logic_1;
    }
}

void B_IO_L2_in_inter_trans::thread_fifo_B_in_V_V_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        fifo_B_in_V_V_read = ap_const_logic_1;
    } else {
        fifo_B_in_V_V_read = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_fifo_B_out_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()))) {
        fifo_B_out_V_V_blk_n = fifo_B_out_V_V_full_n.read();
    } else {
        fifo_B_out_V_V_blk_n = ap_const_logic_1;
    }
}

void B_IO_L2_in_inter_trans::thread_fifo_B_out_V_V_din() {
    fifo_B_out_V_V_din = fifo_B_in_V_V_dout.read();
}

void B_IO_L2_in_inter_trans::thread_fifo_B_out_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln457_reg_188.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        fifo_B_out_V_V_write = ap_const_logic_1;
    } else {
        fifo_B_out_V_V_write = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_icmp_ln442_fu_128_p2() {
    icmp_ln442_fu_128_p2 = (!p_084_0_reg_94.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(p_084_0_reg_94.read() == ap_const_lv2_2);
}

void B_IO_L2_in_inter_trans::thread_icmp_ln445_fu_158_p2() {
    icmp_ln445_fu_158_p2 = (!ap_phi_mux_p_069_0_phi_fu_120_p4.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_p_069_0_phi_fu_120_p4.read() == ap_const_lv4_8);
}

void B_IO_L2_in_inter_trans::thread_icmp_ln457_fu_146_p2() {
    icmp_ln457_fu_146_p2 = (!p_047_0_reg_105.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(p_047_0_reg_105.read() == ap_const_lv4_8);
}

void B_IO_L2_in_inter_trans::thread_icmp_ln879_fu_140_p2() {
    icmp_ln879_fu_140_p2 = (!p_084_0_reg_94.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(p_084_0_reg_94.read() == ap_const_lv2_0);
}

void B_IO_L2_in_inter_trans::thread_local_B_V_address1() {
    local_B_V_address1 =  (sc_lv<3>) (zext_ln544_fu_170_p1.read());
}

void B_IO_L2_in_inter_trans::thread_local_B_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        local_B_V_ce1 = ap_const_logic_1;
    } else {
        local_B_V_ce1 = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_local_B_V_d1() {
    local_B_V_d1 = fifo_B_in_V_V_dout.read();
}

void B_IO_L2_in_inter_trans::thread_local_B_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln445_reg_197.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        local_B_V_we1 = ap_const_logic_1;
    } else {
        local_B_V_we1 = ap_const_logic_0;
    }
}

void B_IO_L2_in_inter_trans::thread_zext_ln544_fu_170_p1() {
    zext_ln544_fu_170_p1 = esl_zext<64,4>(p_069_0_reg_116.read());
}

void B_IO_L2_in_inter_trans::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln442_fu_128_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln442_fu_128_p2.read()) && esl_seteq<1,1,1>(icmp_ln879_fu_140_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln457_fu_146_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln457_fu_146_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 16 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln445_fu_158_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln445_fu_158_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}

