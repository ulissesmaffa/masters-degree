// ==============================================================
// File generated on Wed Sep 25 19:14:34 -03 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    template< int D ,int U ,int TI ,int TD > struct ap_axiu;
    template<> struct ap_axiu<8, 4, 5, 5> {
        ap_uint<8> data;
        ap_uint<1> keep;
        ap_uint<1> strb;
        ap_uint<4> user;
        ap_uint<1> last;
        ap_uint<5> id;
        ap_uint<5> dest;
       } __attribute__((packed));

          template< int D ,int U ,int TI ,int TD > struct ap_axiu;
          template<> struct ap_axiu<16, 4, 5, 5> {
              ap_uint<16> data;
              ap_uint<2> keep;
              ap_uint<2> strb;
              ap_uint<4> user;
              ap_uint<1> last;
              ap_uint<5> id;
              ap_uint<5> dest;
             } ;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "SLI_AXIS_V_data_V"
#define AUTOTB_TVIN_SLI_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_data_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_data_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_data_V.dat"
// wrapc file define: "SLI_AXIS_V_keep_V"
#define AUTOTB_TVIN_SLI_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_keep_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_keep_V.dat"
// wrapc file define: "SLI_AXIS_V_strb_V"
#define AUTOTB_TVIN_SLI_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_strb_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_strb_V.dat"
// wrapc file define: "SLI_AXIS_V_user_V"
#define AUTOTB_TVIN_SLI_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_user_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_user_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_user_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_user_V.dat"
// wrapc file define: "SLI_AXIS_V_last_V"
#define AUTOTB_TVIN_SLI_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_last_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_last_V.dat"
// wrapc file define: "SLI_AXIS_V_id_V"
#define AUTOTB_TVIN_SLI_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_id_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_id_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_id_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_id_V.dat"
// wrapc file define: "SLI_AXIS_V_dest_V"
#define AUTOTB_TVIN_SLI_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvin_SLI_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_dest_V  "../tv/stream_size/stream_size_in_SLI_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V  "../tv/stream_size/stream_ingress_status_SLI_AXIS_V_dest_V.dat"
// wrapc file define: "MRI_AXIS_V_data_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_data_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_data_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_data_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_data_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_data_V.dat"
// wrapc file define: "MRI_AXIS_V_keep_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_keep_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_keep_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_keep_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_keep_V.dat"
// wrapc file define: "MRI_AXIS_V_strb_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_strb_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_strb_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_strb_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_strb_V.dat"
// wrapc file define: "MRI_AXIS_V_user_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_user_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_user_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_user_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_user_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_user_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_user_V.dat"
// wrapc file define: "MRI_AXIS_V_last_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_last_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_last_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_last_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_last_V.dat"
// wrapc file define: "MRI_AXIS_V_id_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_id_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_id_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_id_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_id_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_id_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_id_V.dat"
// wrapc file define: "MRI_AXIS_V_dest_V"
#define AUTOTB_TVOUT_MRI_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvout_MRI_AXIS_V_dest_V.dat"
#define AUTOTB_TVIN_MRI_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvin_MRI_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_dest_V  "../tv/stream_size/stream_size_out_MRI_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_dest_V  "../tv/stream_size/stream_egress_status_MRI_AXIS_V_dest_V.dat"
// wrapc file define: "STW_AXIS_V_data_V"
#define AUTOTB_TVIN_STW_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_data_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_data_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_data_V.dat"
// wrapc file define: "STW_AXIS_V_keep_V"
#define AUTOTB_TVIN_STW_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_keep_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_keep_V.dat"
// wrapc file define: "STW_AXIS_V_strb_V"
#define AUTOTB_TVIN_STW_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_strb_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_strb_V.dat"
// wrapc file define: "STW_AXIS_V_user_V"
#define AUTOTB_TVIN_STW_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_user_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_user_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_user_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_user_V.dat"
// wrapc file define: "STW_AXIS_V_last_V"
#define AUTOTB_TVIN_STW_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_last_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_last_V.dat"
// wrapc file define: "STW_AXIS_V_id_V"
#define AUTOTB_TVIN_STW_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_id_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_id_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_id_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_id_V.dat"
// wrapc file define: "STW_AXIS_V_dest_V"
#define AUTOTB_TVIN_STW_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvin_STW_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_IN_STW_AXIS_V_dest_V  "../tv/stream_size/stream_size_in_STW_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V  "../tv/stream_size/stream_ingress_status_STW_AXIS_V_dest_V.dat"
// wrapc file define: "MBW_AXIS_V_data_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_data_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_data_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_data_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_data_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_data_V.dat"
// wrapc file define: "MBW_AXIS_V_keep_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_keep_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_keep_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_keep_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_keep_V.dat"
// wrapc file define: "MBW_AXIS_V_strb_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_strb_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_strb_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_strb_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_strb_V.dat"
// wrapc file define: "MBW_AXIS_V_user_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_user_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_user_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_user_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_user_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_user_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_user_V.dat"
// wrapc file define: "MBW_AXIS_V_last_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_last_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_last_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_last_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_last_V.dat"
// wrapc file define: "MBW_AXIS_V_id_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_id_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_id_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_id_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_id_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_id_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_id_V.dat"
// wrapc file define: "MBW_AXIS_V_dest_V"
#define AUTOTB_TVOUT_MBW_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvout_MBW_AXIS_V_dest_V.dat"
#define AUTOTB_TVIN_MBW_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvin_MBW_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_dest_V  "../tv/stream_size/stream_size_out_MBW_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_dest_V  "../tv/stream_size/stream_egress_status_MBW_AXIS_V_dest_V.dat"
// wrapc file define: "STA_AXIS_V_data_V"
#define AUTOTB_TVIN_STA_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_data_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_data_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_data_V.dat"
// wrapc file define: "STA_AXIS_V_keep_V"
#define AUTOTB_TVIN_STA_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_keep_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_keep_V.dat"
// wrapc file define: "STA_AXIS_V_strb_V"
#define AUTOTB_TVIN_STA_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_strb_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_strb_V.dat"
// wrapc file define: "STA_AXIS_V_user_V"
#define AUTOTB_TVIN_STA_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_user_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_user_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_user_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_user_V.dat"
// wrapc file define: "STA_AXIS_V_last_V"
#define AUTOTB_TVIN_STA_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_last_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_last_V.dat"
// wrapc file define: "STA_AXIS_V_id_V"
#define AUTOTB_TVIN_STA_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_id_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_id_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_id_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_id_V.dat"
// wrapc file define: "STA_AXIS_V_dest_V"
#define AUTOTB_TVIN_STA_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvin_STA_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_IN_STA_AXIS_V_dest_V  "../tv/stream_size/stream_size_in_STA_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V  "../tv/stream_size/stream_ingress_status_STA_AXIS_V_dest_V.dat"
// wrapc file define: "MBA_AXIS_V_data_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_data_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_data_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_data_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_data_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_data_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_data_V.dat"
// wrapc file define: "MBA_AXIS_V_keep_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_keep_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_keep_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_keep_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_keep_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_keep_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_keep_V.dat"
// wrapc file define: "MBA_AXIS_V_strb_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_strb_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_strb_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_strb_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_strb_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_strb_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_strb_V.dat"
// wrapc file define: "MBA_AXIS_V_user_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_user_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_user_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_user_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_user_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_user_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_user_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_user_V.dat"
// wrapc file define: "MBA_AXIS_V_last_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_last_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_last_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_last_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_last_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_last_V.dat"
// wrapc file define: "MBA_AXIS_V_id_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_id_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_id_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_id_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_id_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_id_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_id_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_id_V.dat"
// wrapc file define: "MBA_AXIS_V_dest_V"
#define AUTOTB_TVOUT_MBA_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvout_MBA_AXIS_V_dest_V.dat"
#define AUTOTB_TVIN_MBA_AXIS_V_dest_V  "../tv/cdatafile/c.pe.autotvin_MBA_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_dest_V  "../tv/stream_size/stream_size_out_MBA_AXIS_V_dest_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_dest_V  "../tv/stream_size/stream_egress_status_MBA_AXIS_V_dest_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "MRI_AXIS_V_data_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_data_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_data_V.dat"
// tvout file define: "MRI_AXIS_V_keep_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_keep_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_keep_V.dat"
// tvout file define: "MRI_AXIS_V_strb_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_strb_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_strb_V.dat"
// tvout file define: "MRI_AXIS_V_user_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_user_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_user_V.dat"
// tvout file define: "MRI_AXIS_V_last_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_last_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_last_V.dat"
// tvout file define: "MRI_AXIS_V_id_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_id_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_id_V.dat"
// tvout file define: "MRI_AXIS_V_dest_V"
#define AUTOTB_TVOUT_PC_MRI_AXIS_V_dest_V  "../tv/rtldatafile/rtl.pe.autotvout_MRI_AXIS_V_dest_V.dat"
// tvout file define: "MBW_AXIS_V_data_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_data_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_data_V.dat"
// tvout file define: "MBW_AXIS_V_keep_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_keep_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_keep_V.dat"
// tvout file define: "MBW_AXIS_V_strb_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_strb_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_strb_V.dat"
// tvout file define: "MBW_AXIS_V_user_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_user_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_user_V.dat"
// tvout file define: "MBW_AXIS_V_last_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_last_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_last_V.dat"
// tvout file define: "MBW_AXIS_V_id_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_id_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_id_V.dat"
// tvout file define: "MBW_AXIS_V_dest_V"
#define AUTOTB_TVOUT_PC_MBW_AXIS_V_dest_V  "../tv/rtldatafile/rtl.pe.autotvout_MBW_AXIS_V_dest_V.dat"
// tvout file define: "MBA_AXIS_V_data_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_data_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_data_V.dat"
// tvout file define: "MBA_AXIS_V_keep_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_keep_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_keep_V.dat"
// tvout file define: "MBA_AXIS_V_strb_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_strb_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_strb_V.dat"
// tvout file define: "MBA_AXIS_V_user_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_user_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_user_V.dat"
// tvout file define: "MBA_AXIS_V_last_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_last_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_last_V.dat"
// tvout file define: "MBA_AXIS_V_id_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_id_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_id_V.dat"
// tvout file define: "MBA_AXIS_V_dest_V"
#define AUTOTB_TVOUT_PC_MBA_AXIS_V_dest_V  "../tv/rtldatafile/rtl.pe.autotvout_MBA_AXIS_V_dest_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			SLI_AXIS_V_data_V_depth = 0;
			SLI_AXIS_V_keep_V_depth = 0;
			SLI_AXIS_V_strb_V_depth = 0;
			SLI_AXIS_V_user_V_depth = 0;
			SLI_AXIS_V_last_V_depth = 0;
			SLI_AXIS_V_id_V_depth = 0;
			SLI_AXIS_V_dest_V_depth = 0;
			MRI_AXIS_V_data_V_depth = 0;
			MRI_AXIS_V_keep_V_depth = 0;
			MRI_AXIS_V_strb_V_depth = 0;
			MRI_AXIS_V_user_V_depth = 0;
			MRI_AXIS_V_last_V_depth = 0;
			MRI_AXIS_V_id_V_depth = 0;
			MRI_AXIS_V_dest_V_depth = 0;
			STW_AXIS_V_data_V_depth = 0;
			STW_AXIS_V_keep_V_depth = 0;
			STW_AXIS_V_strb_V_depth = 0;
			STW_AXIS_V_user_V_depth = 0;
			STW_AXIS_V_last_V_depth = 0;
			STW_AXIS_V_id_V_depth = 0;
			STW_AXIS_V_dest_V_depth = 0;
			MBW_AXIS_V_data_V_depth = 0;
			MBW_AXIS_V_keep_V_depth = 0;
			MBW_AXIS_V_strb_V_depth = 0;
			MBW_AXIS_V_user_V_depth = 0;
			MBW_AXIS_V_last_V_depth = 0;
			MBW_AXIS_V_id_V_depth = 0;
			MBW_AXIS_V_dest_V_depth = 0;
			STA_AXIS_V_data_V_depth = 0;
			STA_AXIS_V_keep_V_depth = 0;
			STA_AXIS_V_strb_V_depth = 0;
			STA_AXIS_V_user_V_depth = 0;
			STA_AXIS_V_last_V_depth = 0;
			STA_AXIS_V_id_V_depth = 0;
			STA_AXIS_V_dest_V_depth = 0;
			MBA_AXIS_V_data_V_depth = 0;
			MBA_AXIS_V_keep_V_depth = 0;
			MBA_AXIS_V_strb_V_depth = 0;
			MBA_AXIS_V_user_V_depth = 0;
			MBA_AXIS_V_last_V_depth = 0;
			MBA_AXIS_V_id_V_depth = 0;
			MBA_AXIS_V_dest_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{SLI_AXIS_V_data_V " << SLI_AXIS_V_data_V_depth << "}\n";
			total_list << "{SLI_AXIS_V_keep_V " << SLI_AXIS_V_keep_V_depth << "}\n";
			total_list << "{SLI_AXIS_V_strb_V " << SLI_AXIS_V_strb_V_depth << "}\n";
			total_list << "{SLI_AXIS_V_user_V " << SLI_AXIS_V_user_V_depth << "}\n";
			total_list << "{SLI_AXIS_V_last_V " << SLI_AXIS_V_last_V_depth << "}\n";
			total_list << "{SLI_AXIS_V_id_V " << SLI_AXIS_V_id_V_depth << "}\n";
			total_list << "{SLI_AXIS_V_dest_V " << SLI_AXIS_V_dest_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_data_V " << MRI_AXIS_V_data_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_keep_V " << MRI_AXIS_V_keep_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_strb_V " << MRI_AXIS_V_strb_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_user_V " << MRI_AXIS_V_user_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_last_V " << MRI_AXIS_V_last_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_id_V " << MRI_AXIS_V_id_V_depth << "}\n";
			total_list << "{MRI_AXIS_V_dest_V " << MRI_AXIS_V_dest_V_depth << "}\n";
			total_list << "{STW_AXIS_V_data_V " << STW_AXIS_V_data_V_depth << "}\n";
			total_list << "{STW_AXIS_V_keep_V " << STW_AXIS_V_keep_V_depth << "}\n";
			total_list << "{STW_AXIS_V_strb_V " << STW_AXIS_V_strb_V_depth << "}\n";
			total_list << "{STW_AXIS_V_user_V " << STW_AXIS_V_user_V_depth << "}\n";
			total_list << "{STW_AXIS_V_last_V " << STW_AXIS_V_last_V_depth << "}\n";
			total_list << "{STW_AXIS_V_id_V " << STW_AXIS_V_id_V_depth << "}\n";
			total_list << "{STW_AXIS_V_dest_V " << STW_AXIS_V_dest_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_data_V " << MBW_AXIS_V_data_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_keep_V " << MBW_AXIS_V_keep_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_strb_V " << MBW_AXIS_V_strb_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_user_V " << MBW_AXIS_V_user_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_last_V " << MBW_AXIS_V_last_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_id_V " << MBW_AXIS_V_id_V_depth << "}\n";
			total_list << "{MBW_AXIS_V_dest_V " << MBW_AXIS_V_dest_V_depth << "}\n";
			total_list << "{STA_AXIS_V_data_V " << STA_AXIS_V_data_V_depth << "}\n";
			total_list << "{STA_AXIS_V_keep_V " << STA_AXIS_V_keep_V_depth << "}\n";
			total_list << "{STA_AXIS_V_strb_V " << STA_AXIS_V_strb_V_depth << "}\n";
			total_list << "{STA_AXIS_V_user_V " << STA_AXIS_V_user_V_depth << "}\n";
			total_list << "{STA_AXIS_V_last_V " << STA_AXIS_V_last_V_depth << "}\n";
			total_list << "{STA_AXIS_V_id_V " << STA_AXIS_V_id_V_depth << "}\n";
			total_list << "{STA_AXIS_V_dest_V " << STA_AXIS_V_dest_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_data_V " << MBA_AXIS_V_data_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_keep_V " << MBA_AXIS_V_keep_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_strb_V " << MBA_AXIS_V_strb_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_user_V " << MBA_AXIS_V_user_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_last_V " << MBA_AXIS_V_last_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_id_V " << MBA_AXIS_V_id_V_depth << "}\n";
			total_list << "{MBA_AXIS_V_dest_V " << MBA_AXIS_V_dest_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int SLI_AXIS_V_data_V_depth;
		int SLI_AXIS_V_keep_V_depth;
		int SLI_AXIS_V_strb_V_depth;
		int SLI_AXIS_V_user_V_depth;
		int SLI_AXIS_V_last_V_depth;
		int SLI_AXIS_V_id_V_depth;
		int SLI_AXIS_V_dest_V_depth;
		int MRI_AXIS_V_data_V_depth;
		int MRI_AXIS_V_keep_V_depth;
		int MRI_AXIS_V_strb_V_depth;
		int MRI_AXIS_V_user_V_depth;
		int MRI_AXIS_V_last_V_depth;
		int MRI_AXIS_V_id_V_depth;
		int MRI_AXIS_V_dest_V_depth;
		int STW_AXIS_V_data_V_depth;
		int STW_AXIS_V_keep_V_depth;
		int STW_AXIS_V_strb_V_depth;
		int STW_AXIS_V_user_V_depth;
		int STW_AXIS_V_last_V_depth;
		int STW_AXIS_V_id_V_depth;
		int STW_AXIS_V_dest_V_depth;
		int MBW_AXIS_V_data_V_depth;
		int MBW_AXIS_V_keep_V_depth;
		int MBW_AXIS_V_strb_V_depth;
		int MBW_AXIS_V_user_V_depth;
		int MBW_AXIS_V_last_V_depth;
		int MBW_AXIS_V_id_V_depth;
		int MBW_AXIS_V_dest_V_depth;
		int STA_AXIS_V_data_V_depth;
		int STA_AXIS_V_keep_V_depth;
		int STA_AXIS_V_strb_V_depth;
		int STA_AXIS_V_user_V_depth;
		int STA_AXIS_V_last_V_depth;
		int STA_AXIS_V_id_V_depth;
		int STA_AXIS_V_dest_V_depth;
		int MBA_AXIS_V_data_V_depth;
		int MBA_AXIS_V_keep_V_depth;
		int MBA_AXIS_V_strb_V_depth;
		int MBA_AXIS_V_user_V_depth;
		int MBA_AXIS_V_last_V_depth;
		int MBA_AXIS_V_id_V_depth;
		int MBA_AXIS_V_dest_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void pe (
hls::stream<ap_axiu<8, 4, 5, 5 > > (&SLI_AXIS),
hls::stream<ap_axiu<8, 4, 5, 5 > > (&MRI_AXIS),
hls::stream<ap_axiu<8, 4, 5, 5 > > (&STW_AXIS),
hls::stream<ap_axiu<8, 4, 5, 5 > > (&MBW_AXIS),
hls::stream<ap_axiu<16, 4, 5, 5 > > (&STA_AXIS),
hls::stream<ap_axiu<16, 4, 5, 5 > > (&MBA_AXIS));

void AESL_WRAP_pe (
hls::stream<ap_axiu<8, 4, 5, 5 > > (&SLI_AXIS),
hls::stream<ap_axiu<8, 4, 5, 5 > > (&MRI_AXIS),
hls::stream<ap_axiu<8, 4, 5, 5 > > (&STW_AXIS),
hls::stream<ap_axiu<8, 4, 5, 5 > > (&MBW_AXIS),
hls::stream<ap_axiu<16, 4, 5, 5 > > (&STA_AXIS),
hls::stream<ap_axiu<16, 4, 5, 5 > > (&MBA_AXIS))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		// pop stream input: "SLI_AXIS"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, AESL_token); // pop_size
			int aesl_tmp_1 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_1; i++)
			{
				SLI_AXIS.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "MRI_AXIS"
		std::vector<ap_axiu<8, 4, 5, 5 > > aesl_tmp_3;
		int aesl_tmp_4;
		int aesl_tmp_5 = 0;

		// read output stream size: "MRI_AXIS"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, AESL_token); // pop_size
			aesl_tmp_4 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "STW_AXIS"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, AESL_token); // pop_size
			int aesl_tmp_7 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_7; i++)
			{
				STW_AXIS.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "MBW_AXIS"
		std::vector<ap_axiu<8, 4, 5, 5 > > aesl_tmp_9;
		int aesl_tmp_10;
		int aesl_tmp_11 = 0;

		// read output stream size: "MBW_AXIS"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, AESL_token); // pop_size
			aesl_tmp_10 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "STA_AXIS"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, AESL_token); // pop_size
			int aesl_tmp_13 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_13; i++)
			{
				STA_AXIS.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "MBA_AXIS"
		std::vector<ap_axiu<16, 4, 5, 5 > > aesl_tmp_15;
		int aesl_tmp_16;
		int aesl_tmp_17 = 0;

		// read output stream size: "MBA_AXIS"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, AESL_token); // pop_size
			aesl_tmp_16 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "MRI_AXIS_V_data_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_data_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_data_V, AESL_token); // data

			std::vector<sc_bv<8> > MRI_AXIS_V_data_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_data_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_data_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_data_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_data_V
				{
					// bitslice(7, 0)
					// {
						// celement: MRI_AXIS.V.data.V(7, 0)
						// {
							sc_lv<8>* MRI_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<8>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.data.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(MRI_AXIS_V_data_V_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.data.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data
									// output_left_conversion : aesl_tmp_3[i_0].data
									// output_type_conversion : (MRI_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].data = (MRI_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MRI_AXIS_V_keep_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_keep_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_keep_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_keep_V, AESL_token); // data

			std::vector<sc_bv<1> > MRI_AXIS_V_keep_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_keep_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_keep_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_keep_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_keep_V
				{
					// bitslice(0, 0)
					// {
						// celement: MRI_AXIS.V.keep.V(0, 0)
						// {
							sc_lv<1>* MRI_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.keep.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MRI_AXIS_V_keep_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.keep.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].keep
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].keep
									// output_left_conversion : aesl_tmp_3[i_0].keep
									// output_type_conversion : (MRI_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].keep = (MRI_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MRI_AXIS_V_strb_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_strb_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_strb_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_strb_V, AESL_token); // data

			std::vector<sc_bv<1> > MRI_AXIS_V_strb_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_strb_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_strb_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_strb_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_strb_V
				{
					// bitslice(0, 0)
					// {
						// celement: MRI_AXIS.V.strb.V(0, 0)
						// {
							sc_lv<1>* MRI_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.strb.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MRI_AXIS_V_strb_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.strb.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].strb
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].strb
									// output_left_conversion : aesl_tmp_3[i_0].strb
									// output_type_conversion : (MRI_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].strb = (MRI_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MRI_AXIS_V_user_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_user_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_user_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_user_V, AESL_token); // data

			std::vector<sc_bv<4> > MRI_AXIS_V_user_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_user_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_user_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_user_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_user_V
				{
					// bitslice(3, 0)
					// {
						// celement: MRI_AXIS.V.user.V(3, 0)
						// {
							sc_lv<4>* MRI_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<4>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.user.V(3, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(3, 0) = sc_bv<4>(MRI_AXIS_V_user_V_pc_buffer[hls_map_index].range(3, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.user.V(3, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].user
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].user
									// output_left_conversion : aesl_tmp_3[i_0].user
									// output_type_conversion : (MRI_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].user = (MRI_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MRI_AXIS_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > MRI_AXIS_V_last_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: MRI_AXIS.V.last.V(0, 0)
						// {
							sc_lv<1>* MRI_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MRI_AXIS_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].last
									// output_left_conversion : aesl_tmp_3[i_0].last
									// output_type_conversion : (MRI_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].last = (MRI_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MRI_AXIS_V_id_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_id_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_id_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_id_V, AESL_token); // data

			std::vector<sc_bv<5> > MRI_AXIS_V_id_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_id_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_id_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_id_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_id_V
				{
					// bitslice(4, 0)
					// {
						// celement: MRI_AXIS.V.id.V(4, 0)
						// {
							sc_lv<5>* MRI_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(MRI_AXIS_V_id_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].id
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].id
									// output_left_conversion : aesl_tmp_3[i_0].id
									// output_type_conversion : (MRI_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].id = (MRI_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MRI_AXIS_V_dest_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_dest_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_dest_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_dest_V, AESL_token); // data

			std::vector<sc_bv<5> > MRI_AXIS_V_dest_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MRI_AXIS_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MRI_AXIS_V_dest_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MRI_AXIS_V_dest_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MRI_AXIS_V_dest_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MRI_AXIS_V_dest_V
				{
					// bitslice(4, 0)
					// {
						// celement: MRI_AXIS.V.dest.V(4, 0)
						// {
							sc_lv<5>* MRI_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.dest.V(4, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										MRI_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(MRI_AXIS_V_dest_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MRI_AXIS.V.dest.V(4, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].dest
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].dest
									// output_left_conversion : aesl_tmp_3[i_0].dest
									// output_type_conversion : (MRI_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].dest = (MRI_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_data_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_data_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_data_V, AESL_token); // data

			std::vector<sc_bv<8> > MBW_AXIS_V_data_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_data_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_data_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_data_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_data_V
				{
					// bitslice(7, 0)
					// {
						// celement: MBW_AXIS.V.data.V(7, 0)
						// {
							sc_lv<8>* MBW_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<8>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.data.V(7, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].data) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(MBW_AXIS_V_data_V_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.data.V(7, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data
									// output_left_conversion : aesl_tmp_9[i_0].data
									// output_type_conversion : (MBW_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].data = (MBW_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_keep_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_keep_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_keep_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_keep_V, AESL_token); // data

			std::vector<sc_bv<1> > MBW_AXIS_V_keep_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_keep_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_keep_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_keep_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_keep_V
				{
					// bitslice(0, 0)
					// {
						// celement: MBW_AXIS.V.keep.V(0, 0)
						// {
							sc_lv<1>* MBW_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.keep.V(0, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].keep) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MBW_AXIS_V_keep_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.keep.V(0, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].keep
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].keep
									// output_left_conversion : aesl_tmp_9[i_0].keep
									// output_type_conversion : (MBW_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].keep) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].keep = (MBW_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_strb_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_strb_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_strb_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_strb_V, AESL_token); // data

			std::vector<sc_bv<1> > MBW_AXIS_V_strb_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_strb_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_strb_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_strb_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_strb_V
				{
					// bitslice(0, 0)
					// {
						// celement: MBW_AXIS.V.strb.V(0, 0)
						// {
							sc_lv<1>* MBW_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.strb.V(0, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].strb) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MBW_AXIS_V_strb_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.strb.V(0, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].strb
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].strb
									// output_left_conversion : aesl_tmp_9[i_0].strb
									// output_type_conversion : (MBW_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].strb) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].strb = (MBW_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_user_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_user_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_user_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_user_V, AESL_token); // data

			std::vector<sc_bv<4> > MBW_AXIS_V_user_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_user_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_user_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_user_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_user_V
				{
					// bitslice(3, 0)
					// {
						// celement: MBW_AXIS.V.user.V(3, 0)
						// {
							sc_lv<4>* MBW_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<4>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.user.V(3, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].user) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(3, 0) = sc_bv<4>(MBW_AXIS_V_user_V_pc_buffer[hls_map_index].range(3, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.user.V(3, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].user
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].user
									// output_left_conversion : aesl_tmp_9[i_0].user
									// output_type_conversion : (MBW_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].user) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].user = (MBW_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > MBW_AXIS_V_last_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: MBW_AXIS.V.last.V(0, 0)
						// {
							sc_lv<1>* MBW_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].last) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MBW_AXIS_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].last
									// output_left_conversion : aesl_tmp_9[i_0].last
									// output_type_conversion : (MBW_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].last = (MBW_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_id_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_id_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_id_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_id_V, AESL_token); // data

			std::vector<sc_bv<5> > MBW_AXIS_V_id_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_id_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_id_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_id_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_id_V
				{
					// bitslice(4, 0)
					// {
						// celement: MBW_AXIS.V.id.V(4, 0)
						// {
							sc_lv<5>* MBW_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].id) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(MBW_AXIS_V_id_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].id
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].id
									// output_left_conversion : aesl_tmp_9[i_0].id
									// output_type_conversion : (MBW_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].id) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].id = (MBW_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBW_AXIS_V_dest_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_dest_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_dest_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_dest_V, AESL_token); // data

			std::vector<sc_bv<5> > MBW_AXIS_V_dest_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBW_AXIS_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBW_AXIS_V_dest_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBW_AXIS_V_dest_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBW_AXIS_V_dest_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					ap_axiu<8, 4, 5, 5 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBW_AXIS_V_dest_V
				{
					// bitslice(4, 0)
					// {
						// celement: MBW_AXIS.V.dest.V(4, 0)
						// {
							sc_lv<5>* MBW_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.dest.V(4, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_9[0].dest) != NULL) // check the null address if the c port is array or others
									{
										MBW_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(MBW_AXIS_V_dest_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBW_AXIS.V.dest.V(4, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].dest
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].dest
									// output_left_conversion : aesl_tmp_9[i_0].dest
									// output_type_conversion : (MBW_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].dest) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_9[i_0].dest = (MBW_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_data_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_data_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_data_V, AESL_token); // data

			std::vector<sc_bv<16> > MBA_AXIS_V_data_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_data_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_data_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_data_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_data_V
				{
					// bitslice(15, 0)
					// {
						// celement: MBA_AXIS.V.data.V(15, 0)
						// {
							sc_lv<16>* MBA_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<16>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].data) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(MBA_AXIS_V_data_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].data
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].data
									// output_left_conversion : aesl_tmp_15[i_0].data
									// output_type_conversion : (MBA_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].data) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].data = (MBA_AXIS_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_keep_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_keep_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_keep_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_keep_V, AESL_token); // data

			std::vector<sc_bv<2> > MBA_AXIS_V_keep_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_keep_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_keep_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_keep_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_keep_V
				{
					// bitslice(1, 0)
					// {
						// celement: MBA_AXIS.V.keep.V(1, 0)
						// {
							sc_lv<2>* MBA_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<2>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(1, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.keep.V(1, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].keep) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(1, 0) = sc_bv<2>(MBA_AXIS_V_keep_V_pc_buffer[hls_map_index].range(1, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(1, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.keep.V(1, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].keep
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].keep
									// output_left_conversion : aesl_tmp_15[i_0].keep
									// output_type_conversion : (MBA_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].keep) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].keep = (MBA_AXIS_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_strb_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_strb_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_strb_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_strb_V, AESL_token); // data

			std::vector<sc_bv<2> > MBA_AXIS_V_strb_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_strb_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_strb_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_strb_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_strb_V
				{
					// bitslice(1, 0)
					// {
						// celement: MBA_AXIS.V.strb.V(1, 0)
						// {
							sc_lv<2>* MBA_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<2>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(1, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.strb.V(1, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].strb) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(1, 0) = sc_bv<2>(MBA_AXIS_V_strb_V_pc_buffer[hls_map_index].range(1, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(1, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.strb.V(1, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].strb
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].strb
									// output_left_conversion : aesl_tmp_15[i_0].strb
									// output_type_conversion : (MBA_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].strb) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].strb = (MBA_AXIS_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_user_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_user_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_user_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_user_V, AESL_token); // data

			std::vector<sc_bv<4> > MBA_AXIS_V_user_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_user_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_user_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_user_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_user_V
				{
					// bitslice(3, 0)
					// {
						// celement: MBA_AXIS.V.user.V(3, 0)
						// {
							sc_lv<4>* MBA_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<4>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.user.V(3, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].user) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(3, 0) = sc_bv<4>(MBA_AXIS_V_user_V_pc_buffer[hls_map_index].range(3, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.user.V(3, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].user
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].user
									// output_left_conversion : aesl_tmp_15[i_0].user
									// output_type_conversion : (MBA_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].user) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].user = (MBA_AXIS_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > MBA_AXIS_V_last_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: MBA_AXIS.V.last.V(0, 0)
						// {
							sc_lv<1>* MBA_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].last) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(MBA_AXIS_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].last
									// output_left_conversion : aesl_tmp_15[i_0].last
									// output_type_conversion : (MBA_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].last = (MBA_AXIS_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_id_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_id_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_id_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_id_V, AESL_token); // data

			std::vector<sc_bv<5> > MBA_AXIS_V_id_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_id_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_id_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_id_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_id_V
				{
					// bitslice(4, 0)
					// {
						// celement: MBA_AXIS.V.id.V(4, 0)
						// {
							sc_lv<5>* MBA_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].id) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(MBA_AXIS_V_id_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].id
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].id
									// output_left_conversion : aesl_tmp_15[i_0].id
									// output_type_conversion : (MBA_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].id) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].id = (MBA_AXIS_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "MBA_AXIS_V_dest_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_dest_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_dest_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_dest_V, AESL_token); // data

			std::vector<sc_bv<5> > MBA_AXIS_V_dest_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MBA_AXIS_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MBA_AXIS_V_dest_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MBA_AXIS_V_dest_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MBA_AXIS_V_dest_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_16)
			{
				aesl_tmp_16 = i;
			}

			if (aesl_tmp_16 > 0 && aesl_tmp_15.size() < aesl_tmp_16)
			{
				int aesl_tmp_15_size = aesl_tmp_15.size();

				for (int tmp_aesl_tmp_15 = 0; tmp_aesl_tmp_15 < aesl_tmp_16 - aesl_tmp_15_size; tmp_aesl_tmp_15++)
				{
					ap_axiu<16, 4, 5, 5 > tmp;
					aesl_tmp_15.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MBA_AXIS_V_dest_V
				{
					// bitslice(4, 0)
					// {
						// celement: MBA_AXIS.V.dest.V(4, 0)
						// {
							sc_lv<5>* MBA_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_16 - aesl_tmp_17];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.dest.V(4, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_15[0].dest) != NULL) // check the null address if the c port is array or others
									{
										MBA_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(MBA_AXIS_V_dest_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: MBA_AXIS.V.dest.V(4, 0)
						{
							// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
							for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_15[i_0].dest
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_15[0].dest
									// output_left_conversion : aesl_tmp_15[i_0].dest
									// output_type_conversion : (MBA_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_15[0].dest) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_15[i_0].dest = (MBA_AXIS_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "MRI_AXIS"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			MRI_AXIS.write(aesl_tmp_3[i]);
		}

		// push back output stream: "MBW_AXIS"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			MBW_AXIS.write(aesl_tmp_9[i]);
		}

		// push back output stream: "MBA_AXIS"
		for (int i = 0; i < aesl_tmp_16; i++)
		{
			MBA_AXIS.write(aesl_tmp_15[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "SLI_AXIS_V_data_V"
		char* tvin_SLI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_data_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V);

		// "SLI_AXIS_V_keep_V"
		char* tvin_SLI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_keep_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_keep_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V);

		// "SLI_AXIS_V_strb_V"
		char* tvin_SLI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_strb_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_strb_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V);

		// "SLI_AXIS_V_user_V"
		char* tvin_SLI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_user_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_user_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V);

		// "SLI_AXIS_V_last_V"
		char* tvin_SLI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_last_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_last_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V);

		// "SLI_AXIS_V_id_V"
		char* tvin_SLI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_id_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_id_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V);

		// "SLI_AXIS_V_dest_V"
		char* tvin_SLI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_SLI_AXIS_V_dest_V);
		char* wrapc_stream_size_in_SLI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_dest_V);
		char* wrapc_stream_ingress_status_SLI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V);

		// "MRI_AXIS_V_data_V"
		char* tvin_MRI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_data_V);
		char* tvout_MRI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_data_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_data_V);

		// "MRI_AXIS_V_keep_V"
		char* tvin_MRI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_keep_V);
		char* tvout_MRI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_keep_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_keep_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_keep_V);

		// "MRI_AXIS_V_strb_V"
		char* tvin_MRI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_strb_V);
		char* tvout_MRI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_strb_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_strb_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_strb_V);

		// "MRI_AXIS_V_user_V"
		char* tvin_MRI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_user_V);
		char* tvout_MRI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_user_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_user_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_user_V);

		// "MRI_AXIS_V_last_V"
		char* tvin_MRI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_last_V);
		char* tvout_MRI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_last_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_last_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_last_V);

		// "MRI_AXIS_V_id_V"
		char* tvin_MRI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_id_V);
		char* tvout_MRI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_id_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_id_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_id_V);

		// "MRI_AXIS_V_dest_V"
		char* tvin_MRI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MRI_AXIS_V_dest_V);
		char* tvout_MRI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MRI_AXIS_V_dest_V);
		char* wrapc_stream_size_out_MRI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_dest_V);
		char* wrapc_stream_egress_status_MRI_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MRI_AXIS_V_dest_V);

		// "STW_AXIS_V_data_V"
		char* tvin_STW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_data_V);
		char* wrapc_stream_size_in_STW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V);

		// "STW_AXIS_V_keep_V"
		char* tvin_STW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_keep_V);
		char* wrapc_stream_size_in_STW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_keep_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V);

		// "STW_AXIS_V_strb_V"
		char* tvin_STW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_strb_V);
		char* wrapc_stream_size_in_STW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_strb_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V);

		// "STW_AXIS_V_user_V"
		char* tvin_STW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_user_V);
		char* wrapc_stream_size_in_STW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_user_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V);

		// "STW_AXIS_V_last_V"
		char* tvin_STW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_last_V);
		char* wrapc_stream_size_in_STW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_last_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V);

		// "STW_AXIS_V_id_V"
		char* tvin_STW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_id_V);
		char* wrapc_stream_size_in_STW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_id_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V);

		// "STW_AXIS_V_dest_V"
		char* tvin_STW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STW_AXIS_V_dest_V);
		char* wrapc_stream_size_in_STW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_dest_V);
		char* wrapc_stream_ingress_status_STW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V);

		// "MBW_AXIS_V_data_V"
		char* tvin_MBW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_data_V);
		char* tvout_MBW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_data_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_data_V);

		// "MBW_AXIS_V_keep_V"
		char* tvin_MBW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_keep_V);
		char* tvout_MBW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_keep_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_keep_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_keep_V);

		// "MBW_AXIS_V_strb_V"
		char* tvin_MBW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_strb_V);
		char* tvout_MBW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_strb_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_strb_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_strb_V);

		// "MBW_AXIS_V_user_V"
		char* tvin_MBW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_user_V);
		char* tvout_MBW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_user_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_user_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_user_V);

		// "MBW_AXIS_V_last_V"
		char* tvin_MBW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_last_V);
		char* tvout_MBW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_last_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_last_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_last_V);

		// "MBW_AXIS_V_id_V"
		char* tvin_MBW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_id_V);
		char* tvout_MBW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_id_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_id_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_id_V);

		// "MBW_AXIS_V_dest_V"
		char* tvin_MBW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBW_AXIS_V_dest_V);
		char* tvout_MBW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBW_AXIS_V_dest_V);
		char* wrapc_stream_size_out_MBW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_dest_V);
		char* wrapc_stream_egress_status_MBW_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBW_AXIS_V_dest_V);

		// "STA_AXIS_V_data_V"
		char* tvin_STA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_data_V);
		char* wrapc_stream_size_in_STA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V);

		// "STA_AXIS_V_keep_V"
		char* tvin_STA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_keep_V);
		char* wrapc_stream_size_in_STA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_keep_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V);

		// "STA_AXIS_V_strb_V"
		char* tvin_STA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_strb_V);
		char* wrapc_stream_size_in_STA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_strb_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V);

		// "STA_AXIS_V_user_V"
		char* tvin_STA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_user_V);
		char* wrapc_stream_size_in_STA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_user_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V);

		// "STA_AXIS_V_last_V"
		char* tvin_STA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_last_V);
		char* wrapc_stream_size_in_STA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_last_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V);

		// "STA_AXIS_V_id_V"
		char* tvin_STA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_id_V);
		char* wrapc_stream_size_in_STA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_id_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V);

		// "STA_AXIS_V_dest_V"
		char* tvin_STA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_STA_AXIS_V_dest_V);
		char* wrapc_stream_size_in_STA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_dest_V);
		char* wrapc_stream_ingress_status_STA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V);

		// "MBA_AXIS_V_data_V"
		char* tvin_MBA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_data_V);
		char* tvout_MBA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_data_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_data_V);

		// "MBA_AXIS_V_keep_V"
		char* tvin_MBA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_keep_V);
		char* tvout_MBA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_keep_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_keep_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_keep_V);

		// "MBA_AXIS_V_strb_V"
		char* tvin_MBA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_strb_V);
		char* tvout_MBA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_strb_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_strb_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_strb_V);

		// "MBA_AXIS_V_user_V"
		char* tvin_MBA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_user_V);
		char* tvout_MBA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_user_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_user_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_user_V);

		// "MBA_AXIS_V_last_V"
		char* tvin_MBA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_last_V);
		char* tvout_MBA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_last_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_last_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_last_V);

		// "MBA_AXIS_V_id_V"
		char* tvin_MBA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_id_V);
		char* tvout_MBA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_id_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_id_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_id_V);

		// "MBA_AXIS_V_dest_V"
		char* tvin_MBA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MBA_AXIS_V_dest_V);
		char* tvout_MBA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MBA_AXIS_V_dest_V);
		char* wrapc_stream_size_out_MBA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_dest_V);
		char* wrapc_stream_egress_status_MBA_AXIS_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_MBA_AXIS_V_dest_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "SLI_AXIS"
		std::vector<ap_axiu<8, 4, 5, 5 > > aesl_tmp_0;
		int aesl_tmp_1 = 0;
		while (!SLI_AXIS.empty())
		{
			aesl_tmp_0.push_back(SLI_AXIS.read());
			aesl_tmp_1++;
		}

		// dump stream tvin: "MRI_AXIS"
		std::vector<ap_axiu<8, 4, 5, 5 > > aesl_tmp_3;
		int aesl_tmp_4 = 0;
		while (!MRI_AXIS.empty())
		{
			aesl_tmp_3.push_back(MRI_AXIS.read());
			aesl_tmp_4++;
		}

		// dump stream tvin: "STW_AXIS"
		std::vector<ap_axiu<8, 4, 5, 5 > > aesl_tmp_6;
		int aesl_tmp_7 = 0;
		while (!STW_AXIS.empty())
		{
			aesl_tmp_6.push_back(STW_AXIS.read());
			aesl_tmp_7++;
		}

		// dump stream tvin: "MBW_AXIS"
		std::vector<ap_axiu<8, 4, 5, 5 > > aesl_tmp_9;
		int aesl_tmp_10 = 0;
		while (!MBW_AXIS.empty())
		{
			aesl_tmp_9.push_back(MBW_AXIS.read());
			aesl_tmp_10++;
		}

		// dump stream tvin: "STA_AXIS"
		std::vector<ap_axiu<16, 4, 5, 5 > > aesl_tmp_12;
		int aesl_tmp_13 = 0;
		while (!STA_AXIS.empty())
		{
			aesl_tmp_12.push_back(STA_AXIS.read());
			aesl_tmp_13++;
		}

		// dump stream tvin: "MBA_AXIS"
		std::vector<ap_axiu<16, 4, 5, 5 > > aesl_tmp_15;
		int aesl_tmp_16 = 0;
		while (!MBA_AXIS.empty())
		{
			aesl_tmp_15.push_back(MBA_AXIS.read());
			aesl_tmp_16++;
		}

		// push back input stream: "SLI_AXIS"
		for (int i = 0; i < aesl_tmp_1; i++)
		{
			SLI_AXIS.write(aesl_tmp_0[i]);
		}

		// push back input stream: "MRI_AXIS"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			MRI_AXIS.write(aesl_tmp_3[i]);
		}

		// push back input stream: "STW_AXIS"
		for (int i = 0; i < aesl_tmp_7; i++)
		{
			STW_AXIS.write(aesl_tmp_6[i]);
		}

		// push back input stream: "MBW_AXIS"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			MBW_AXIS.write(aesl_tmp_9[i]);
		}

		// push back input stream: "STA_AXIS"
		for (int i = 0; i < aesl_tmp_13; i++)
		{
			STA_AXIS.write(aesl_tmp_12[i]);
		}

		// push back input stream: "MBA_AXIS"
		for (int i = 0; i < aesl_tmp_16; i++)
		{
			MBA_AXIS.write(aesl_tmp_15[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		pe(SLI_AXIS, MRI_AXIS, STW_AXIS, MBW_AXIS, STA_AXIS, MBA_AXIS);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "SLI_AXIS"
		int aesl_tmp_2 = SLI_AXIS.size();

		// pop output stream: "MRI_AXIS"
		int aesl_tmp_5 = aesl_tmp_4;
		aesl_tmp_4 = 0;
     aesl_tmp_3.clear();
		while (!MRI_AXIS.empty())
		{
			aesl_tmp_3.push_back(MRI_AXIS.read());
			aesl_tmp_4++;
		}

		// record input size to tv3: "STW_AXIS"
		int aesl_tmp_8 = STW_AXIS.size();

		// pop output stream: "MBW_AXIS"
		int aesl_tmp_11 = aesl_tmp_10;
		aesl_tmp_10 = 0;
     aesl_tmp_9.clear();
		while (!MBW_AXIS.empty())
		{
			aesl_tmp_9.push_back(MBW_AXIS.read());
			aesl_tmp_10++;
		}

		// record input size to tv3: "STA_AXIS"
		int aesl_tmp_14 = STA_AXIS.size();

		// pop output stream: "MBA_AXIS"
		int aesl_tmp_17 = aesl_tmp_16;
		aesl_tmp_16 = 0;
     aesl_tmp_15.clear();
		while (!MBA_AXIS.empty())
		{
			aesl_tmp_15.push_back(MBA_AXIS.read());
			aesl_tmp_16++;
		}

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_data_V, tvin_SLI_AXIS_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, tvin_SLI_AXIS_V_data_V);

		sc_bv<8>* SLI_AXIS_V_data_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_data_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.data.V(7, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data
							// regulate_c_name       : SLI_AXIS_V_data_V
							// input_type_conversion : (aesl_tmp_0[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_0[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> SLI_AXIS_V_data_V_tmp_mem;
								SLI_AXIS_V_data_V_tmp_mem = (aesl_tmp_0[i_0].data).to_string(2).c_str();
								SLI_AXIS_V_data_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = SLI_AXIS_V_data_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_data_V, "%s\n", (SLI_AXIS_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_data_V, tvin_SLI_AXIS_V_data_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_data_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, stream_ingress_size_SLI_AXIS_V_data_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_data_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, stream_ingress_size_SLI_AXIS_V_data_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_data_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, stream_ingress_size_SLI_AXIS_V_data_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_data_V_depth);
		sprintf(tvin_SLI_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_data_V, tvin_SLI_AXIS_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_data_V, tvin_SLI_AXIS_V_data_V);

		// release memory allocation
		delete [] SLI_AXIS_V_data_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, wrapc_stream_size_in_SLI_AXIS_V_data_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_data_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, wrapc_stream_size_in_SLI_AXIS_V_data_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_data_V, wrapc_stream_size_in_SLI_AXIS_V_data_V);

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_keep_V, tvin_SLI_AXIS_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, tvin_SLI_AXIS_V_keep_V);

		sc_bv<1>* SLI_AXIS_V_keep_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_keep_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.keep.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].keep
							// regulate_c_name       : SLI_AXIS_V_keep_V
							// input_type_conversion : (aesl_tmp_0[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_0[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> SLI_AXIS_V_keep_V_tmp_mem;
								SLI_AXIS_V_keep_V_tmp_mem = (aesl_tmp_0[i_0].keep).to_string(2).c_str();
								SLI_AXIS_V_keep_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = SLI_AXIS_V_keep_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_keep_V, "%s\n", (SLI_AXIS_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_keep_V, tvin_SLI_AXIS_V_keep_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_keep_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, stream_ingress_size_SLI_AXIS_V_keep_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_keep_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, stream_ingress_size_SLI_AXIS_V_keep_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_keep_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, stream_ingress_size_SLI_AXIS_V_keep_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_keep_V_depth);
		sprintf(tvin_SLI_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_keep_V, tvin_SLI_AXIS_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_keep_V, tvin_SLI_AXIS_V_keep_V);

		// release memory allocation
		delete [] SLI_AXIS_V_keep_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_keep_V, wrapc_stream_size_in_SLI_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_keep_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_keep_V, wrapc_stream_size_in_SLI_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_keep_V, wrapc_stream_size_in_SLI_AXIS_V_keep_V);

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_strb_V, tvin_SLI_AXIS_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, tvin_SLI_AXIS_V_strb_V);

		sc_bv<1>* SLI_AXIS_V_strb_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_strb_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.strb.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].strb
							// regulate_c_name       : SLI_AXIS_V_strb_V
							// input_type_conversion : (aesl_tmp_0[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_0[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> SLI_AXIS_V_strb_V_tmp_mem;
								SLI_AXIS_V_strb_V_tmp_mem = (aesl_tmp_0[i_0].strb).to_string(2).c_str();
								SLI_AXIS_V_strb_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = SLI_AXIS_V_strb_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_strb_V, "%s\n", (SLI_AXIS_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_strb_V, tvin_SLI_AXIS_V_strb_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_strb_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, stream_ingress_size_SLI_AXIS_V_strb_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_strb_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, stream_ingress_size_SLI_AXIS_V_strb_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_strb_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, stream_ingress_size_SLI_AXIS_V_strb_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_strb_V_depth);
		sprintf(tvin_SLI_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_strb_V, tvin_SLI_AXIS_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_strb_V, tvin_SLI_AXIS_V_strb_V);

		// release memory allocation
		delete [] SLI_AXIS_V_strb_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_strb_V, wrapc_stream_size_in_SLI_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_strb_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_strb_V, wrapc_stream_size_in_SLI_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_strb_V, wrapc_stream_size_in_SLI_AXIS_V_strb_V);

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_user_V, tvin_SLI_AXIS_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, tvin_SLI_AXIS_V_user_V);

		sc_bv<4>* SLI_AXIS_V_user_V_tvin_wrapc_buffer = new sc_bv<4>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_user_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.user.V(3, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].user
							// regulate_c_name       : SLI_AXIS_V_user_V
							// input_type_conversion : (aesl_tmp_0[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_0[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> SLI_AXIS_V_user_V_tmp_mem;
								SLI_AXIS_V_user_V_tmp_mem = (aesl_tmp_0[i_0].user).to_string(2).c_str();
								SLI_AXIS_V_user_V_tvin_wrapc_buffer[hls_map_index].range(3, 0) = SLI_AXIS_V_user_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_user_V, "%s\n", (SLI_AXIS_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_user_V, tvin_SLI_AXIS_V_user_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_user_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, stream_ingress_size_SLI_AXIS_V_user_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_user_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, stream_ingress_size_SLI_AXIS_V_user_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_user_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, stream_ingress_size_SLI_AXIS_V_user_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_user_V_depth);
		sprintf(tvin_SLI_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_user_V, tvin_SLI_AXIS_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_user_V, tvin_SLI_AXIS_V_user_V);

		// release memory allocation
		delete [] SLI_AXIS_V_user_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_user_V, wrapc_stream_size_in_SLI_AXIS_V_user_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_user_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_user_V, wrapc_stream_size_in_SLI_AXIS_V_user_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_user_V, wrapc_stream_size_in_SLI_AXIS_V_user_V);

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_last_V, tvin_SLI_AXIS_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, tvin_SLI_AXIS_V_last_V);

		sc_bv<1>* SLI_AXIS_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].last
							// regulate_c_name       : SLI_AXIS_V_last_V
							// input_type_conversion : (aesl_tmp_0[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_0[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> SLI_AXIS_V_last_V_tmp_mem;
								SLI_AXIS_V_last_V_tmp_mem = (aesl_tmp_0[i_0].last).to_string(2).c_str();
								SLI_AXIS_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = SLI_AXIS_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_last_V, "%s\n", (SLI_AXIS_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_last_V, tvin_SLI_AXIS_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_last_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, stream_ingress_size_SLI_AXIS_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, stream_ingress_size_SLI_AXIS_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, stream_ingress_size_SLI_AXIS_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_last_V_depth);
		sprintf(tvin_SLI_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_last_V, tvin_SLI_AXIS_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_last_V, tvin_SLI_AXIS_V_last_V);

		// release memory allocation
		delete [] SLI_AXIS_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_last_V, wrapc_stream_size_in_SLI_AXIS_V_last_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_last_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_last_V, wrapc_stream_size_in_SLI_AXIS_V_last_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_last_V, wrapc_stream_size_in_SLI_AXIS_V_last_V);

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_id_V, tvin_SLI_AXIS_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, tvin_SLI_AXIS_V_id_V);

		sc_bv<5>* SLI_AXIS_V_id_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.id.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].id
							// regulate_c_name       : SLI_AXIS_V_id_V
							// input_type_conversion : (aesl_tmp_0[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_0[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> SLI_AXIS_V_id_V_tmp_mem;
								SLI_AXIS_V_id_V_tmp_mem = (aesl_tmp_0[i_0].id).to_string(2).c_str();
								SLI_AXIS_V_id_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = SLI_AXIS_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_id_V, "%s\n", (SLI_AXIS_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_id_V, tvin_SLI_AXIS_V_id_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_id_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, stream_ingress_size_SLI_AXIS_V_id_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_id_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, stream_ingress_size_SLI_AXIS_V_id_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_id_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, stream_ingress_size_SLI_AXIS_V_id_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_id_V_depth);
		sprintf(tvin_SLI_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_id_V, tvin_SLI_AXIS_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_id_V, tvin_SLI_AXIS_V_id_V);

		// release memory allocation
		delete [] SLI_AXIS_V_id_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_id_V, wrapc_stream_size_in_SLI_AXIS_V_id_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_id_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_id_V, wrapc_stream_size_in_SLI_AXIS_V_id_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_id_V, wrapc_stream_size_in_SLI_AXIS_V_id_V);

		// [[transaction]]
		sprintf(tvin_SLI_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_dest_V, tvin_SLI_AXIS_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, tvin_SLI_AXIS_V_dest_V);

		sc_bv<5>* SLI_AXIS_V_dest_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: SLI_AXIS_V_dest_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: SLI_AXIS.V.dest.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].dest
							// regulate_c_name       : SLI_AXIS_V_dest_V
							// input_type_conversion : (aesl_tmp_0[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_0[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> SLI_AXIS_V_dest_V_tmp_mem;
								SLI_AXIS_V_dest_V_tmp_mem = (aesl_tmp_0[i_0].dest).to_string(2).c_str();
								SLI_AXIS_V_dest_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = SLI_AXIS_V_dest_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_SLI_AXIS_V_dest_V, "%s\n", (SLI_AXIS_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_dest_V, tvin_SLI_AXIS_V_dest_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_SLI_AXIS_V_dest_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, stream_ingress_size_SLI_AXIS_V_dest_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_SLI_AXIS_V_dest_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, stream_ingress_size_SLI_AXIS_V_dest_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_SLI_AXIS_V_dest_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, stream_ingress_size_SLI_AXIS_V_dest_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.SLI_AXIS_V_dest_V_depth);
		sprintf(tvin_SLI_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_SLI_AXIS_V_dest_V, tvin_SLI_AXIS_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_SLI_AXIS_V_dest_V, tvin_SLI_AXIS_V_dest_V);

		// release memory allocation
		delete [] SLI_AXIS_V_dest_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_dest_V, wrapc_stream_size_in_SLI_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_dest_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_dest_V, wrapc_stream_size_in_SLI_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_in_SLI_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_SLI_AXIS_V_dest_V, wrapc_stream_size_in_SLI_AXIS_V_dest_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_data_V, tvout_MRI_AXIS_V_data_V);

		sc_bv<8>* MRI_AXIS_V_data_V_tvout_wrapc_buffer = new sc_bv<8>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_data_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.data.V(7, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data
							// regulate_c_name       : MRI_AXIS_V_data_V
							// input_type_conversion : (aesl_tmp_3[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> MRI_AXIS_V_data_V_tmp_mem;
								MRI_AXIS_V_data_V_tmp_mem = (aesl_tmp_3[i_0].data).to_string(2).c_str();
								MRI_AXIS_V_data_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = MRI_AXIS_V_data_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_data_V, "%s\n", (MRI_AXIS_V_data_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_data_V, tvout_MRI_AXIS_V_data_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_data_V_depth);
		sprintf(tvout_MRI_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_data_V, tvout_MRI_AXIS_V_data_V);

		// release memory allocation
		delete [] MRI_AXIS_V_data_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, wrapc_stream_size_out_MRI_AXIS_V_data_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_data_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, wrapc_stream_size_out_MRI_AXIS_V_data_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_data_V, wrapc_stream_size_out_MRI_AXIS_V_data_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_keep_V, tvout_MRI_AXIS_V_keep_V);

		sc_bv<1>* MRI_AXIS_V_keep_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_keep_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.keep.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].keep
							// regulate_c_name       : MRI_AXIS_V_keep_V
							// input_type_conversion : (aesl_tmp_3[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MRI_AXIS_V_keep_V_tmp_mem;
								MRI_AXIS_V_keep_V_tmp_mem = (aesl_tmp_3[i_0].keep).to_string(2).c_str();
								MRI_AXIS_V_keep_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MRI_AXIS_V_keep_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_keep_V, "%s\n", (MRI_AXIS_V_keep_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_keep_V, tvout_MRI_AXIS_V_keep_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_keep_V_depth);
		sprintf(tvout_MRI_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_keep_V, tvout_MRI_AXIS_V_keep_V);

		// release memory allocation
		delete [] MRI_AXIS_V_keep_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_keep_V, wrapc_stream_size_out_MRI_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_keep_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_keep_V, wrapc_stream_size_out_MRI_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_keep_V, wrapc_stream_size_out_MRI_AXIS_V_keep_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_strb_V, tvout_MRI_AXIS_V_strb_V);

		sc_bv<1>* MRI_AXIS_V_strb_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_strb_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.strb.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].strb
							// regulate_c_name       : MRI_AXIS_V_strb_V
							// input_type_conversion : (aesl_tmp_3[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MRI_AXIS_V_strb_V_tmp_mem;
								MRI_AXIS_V_strb_V_tmp_mem = (aesl_tmp_3[i_0].strb).to_string(2).c_str();
								MRI_AXIS_V_strb_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MRI_AXIS_V_strb_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_strb_V, "%s\n", (MRI_AXIS_V_strb_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_strb_V, tvout_MRI_AXIS_V_strb_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_strb_V_depth);
		sprintf(tvout_MRI_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_strb_V, tvout_MRI_AXIS_V_strb_V);

		// release memory allocation
		delete [] MRI_AXIS_V_strb_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_strb_V, wrapc_stream_size_out_MRI_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_strb_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_strb_V, wrapc_stream_size_out_MRI_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_strb_V, wrapc_stream_size_out_MRI_AXIS_V_strb_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_user_V, tvout_MRI_AXIS_V_user_V);

		sc_bv<4>* MRI_AXIS_V_user_V_tvout_wrapc_buffer = new sc_bv<4>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_user_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.user.V(3, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].user
							// regulate_c_name       : MRI_AXIS_V_user_V
							// input_type_conversion : (aesl_tmp_3[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> MRI_AXIS_V_user_V_tmp_mem;
								MRI_AXIS_V_user_V_tmp_mem = (aesl_tmp_3[i_0].user).to_string(2).c_str();
								MRI_AXIS_V_user_V_tvout_wrapc_buffer[hls_map_index].range(3, 0) = MRI_AXIS_V_user_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_user_V, "%s\n", (MRI_AXIS_V_user_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_user_V, tvout_MRI_AXIS_V_user_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_user_V_depth);
		sprintf(tvout_MRI_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_user_V, tvout_MRI_AXIS_V_user_V);

		// release memory allocation
		delete [] MRI_AXIS_V_user_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_user_V, wrapc_stream_size_out_MRI_AXIS_V_user_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_user_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_user_V, wrapc_stream_size_out_MRI_AXIS_V_user_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_user_V, wrapc_stream_size_out_MRI_AXIS_V_user_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_last_V, tvout_MRI_AXIS_V_last_V);

		sc_bv<1>* MRI_AXIS_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].last
							// regulate_c_name       : MRI_AXIS_V_last_V
							// input_type_conversion : (aesl_tmp_3[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MRI_AXIS_V_last_V_tmp_mem;
								MRI_AXIS_V_last_V_tmp_mem = (aesl_tmp_3[i_0].last).to_string(2).c_str();
								MRI_AXIS_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MRI_AXIS_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_last_V, "%s\n", (MRI_AXIS_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_last_V, tvout_MRI_AXIS_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_last_V_depth);
		sprintf(tvout_MRI_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_last_V, tvout_MRI_AXIS_V_last_V);

		// release memory allocation
		delete [] MRI_AXIS_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_last_V, wrapc_stream_size_out_MRI_AXIS_V_last_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_last_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_last_V, wrapc_stream_size_out_MRI_AXIS_V_last_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_last_V, wrapc_stream_size_out_MRI_AXIS_V_last_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_id_V, tvout_MRI_AXIS_V_id_V);

		sc_bv<5>* MRI_AXIS_V_id_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.id.V(4, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].id
							// regulate_c_name       : MRI_AXIS_V_id_V
							// input_type_conversion : (aesl_tmp_3[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> MRI_AXIS_V_id_V_tmp_mem;
								MRI_AXIS_V_id_V_tmp_mem = (aesl_tmp_3[i_0].id).to_string(2).c_str();
								MRI_AXIS_V_id_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = MRI_AXIS_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_id_V, "%s\n", (MRI_AXIS_V_id_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_id_V, tvout_MRI_AXIS_V_id_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_id_V_depth);
		sprintf(tvout_MRI_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_id_V, tvout_MRI_AXIS_V_id_V);

		// release memory allocation
		delete [] MRI_AXIS_V_id_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_id_V, wrapc_stream_size_out_MRI_AXIS_V_id_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_id_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_id_V, wrapc_stream_size_out_MRI_AXIS_V_id_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_id_V, wrapc_stream_size_out_MRI_AXIS_V_id_V);

		// [[transaction]]
		sprintf(tvout_MRI_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_dest_V, tvout_MRI_AXIS_V_dest_V);

		sc_bv<5>* MRI_AXIS_V_dest_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: MRI_AXIS_V_dest_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: MRI_AXIS.V.dest.V(4, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].dest
							// regulate_c_name       : MRI_AXIS_V_dest_V
							// input_type_conversion : (aesl_tmp_3[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> MRI_AXIS_V_dest_V_tmp_mem;
								MRI_AXIS_V_dest_V_tmp_mem = (aesl_tmp_3[i_0].dest).to_string(2).c_str();
								MRI_AXIS_V_dest_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = MRI_AXIS_V_dest_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_MRI_AXIS_V_dest_V, "%s\n", (MRI_AXIS_V_dest_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_dest_V, tvout_MRI_AXIS_V_dest_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.MRI_AXIS_V_dest_V_depth);
		sprintf(tvout_MRI_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MRI_AXIS_V_dest_V, tvout_MRI_AXIS_V_dest_V);

		// release memory allocation
		delete [] MRI_AXIS_V_dest_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_dest_V, wrapc_stream_size_out_MRI_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_dest_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_dest_V, wrapc_stream_size_out_MRI_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_out_MRI_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MRI_AXIS_V_dest_V, wrapc_stream_size_out_MRI_AXIS_V_dest_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_data_V, tvin_STW_AXIS_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, tvin_STW_AXIS_V_data_V);

		sc_bv<8>* STW_AXIS_V_data_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_data_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.data.V(7, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data
							// regulate_c_name       : STW_AXIS_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_6[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> STW_AXIS_V_data_V_tmp_mem;
								STW_AXIS_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data).to_string(2).c_str();
								STW_AXIS_V_data_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = STW_AXIS_V_data_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_data_V, "%s\n", (STW_AXIS_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_data_V, tvin_STW_AXIS_V_data_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_data_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, stream_ingress_size_STW_AXIS_V_data_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_data_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, stream_ingress_size_STW_AXIS_V_data_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_data_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, stream_ingress_size_STW_AXIS_V_data_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_data_V_depth);
		sprintf(tvin_STW_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_data_V, tvin_STW_AXIS_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_data_V, tvin_STW_AXIS_V_data_V);

		// release memory allocation
		delete [] STW_AXIS_V_data_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, wrapc_stream_size_in_STW_AXIS_V_data_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_data_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, wrapc_stream_size_in_STW_AXIS_V_data_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_data_V, wrapc_stream_size_in_STW_AXIS_V_data_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_keep_V, tvin_STW_AXIS_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, tvin_STW_AXIS_V_keep_V);

		sc_bv<1>* STW_AXIS_V_keep_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_keep_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.keep.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].keep
							// regulate_c_name       : STW_AXIS_V_keep_V
							// input_type_conversion : (aesl_tmp_6[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_6[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> STW_AXIS_V_keep_V_tmp_mem;
								STW_AXIS_V_keep_V_tmp_mem = (aesl_tmp_6[i_0].keep).to_string(2).c_str();
								STW_AXIS_V_keep_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = STW_AXIS_V_keep_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_keep_V, "%s\n", (STW_AXIS_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_keep_V, tvin_STW_AXIS_V_keep_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_keep_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, stream_ingress_size_STW_AXIS_V_keep_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_keep_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, stream_ingress_size_STW_AXIS_V_keep_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_keep_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, stream_ingress_size_STW_AXIS_V_keep_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_keep_V_depth);
		sprintf(tvin_STW_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_keep_V, tvin_STW_AXIS_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_keep_V, tvin_STW_AXIS_V_keep_V);

		// release memory allocation
		delete [] STW_AXIS_V_keep_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_keep_V, wrapc_stream_size_in_STW_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_keep_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_keep_V, wrapc_stream_size_in_STW_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_keep_V, wrapc_stream_size_in_STW_AXIS_V_keep_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_strb_V, tvin_STW_AXIS_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, tvin_STW_AXIS_V_strb_V);

		sc_bv<1>* STW_AXIS_V_strb_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_strb_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.strb.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].strb
							// regulate_c_name       : STW_AXIS_V_strb_V
							// input_type_conversion : (aesl_tmp_6[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_6[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> STW_AXIS_V_strb_V_tmp_mem;
								STW_AXIS_V_strb_V_tmp_mem = (aesl_tmp_6[i_0].strb).to_string(2).c_str();
								STW_AXIS_V_strb_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = STW_AXIS_V_strb_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_strb_V, "%s\n", (STW_AXIS_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_strb_V, tvin_STW_AXIS_V_strb_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_strb_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, stream_ingress_size_STW_AXIS_V_strb_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_strb_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, stream_ingress_size_STW_AXIS_V_strb_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_strb_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, stream_ingress_size_STW_AXIS_V_strb_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_strb_V_depth);
		sprintf(tvin_STW_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_strb_V, tvin_STW_AXIS_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_strb_V, tvin_STW_AXIS_V_strb_V);

		// release memory allocation
		delete [] STW_AXIS_V_strb_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_strb_V, wrapc_stream_size_in_STW_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_strb_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_strb_V, wrapc_stream_size_in_STW_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_strb_V, wrapc_stream_size_in_STW_AXIS_V_strb_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_user_V, tvin_STW_AXIS_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, tvin_STW_AXIS_V_user_V);

		sc_bv<4>* STW_AXIS_V_user_V_tvin_wrapc_buffer = new sc_bv<4>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_user_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.user.V(3, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].user
							// regulate_c_name       : STW_AXIS_V_user_V
							// input_type_conversion : (aesl_tmp_6[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_6[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> STW_AXIS_V_user_V_tmp_mem;
								STW_AXIS_V_user_V_tmp_mem = (aesl_tmp_6[i_0].user).to_string(2).c_str();
								STW_AXIS_V_user_V_tvin_wrapc_buffer[hls_map_index].range(3, 0) = STW_AXIS_V_user_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_user_V, "%s\n", (STW_AXIS_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_user_V, tvin_STW_AXIS_V_user_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_user_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, stream_ingress_size_STW_AXIS_V_user_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_user_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, stream_ingress_size_STW_AXIS_V_user_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_user_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, stream_ingress_size_STW_AXIS_V_user_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_user_V_depth);
		sprintf(tvin_STW_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_user_V, tvin_STW_AXIS_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_user_V, tvin_STW_AXIS_V_user_V);

		// release memory allocation
		delete [] STW_AXIS_V_user_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_user_V, wrapc_stream_size_in_STW_AXIS_V_user_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_user_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_user_V, wrapc_stream_size_in_STW_AXIS_V_user_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_user_V, wrapc_stream_size_in_STW_AXIS_V_user_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_last_V, tvin_STW_AXIS_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, tvin_STW_AXIS_V_last_V);

		sc_bv<1>* STW_AXIS_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].last
							// regulate_c_name       : STW_AXIS_V_last_V
							// input_type_conversion : (aesl_tmp_6[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_6[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> STW_AXIS_V_last_V_tmp_mem;
								STW_AXIS_V_last_V_tmp_mem = (aesl_tmp_6[i_0].last).to_string(2).c_str();
								STW_AXIS_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = STW_AXIS_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_last_V, "%s\n", (STW_AXIS_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_last_V, tvin_STW_AXIS_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_last_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, stream_ingress_size_STW_AXIS_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, stream_ingress_size_STW_AXIS_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, stream_ingress_size_STW_AXIS_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_last_V_depth);
		sprintf(tvin_STW_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_last_V, tvin_STW_AXIS_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_last_V, tvin_STW_AXIS_V_last_V);

		// release memory allocation
		delete [] STW_AXIS_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_last_V, wrapc_stream_size_in_STW_AXIS_V_last_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_last_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_last_V, wrapc_stream_size_in_STW_AXIS_V_last_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_last_V, wrapc_stream_size_in_STW_AXIS_V_last_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_id_V, tvin_STW_AXIS_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, tvin_STW_AXIS_V_id_V);

		sc_bv<5>* STW_AXIS_V_id_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.id.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].id
							// regulate_c_name       : STW_AXIS_V_id_V
							// input_type_conversion : (aesl_tmp_6[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_6[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> STW_AXIS_V_id_V_tmp_mem;
								STW_AXIS_V_id_V_tmp_mem = (aesl_tmp_6[i_0].id).to_string(2).c_str();
								STW_AXIS_V_id_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = STW_AXIS_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_id_V, "%s\n", (STW_AXIS_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_id_V, tvin_STW_AXIS_V_id_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_id_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, stream_ingress_size_STW_AXIS_V_id_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_id_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, stream_ingress_size_STW_AXIS_V_id_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_id_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, stream_ingress_size_STW_AXIS_V_id_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_id_V_depth);
		sprintf(tvin_STW_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_id_V, tvin_STW_AXIS_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_id_V, tvin_STW_AXIS_V_id_V);

		// release memory allocation
		delete [] STW_AXIS_V_id_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_id_V, wrapc_stream_size_in_STW_AXIS_V_id_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_id_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_id_V, wrapc_stream_size_in_STW_AXIS_V_id_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_id_V, wrapc_stream_size_in_STW_AXIS_V_id_V);

		// [[transaction]]
		sprintf(tvin_STW_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_dest_V, tvin_STW_AXIS_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, tvin_STW_AXIS_V_dest_V);

		sc_bv<5>* STW_AXIS_V_dest_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: STW_AXIS_V_dest_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: STW_AXIS.V.dest.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].dest
							// regulate_c_name       : STW_AXIS_V_dest_V
							// input_type_conversion : (aesl_tmp_6[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_6[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> STW_AXIS_V_dest_V_tmp_mem;
								STW_AXIS_V_dest_V_tmp_mem = (aesl_tmp_6[i_0].dest).to_string(2).c_str();
								STW_AXIS_V_dest_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = STW_AXIS_V_dest_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_STW_AXIS_V_dest_V, "%s\n", (STW_AXIS_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_dest_V, tvin_STW_AXIS_V_dest_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_STW_AXIS_V_dest_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, stream_ingress_size_STW_AXIS_V_dest_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_STW_AXIS_V_dest_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, stream_ingress_size_STW_AXIS_V_dest_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STW_AXIS_V_dest_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, stream_ingress_size_STW_AXIS_V_dest_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.STW_AXIS_V_dest_V_depth);
		sprintf(tvin_STW_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STW_AXIS_V_dest_V, tvin_STW_AXIS_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STW_AXIS_V_dest_V, tvin_STW_AXIS_V_dest_V);

		// release memory allocation
		delete [] STW_AXIS_V_dest_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STW_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_dest_V, wrapc_stream_size_in_STW_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_dest_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_dest_V, wrapc_stream_size_in_STW_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_in_STW_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STW_AXIS_V_dest_V, wrapc_stream_size_in_STW_AXIS_V_dest_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_data_V, tvout_MBW_AXIS_V_data_V);

		sc_bv<8>* MBW_AXIS_V_data_V_tvout_wrapc_buffer = new sc_bv<8>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_data_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.data.V(7, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data
							// regulate_c_name       : MBW_AXIS_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_9[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> MBW_AXIS_V_data_V_tmp_mem;
								MBW_AXIS_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data).to_string(2).c_str();
								MBW_AXIS_V_data_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = MBW_AXIS_V_data_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_data_V, "%s\n", (MBW_AXIS_V_data_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_data_V, tvout_MBW_AXIS_V_data_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_data_V_depth);
		sprintf(tvout_MBW_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_data_V, tvout_MBW_AXIS_V_data_V);

		// release memory allocation
		delete [] MBW_AXIS_V_data_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, wrapc_stream_size_out_MBW_AXIS_V_data_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_data_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, wrapc_stream_size_out_MBW_AXIS_V_data_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_data_V, wrapc_stream_size_out_MBW_AXIS_V_data_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_keep_V, tvout_MBW_AXIS_V_keep_V);

		sc_bv<1>* MBW_AXIS_V_keep_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_keep_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.keep.V(0, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].keep
							// regulate_c_name       : MBW_AXIS_V_keep_V
							// input_type_conversion : (aesl_tmp_9[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_9[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MBW_AXIS_V_keep_V_tmp_mem;
								MBW_AXIS_V_keep_V_tmp_mem = (aesl_tmp_9[i_0].keep).to_string(2).c_str();
								MBW_AXIS_V_keep_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MBW_AXIS_V_keep_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_keep_V, "%s\n", (MBW_AXIS_V_keep_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_keep_V, tvout_MBW_AXIS_V_keep_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_keep_V_depth);
		sprintf(tvout_MBW_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_keep_V, tvout_MBW_AXIS_V_keep_V);

		// release memory allocation
		delete [] MBW_AXIS_V_keep_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_keep_V, wrapc_stream_size_out_MBW_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_keep_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_keep_V, wrapc_stream_size_out_MBW_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_keep_V, wrapc_stream_size_out_MBW_AXIS_V_keep_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_strb_V, tvout_MBW_AXIS_V_strb_V);

		sc_bv<1>* MBW_AXIS_V_strb_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_strb_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.strb.V(0, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].strb
							// regulate_c_name       : MBW_AXIS_V_strb_V
							// input_type_conversion : (aesl_tmp_9[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_9[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MBW_AXIS_V_strb_V_tmp_mem;
								MBW_AXIS_V_strb_V_tmp_mem = (aesl_tmp_9[i_0].strb).to_string(2).c_str();
								MBW_AXIS_V_strb_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MBW_AXIS_V_strb_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_strb_V, "%s\n", (MBW_AXIS_V_strb_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_strb_V, tvout_MBW_AXIS_V_strb_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_strb_V_depth);
		sprintf(tvout_MBW_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_strb_V, tvout_MBW_AXIS_V_strb_V);

		// release memory allocation
		delete [] MBW_AXIS_V_strb_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_strb_V, wrapc_stream_size_out_MBW_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_strb_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_strb_V, wrapc_stream_size_out_MBW_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_strb_V, wrapc_stream_size_out_MBW_AXIS_V_strb_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_user_V, tvout_MBW_AXIS_V_user_V);

		sc_bv<4>* MBW_AXIS_V_user_V_tvout_wrapc_buffer = new sc_bv<4>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_user_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.user.V(3, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].user
							// regulate_c_name       : MBW_AXIS_V_user_V
							// input_type_conversion : (aesl_tmp_9[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_9[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> MBW_AXIS_V_user_V_tmp_mem;
								MBW_AXIS_V_user_V_tmp_mem = (aesl_tmp_9[i_0].user).to_string(2).c_str();
								MBW_AXIS_V_user_V_tvout_wrapc_buffer[hls_map_index].range(3, 0) = MBW_AXIS_V_user_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_user_V, "%s\n", (MBW_AXIS_V_user_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_user_V, tvout_MBW_AXIS_V_user_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_user_V_depth);
		sprintf(tvout_MBW_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_user_V, tvout_MBW_AXIS_V_user_V);

		// release memory allocation
		delete [] MBW_AXIS_V_user_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_user_V, wrapc_stream_size_out_MBW_AXIS_V_user_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_user_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_user_V, wrapc_stream_size_out_MBW_AXIS_V_user_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_user_V, wrapc_stream_size_out_MBW_AXIS_V_user_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_last_V, tvout_MBW_AXIS_V_last_V);

		sc_bv<1>* MBW_AXIS_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].last
							// regulate_c_name       : MBW_AXIS_V_last_V
							// input_type_conversion : (aesl_tmp_9[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_9[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MBW_AXIS_V_last_V_tmp_mem;
								MBW_AXIS_V_last_V_tmp_mem = (aesl_tmp_9[i_0].last).to_string(2).c_str();
								MBW_AXIS_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MBW_AXIS_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_last_V, "%s\n", (MBW_AXIS_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_last_V, tvout_MBW_AXIS_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_last_V_depth);
		sprintf(tvout_MBW_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_last_V, tvout_MBW_AXIS_V_last_V);

		// release memory allocation
		delete [] MBW_AXIS_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_last_V, wrapc_stream_size_out_MBW_AXIS_V_last_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_last_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_last_V, wrapc_stream_size_out_MBW_AXIS_V_last_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_last_V, wrapc_stream_size_out_MBW_AXIS_V_last_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_id_V, tvout_MBW_AXIS_V_id_V);

		sc_bv<5>* MBW_AXIS_V_id_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.id.V(4, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].id
							// regulate_c_name       : MBW_AXIS_V_id_V
							// input_type_conversion : (aesl_tmp_9[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_9[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> MBW_AXIS_V_id_V_tmp_mem;
								MBW_AXIS_V_id_V_tmp_mem = (aesl_tmp_9[i_0].id).to_string(2).c_str();
								MBW_AXIS_V_id_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = MBW_AXIS_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_id_V, "%s\n", (MBW_AXIS_V_id_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_id_V, tvout_MBW_AXIS_V_id_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_id_V_depth);
		sprintf(tvout_MBW_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_id_V, tvout_MBW_AXIS_V_id_V);

		// release memory allocation
		delete [] MBW_AXIS_V_id_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_id_V, wrapc_stream_size_out_MBW_AXIS_V_id_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_id_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_id_V, wrapc_stream_size_out_MBW_AXIS_V_id_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_id_V, wrapc_stream_size_out_MBW_AXIS_V_id_V);

		// [[transaction]]
		sprintf(tvout_MBW_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_dest_V, tvout_MBW_AXIS_V_dest_V);

		sc_bv<5>* MBW_AXIS_V_dest_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: MBW_AXIS_V_dest_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: MBW_AXIS.V.dest.V(4, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].dest
							// regulate_c_name       : MBW_AXIS_V_dest_V
							// input_type_conversion : (aesl_tmp_9[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_9[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> MBW_AXIS_V_dest_V_tmp_mem;
								MBW_AXIS_V_dest_V_tmp_mem = (aesl_tmp_9[i_0].dest).to_string(2).c_str();
								MBW_AXIS_V_dest_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = MBW_AXIS_V_dest_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_MBW_AXIS_V_dest_V, "%s\n", (MBW_AXIS_V_dest_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_dest_V, tvout_MBW_AXIS_V_dest_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.MBW_AXIS_V_dest_V_depth);
		sprintf(tvout_MBW_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBW_AXIS_V_dest_V, tvout_MBW_AXIS_V_dest_V);

		// release memory allocation
		delete [] MBW_AXIS_V_dest_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_dest_V, wrapc_stream_size_out_MBW_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_dest_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_dest_V, wrapc_stream_size_out_MBW_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_out_MBW_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBW_AXIS_V_dest_V, wrapc_stream_size_out_MBW_AXIS_V_dest_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_data_V, tvin_STA_AXIS_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, tvin_STA_AXIS_V_data_V);

		sc_bv<16>* STA_AXIS_V_data_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_data_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].data
							// regulate_c_name       : STA_AXIS_V_data_V
							// input_type_conversion : (aesl_tmp_12[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_12[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> STA_AXIS_V_data_V_tmp_mem;
								STA_AXIS_V_data_V_tmp_mem = (aesl_tmp_12[i_0].data).to_string(2).c_str();
								STA_AXIS_V_data_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = STA_AXIS_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_data_V, "%s\n", (STA_AXIS_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_data_V, tvin_STA_AXIS_V_data_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_data_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, stream_ingress_size_STA_AXIS_V_data_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_data_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, stream_ingress_size_STA_AXIS_V_data_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_data_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, stream_ingress_size_STA_AXIS_V_data_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_data_V_depth);
		sprintf(tvin_STA_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_data_V, tvin_STA_AXIS_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_data_V, tvin_STA_AXIS_V_data_V);

		// release memory allocation
		delete [] STA_AXIS_V_data_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, wrapc_stream_size_in_STA_AXIS_V_data_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_data_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, wrapc_stream_size_in_STA_AXIS_V_data_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_data_V, wrapc_stream_size_in_STA_AXIS_V_data_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_keep_V, tvin_STA_AXIS_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, tvin_STA_AXIS_V_keep_V);

		sc_bv<2>* STA_AXIS_V_keep_V_tvin_wrapc_buffer = new sc_bv<2>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_keep_V
		{
			// bitslice(1, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.keep.V(1, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].keep
							// regulate_c_name       : STA_AXIS_V_keep_V
							// input_type_conversion : (aesl_tmp_12[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_12[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<2> STA_AXIS_V_keep_V_tmp_mem;
								STA_AXIS_V_keep_V_tmp_mem = (aesl_tmp_12[i_0].keep).to_string(2).c_str();
								STA_AXIS_V_keep_V_tvin_wrapc_buffer[hls_map_index].range(1, 0) = STA_AXIS_V_keep_V_tmp_mem.range(1, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_keep_V, "%s\n", (STA_AXIS_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_keep_V, tvin_STA_AXIS_V_keep_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_keep_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, stream_ingress_size_STA_AXIS_V_keep_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_keep_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, stream_ingress_size_STA_AXIS_V_keep_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_keep_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, stream_ingress_size_STA_AXIS_V_keep_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_keep_V_depth);
		sprintf(tvin_STA_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_keep_V, tvin_STA_AXIS_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_keep_V, tvin_STA_AXIS_V_keep_V);

		// release memory allocation
		delete [] STA_AXIS_V_keep_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_keep_V, wrapc_stream_size_in_STA_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_keep_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_keep_V, wrapc_stream_size_in_STA_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_keep_V, wrapc_stream_size_in_STA_AXIS_V_keep_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_strb_V, tvin_STA_AXIS_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, tvin_STA_AXIS_V_strb_V);

		sc_bv<2>* STA_AXIS_V_strb_V_tvin_wrapc_buffer = new sc_bv<2>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_strb_V
		{
			// bitslice(1, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.strb.V(1, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].strb
							// regulate_c_name       : STA_AXIS_V_strb_V
							// input_type_conversion : (aesl_tmp_12[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_12[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<2> STA_AXIS_V_strb_V_tmp_mem;
								STA_AXIS_V_strb_V_tmp_mem = (aesl_tmp_12[i_0].strb).to_string(2).c_str();
								STA_AXIS_V_strb_V_tvin_wrapc_buffer[hls_map_index].range(1, 0) = STA_AXIS_V_strb_V_tmp_mem.range(1, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_strb_V, "%s\n", (STA_AXIS_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_strb_V, tvin_STA_AXIS_V_strb_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_strb_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, stream_ingress_size_STA_AXIS_V_strb_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_strb_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, stream_ingress_size_STA_AXIS_V_strb_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_strb_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, stream_ingress_size_STA_AXIS_V_strb_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_strb_V_depth);
		sprintf(tvin_STA_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_strb_V, tvin_STA_AXIS_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_strb_V, tvin_STA_AXIS_V_strb_V);

		// release memory allocation
		delete [] STA_AXIS_V_strb_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_strb_V, wrapc_stream_size_in_STA_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_strb_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_strb_V, wrapc_stream_size_in_STA_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_strb_V, wrapc_stream_size_in_STA_AXIS_V_strb_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_user_V, tvin_STA_AXIS_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, tvin_STA_AXIS_V_user_V);

		sc_bv<4>* STA_AXIS_V_user_V_tvin_wrapc_buffer = new sc_bv<4>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_user_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.user.V(3, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].user
							// regulate_c_name       : STA_AXIS_V_user_V
							// input_type_conversion : (aesl_tmp_12[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_12[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> STA_AXIS_V_user_V_tmp_mem;
								STA_AXIS_V_user_V_tmp_mem = (aesl_tmp_12[i_0].user).to_string(2).c_str();
								STA_AXIS_V_user_V_tvin_wrapc_buffer[hls_map_index].range(3, 0) = STA_AXIS_V_user_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_user_V, "%s\n", (STA_AXIS_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_user_V, tvin_STA_AXIS_V_user_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_user_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, stream_ingress_size_STA_AXIS_V_user_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_user_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, stream_ingress_size_STA_AXIS_V_user_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_user_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, stream_ingress_size_STA_AXIS_V_user_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_user_V_depth);
		sprintf(tvin_STA_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_user_V, tvin_STA_AXIS_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_user_V, tvin_STA_AXIS_V_user_V);

		// release memory allocation
		delete [] STA_AXIS_V_user_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_user_V, wrapc_stream_size_in_STA_AXIS_V_user_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_user_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_user_V, wrapc_stream_size_in_STA_AXIS_V_user_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_user_V, wrapc_stream_size_in_STA_AXIS_V_user_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_last_V, tvin_STA_AXIS_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, tvin_STA_AXIS_V_last_V);

		sc_bv<1>* STA_AXIS_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].last
							// regulate_c_name       : STA_AXIS_V_last_V
							// input_type_conversion : (aesl_tmp_12[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_12[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> STA_AXIS_V_last_V_tmp_mem;
								STA_AXIS_V_last_V_tmp_mem = (aesl_tmp_12[i_0].last).to_string(2).c_str();
								STA_AXIS_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = STA_AXIS_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_last_V, "%s\n", (STA_AXIS_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_last_V, tvin_STA_AXIS_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_last_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, stream_ingress_size_STA_AXIS_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, stream_ingress_size_STA_AXIS_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, stream_ingress_size_STA_AXIS_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_last_V_depth);
		sprintf(tvin_STA_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_last_V, tvin_STA_AXIS_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_last_V, tvin_STA_AXIS_V_last_V);

		// release memory allocation
		delete [] STA_AXIS_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_last_V, wrapc_stream_size_in_STA_AXIS_V_last_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_last_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_last_V, wrapc_stream_size_in_STA_AXIS_V_last_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_last_V, wrapc_stream_size_in_STA_AXIS_V_last_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_id_V, tvin_STA_AXIS_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, tvin_STA_AXIS_V_id_V);

		sc_bv<5>* STA_AXIS_V_id_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.id.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].id
							// regulate_c_name       : STA_AXIS_V_id_V
							// input_type_conversion : (aesl_tmp_12[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_12[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> STA_AXIS_V_id_V_tmp_mem;
								STA_AXIS_V_id_V_tmp_mem = (aesl_tmp_12[i_0].id).to_string(2).c_str();
								STA_AXIS_V_id_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = STA_AXIS_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_id_V, "%s\n", (STA_AXIS_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_id_V, tvin_STA_AXIS_V_id_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_id_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, stream_ingress_size_STA_AXIS_V_id_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_id_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, stream_ingress_size_STA_AXIS_V_id_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_id_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, stream_ingress_size_STA_AXIS_V_id_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_id_V_depth);
		sprintf(tvin_STA_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_id_V, tvin_STA_AXIS_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_id_V, tvin_STA_AXIS_V_id_V);

		// release memory allocation
		delete [] STA_AXIS_V_id_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_id_V, wrapc_stream_size_in_STA_AXIS_V_id_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_id_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_id_V, wrapc_stream_size_in_STA_AXIS_V_id_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_id_V, wrapc_stream_size_in_STA_AXIS_V_id_V);

		// [[transaction]]
		sprintf(tvin_STA_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_dest_V, tvin_STA_AXIS_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, tvin_STA_AXIS_V_dest_V);

		sc_bv<5>* STA_AXIS_V_dest_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_13 - aesl_tmp_14];

		// RTL Name: STA_AXIS_V_dest_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: STA_AXIS.V.dest.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_13 - aesl_tmp_14 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_13 - aesl_tmp_14 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_12[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_12[0].dest
							// regulate_c_name       : STA_AXIS_V_dest_V
							// input_type_conversion : (aesl_tmp_12[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_12[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> STA_AXIS_V_dest_V_tmp_mem;
								STA_AXIS_V_dest_V_tmp_mem = (aesl_tmp_12[i_0].dest).to_string(2).c_str();
								STA_AXIS_V_dest_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = STA_AXIS_V_dest_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			sprintf(tvin_STA_AXIS_V_dest_V, "%s\n", (STA_AXIS_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_dest_V, tvin_STA_AXIS_V_dest_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_13 > aesl_tmp_14)
     {
		sc_int<32> stream_ingress_size_STA_AXIS_V_dest_V = aesl_tmp_13;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, stream_ingress_size_STA_AXIS_V_dest_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, "\n");

		for (int i = 0; i < aesl_tmp_13 - aesl_tmp_14; i++)
		{
			stream_ingress_size_STA_AXIS_V_dest_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, stream_ingress_size_STA_AXIS_V_dest_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_STA_AXIS_V_dest_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, stream_ingress_size_STA_AXIS_V_dest_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_13 - aesl_tmp_14, &tcl_file.STA_AXIS_V_dest_V_depth);
		sprintf(tvin_STA_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_STA_AXIS_V_dest_V, tvin_STA_AXIS_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_STA_AXIS_V_dest_V, tvin_STA_AXIS_V_dest_V);

		// release memory allocation
		delete [] STA_AXIS_V_dest_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_STA_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_dest_V, wrapc_stream_size_in_STA_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_dest_V, "%d\n", aesl_tmp_13 - aesl_tmp_14);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_dest_V, wrapc_stream_size_in_STA_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_in_STA_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_STA_AXIS_V_dest_V, wrapc_stream_size_in_STA_AXIS_V_dest_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_data_V, tvout_MBA_AXIS_V_data_V);

		sc_bv<16>* MBA_AXIS_V_data_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_data_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].data
							// regulate_c_name       : MBA_AXIS_V_data_V
							// input_type_conversion : (aesl_tmp_15[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_15[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> MBA_AXIS_V_data_V_tmp_mem;
								MBA_AXIS_V_data_V_tmp_mem = (aesl_tmp_15[i_0].data).to_string(2).c_str();
								MBA_AXIS_V_data_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = MBA_AXIS_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_data_V, "%s\n", (MBA_AXIS_V_data_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_data_V, tvout_MBA_AXIS_V_data_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_data_V_depth);
		sprintf(tvout_MBA_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_data_V, tvout_MBA_AXIS_V_data_V);

		// release memory allocation
		delete [] MBA_AXIS_V_data_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, wrapc_stream_size_out_MBA_AXIS_V_data_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_data_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, wrapc_stream_size_out_MBA_AXIS_V_data_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_data_V, wrapc_stream_size_out_MBA_AXIS_V_data_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_keep_V, tvout_MBA_AXIS_V_keep_V);

		sc_bv<2>* MBA_AXIS_V_keep_V_tvout_wrapc_buffer = new sc_bv<2>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_keep_V
		{
			// bitslice(1, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.keep.V(1, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].keep
							// regulate_c_name       : MBA_AXIS_V_keep_V
							// input_type_conversion : (aesl_tmp_15[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_15[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<2> MBA_AXIS_V_keep_V_tmp_mem;
								MBA_AXIS_V_keep_V_tmp_mem = (aesl_tmp_15[i_0].keep).to_string(2).c_str();
								MBA_AXIS_V_keep_V_tvout_wrapc_buffer[hls_map_index].range(1, 0) = MBA_AXIS_V_keep_V_tmp_mem.range(1, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_keep_V, "%s\n", (MBA_AXIS_V_keep_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_keep_V, tvout_MBA_AXIS_V_keep_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_keep_V_depth);
		sprintf(tvout_MBA_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_keep_V, tvout_MBA_AXIS_V_keep_V);

		// release memory allocation
		delete [] MBA_AXIS_V_keep_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_keep_V, wrapc_stream_size_out_MBA_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_keep_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_keep_V, wrapc_stream_size_out_MBA_AXIS_V_keep_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_keep_V, wrapc_stream_size_out_MBA_AXIS_V_keep_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_strb_V, tvout_MBA_AXIS_V_strb_V);

		sc_bv<2>* MBA_AXIS_V_strb_V_tvout_wrapc_buffer = new sc_bv<2>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_strb_V
		{
			// bitslice(1, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.strb.V(1, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].strb
							// regulate_c_name       : MBA_AXIS_V_strb_V
							// input_type_conversion : (aesl_tmp_15[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_15[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<2> MBA_AXIS_V_strb_V_tmp_mem;
								MBA_AXIS_V_strb_V_tmp_mem = (aesl_tmp_15[i_0].strb).to_string(2).c_str();
								MBA_AXIS_V_strb_V_tvout_wrapc_buffer[hls_map_index].range(1, 0) = MBA_AXIS_V_strb_V_tmp_mem.range(1, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_strb_V, "%s\n", (MBA_AXIS_V_strb_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_strb_V, tvout_MBA_AXIS_V_strb_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_strb_V_depth);
		sprintf(tvout_MBA_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_strb_V, tvout_MBA_AXIS_V_strb_V);

		// release memory allocation
		delete [] MBA_AXIS_V_strb_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_strb_V, wrapc_stream_size_out_MBA_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_strb_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_strb_V, wrapc_stream_size_out_MBA_AXIS_V_strb_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_strb_V, wrapc_stream_size_out_MBA_AXIS_V_strb_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_user_V, tvout_MBA_AXIS_V_user_V);

		sc_bv<4>* MBA_AXIS_V_user_V_tvout_wrapc_buffer = new sc_bv<4>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_user_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.user.V(3, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].user
							// regulate_c_name       : MBA_AXIS_V_user_V
							// input_type_conversion : (aesl_tmp_15[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_15[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> MBA_AXIS_V_user_V_tmp_mem;
								MBA_AXIS_V_user_V_tmp_mem = (aesl_tmp_15[i_0].user).to_string(2).c_str();
								MBA_AXIS_V_user_V_tvout_wrapc_buffer[hls_map_index].range(3, 0) = MBA_AXIS_V_user_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_user_V, "%s\n", (MBA_AXIS_V_user_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_user_V, tvout_MBA_AXIS_V_user_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_user_V_depth);
		sprintf(tvout_MBA_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_user_V, tvout_MBA_AXIS_V_user_V);

		// release memory allocation
		delete [] MBA_AXIS_V_user_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_user_V, wrapc_stream_size_out_MBA_AXIS_V_user_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_user_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_user_V, wrapc_stream_size_out_MBA_AXIS_V_user_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_user_V, wrapc_stream_size_out_MBA_AXIS_V_user_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_last_V, tvout_MBA_AXIS_V_last_V);

		sc_bv<1>* MBA_AXIS_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].last
							// regulate_c_name       : MBA_AXIS_V_last_V
							// input_type_conversion : (aesl_tmp_15[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_15[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> MBA_AXIS_V_last_V_tmp_mem;
								MBA_AXIS_V_last_V_tmp_mem = (aesl_tmp_15[i_0].last).to_string(2).c_str();
								MBA_AXIS_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = MBA_AXIS_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_last_V, "%s\n", (MBA_AXIS_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_last_V, tvout_MBA_AXIS_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_last_V_depth);
		sprintf(tvout_MBA_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_last_V, tvout_MBA_AXIS_V_last_V);

		// release memory allocation
		delete [] MBA_AXIS_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_last_V, wrapc_stream_size_out_MBA_AXIS_V_last_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_last_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_last_V, wrapc_stream_size_out_MBA_AXIS_V_last_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_last_V, wrapc_stream_size_out_MBA_AXIS_V_last_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_id_V, tvout_MBA_AXIS_V_id_V);

		sc_bv<5>* MBA_AXIS_V_id_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.id.V(4, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].id
							// regulate_c_name       : MBA_AXIS_V_id_V
							// input_type_conversion : (aesl_tmp_15[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_15[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> MBA_AXIS_V_id_V_tmp_mem;
								MBA_AXIS_V_id_V_tmp_mem = (aesl_tmp_15[i_0].id).to_string(2).c_str();
								MBA_AXIS_V_id_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = MBA_AXIS_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_id_V, "%s\n", (MBA_AXIS_V_id_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_id_V, tvout_MBA_AXIS_V_id_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_id_V_depth);
		sprintf(tvout_MBA_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_id_V, tvout_MBA_AXIS_V_id_V);

		// release memory allocation
		delete [] MBA_AXIS_V_id_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_id_V, wrapc_stream_size_out_MBA_AXIS_V_id_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_id_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_id_V, wrapc_stream_size_out_MBA_AXIS_V_id_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_id_V, wrapc_stream_size_out_MBA_AXIS_V_id_V);

		// [[transaction]]
		sprintf(tvout_MBA_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_dest_V, tvout_MBA_AXIS_V_dest_V);

		sc_bv<5>* MBA_AXIS_V_dest_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_16 - aesl_tmp_17];

		// RTL Name: MBA_AXIS_V_dest_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: MBA_AXIS.V.dest.V(4, 0)
				{
					// carray: (aesl_tmp_17) => (aesl_tmp_16 - 1) @ (1)
					for (int i_0 = aesl_tmp_17; i_0 <= aesl_tmp_16 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_15[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_15[0].dest
							// regulate_c_name       : MBA_AXIS_V_dest_V
							// input_type_conversion : (aesl_tmp_15[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_15[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> MBA_AXIS_V_dest_V_tmp_mem;
								MBA_AXIS_V_dest_V_tmp_mem = (aesl_tmp_15[i_0].dest).to_string(2).c_str();
								MBA_AXIS_V_dest_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = MBA_AXIS_V_dest_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_16 - aesl_tmp_17; i++)
		{
			sprintf(tvout_MBA_AXIS_V_dest_V, "%s\n", (MBA_AXIS_V_dest_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_dest_V, tvout_MBA_AXIS_V_dest_V);
		}

		tcl_file.set_num(aesl_tmp_16 - aesl_tmp_17, &tcl_file.MBA_AXIS_V_dest_V_depth);
		sprintf(tvout_MBA_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MBA_AXIS_V_dest_V, tvout_MBA_AXIS_V_dest_V);

		// release memory allocation
		delete [] MBA_AXIS_V_dest_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_dest_V, wrapc_stream_size_out_MBA_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_dest_V, "%d\n", aesl_tmp_16 - aesl_tmp_17);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_dest_V, wrapc_stream_size_out_MBA_AXIS_V_dest_V);
		sprintf(wrapc_stream_size_out_MBA_AXIS_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_MBA_AXIS_V_dest_V, wrapc_stream_size_out_MBA_AXIS_V_dest_V);

		// push back output stream: "MRI_AXIS"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			MRI_AXIS.write(aesl_tmp_3[i]);
		}

		// push back output stream: "MBW_AXIS"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			MBW_AXIS.write(aesl_tmp_9[i]);
		}

		// push back output stream: "MBA_AXIS"
		for (int i = 0; i < aesl_tmp_16; i++)
		{
			MBA_AXIS.write(aesl_tmp_15[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "SLI_AXIS_V_data_V"
		delete [] tvin_SLI_AXIS_V_data_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_data_V;
		// release memory allocation: "SLI_AXIS_V_keep_V"
		delete [] tvin_SLI_AXIS_V_keep_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_keep_V;
		// release memory allocation: "SLI_AXIS_V_strb_V"
		delete [] tvin_SLI_AXIS_V_strb_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_strb_V;
		// release memory allocation: "SLI_AXIS_V_user_V"
		delete [] tvin_SLI_AXIS_V_user_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_user_V;
		// release memory allocation: "SLI_AXIS_V_last_V"
		delete [] tvin_SLI_AXIS_V_last_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_last_V;
		// release memory allocation: "SLI_AXIS_V_id_V"
		delete [] tvin_SLI_AXIS_V_id_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_id_V;
		// release memory allocation: "SLI_AXIS_V_dest_V"
		delete [] tvin_SLI_AXIS_V_dest_V;
		delete [] wrapc_stream_size_in_SLI_AXIS_V_dest_V;
		// release memory allocation: "MRI_AXIS_V_data_V"
		delete [] tvout_MRI_AXIS_V_data_V;
		delete [] tvin_MRI_AXIS_V_data_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_data_V;
		// release memory allocation: "MRI_AXIS_V_keep_V"
		delete [] tvout_MRI_AXIS_V_keep_V;
		delete [] tvin_MRI_AXIS_V_keep_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_keep_V;
		// release memory allocation: "MRI_AXIS_V_strb_V"
		delete [] tvout_MRI_AXIS_V_strb_V;
		delete [] tvin_MRI_AXIS_V_strb_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_strb_V;
		// release memory allocation: "MRI_AXIS_V_user_V"
		delete [] tvout_MRI_AXIS_V_user_V;
		delete [] tvin_MRI_AXIS_V_user_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_user_V;
		// release memory allocation: "MRI_AXIS_V_last_V"
		delete [] tvout_MRI_AXIS_V_last_V;
		delete [] tvin_MRI_AXIS_V_last_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_last_V;
		// release memory allocation: "MRI_AXIS_V_id_V"
		delete [] tvout_MRI_AXIS_V_id_V;
		delete [] tvin_MRI_AXIS_V_id_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_id_V;
		// release memory allocation: "MRI_AXIS_V_dest_V"
		delete [] tvout_MRI_AXIS_V_dest_V;
		delete [] tvin_MRI_AXIS_V_dest_V;
		delete [] wrapc_stream_size_out_MRI_AXIS_V_dest_V;
		// release memory allocation: "STW_AXIS_V_data_V"
		delete [] tvin_STW_AXIS_V_data_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_data_V;
		// release memory allocation: "STW_AXIS_V_keep_V"
		delete [] tvin_STW_AXIS_V_keep_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_keep_V;
		// release memory allocation: "STW_AXIS_V_strb_V"
		delete [] tvin_STW_AXIS_V_strb_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_strb_V;
		// release memory allocation: "STW_AXIS_V_user_V"
		delete [] tvin_STW_AXIS_V_user_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_user_V;
		// release memory allocation: "STW_AXIS_V_last_V"
		delete [] tvin_STW_AXIS_V_last_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_last_V;
		// release memory allocation: "STW_AXIS_V_id_V"
		delete [] tvin_STW_AXIS_V_id_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_id_V;
		// release memory allocation: "STW_AXIS_V_dest_V"
		delete [] tvin_STW_AXIS_V_dest_V;
		delete [] wrapc_stream_size_in_STW_AXIS_V_dest_V;
		// release memory allocation: "MBW_AXIS_V_data_V"
		delete [] tvout_MBW_AXIS_V_data_V;
		delete [] tvin_MBW_AXIS_V_data_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_data_V;
		// release memory allocation: "MBW_AXIS_V_keep_V"
		delete [] tvout_MBW_AXIS_V_keep_V;
		delete [] tvin_MBW_AXIS_V_keep_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_keep_V;
		// release memory allocation: "MBW_AXIS_V_strb_V"
		delete [] tvout_MBW_AXIS_V_strb_V;
		delete [] tvin_MBW_AXIS_V_strb_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_strb_V;
		// release memory allocation: "MBW_AXIS_V_user_V"
		delete [] tvout_MBW_AXIS_V_user_V;
		delete [] tvin_MBW_AXIS_V_user_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_user_V;
		// release memory allocation: "MBW_AXIS_V_last_V"
		delete [] tvout_MBW_AXIS_V_last_V;
		delete [] tvin_MBW_AXIS_V_last_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_last_V;
		// release memory allocation: "MBW_AXIS_V_id_V"
		delete [] tvout_MBW_AXIS_V_id_V;
		delete [] tvin_MBW_AXIS_V_id_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_id_V;
		// release memory allocation: "MBW_AXIS_V_dest_V"
		delete [] tvout_MBW_AXIS_V_dest_V;
		delete [] tvin_MBW_AXIS_V_dest_V;
		delete [] wrapc_stream_size_out_MBW_AXIS_V_dest_V;
		// release memory allocation: "STA_AXIS_V_data_V"
		delete [] tvin_STA_AXIS_V_data_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_data_V;
		// release memory allocation: "STA_AXIS_V_keep_V"
		delete [] tvin_STA_AXIS_V_keep_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_keep_V;
		// release memory allocation: "STA_AXIS_V_strb_V"
		delete [] tvin_STA_AXIS_V_strb_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_strb_V;
		// release memory allocation: "STA_AXIS_V_user_V"
		delete [] tvin_STA_AXIS_V_user_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_user_V;
		// release memory allocation: "STA_AXIS_V_last_V"
		delete [] tvin_STA_AXIS_V_last_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_last_V;
		// release memory allocation: "STA_AXIS_V_id_V"
		delete [] tvin_STA_AXIS_V_id_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_id_V;
		// release memory allocation: "STA_AXIS_V_dest_V"
		delete [] tvin_STA_AXIS_V_dest_V;
		delete [] wrapc_stream_size_in_STA_AXIS_V_dest_V;
		// release memory allocation: "MBA_AXIS_V_data_V"
		delete [] tvout_MBA_AXIS_V_data_V;
		delete [] tvin_MBA_AXIS_V_data_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_data_V;
		// release memory allocation: "MBA_AXIS_V_keep_V"
		delete [] tvout_MBA_AXIS_V_keep_V;
		delete [] tvin_MBA_AXIS_V_keep_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_keep_V;
		// release memory allocation: "MBA_AXIS_V_strb_V"
		delete [] tvout_MBA_AXIS_V_strb_V;
		delete [] tvin_MBA_AXIS_V_strb_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_strb_V;
		// release memory allocation: "MBA_AXIS_V_user_V"
		delete [] tvout_MBA_AXIS_V_user_V;
		delete [] tvin_MBA_AXIS_V_user_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_user_V;
		// release memory allocation: "MBA_AXIS_V_last_V"
		delete [] tvout_MBA_AXIS_V_last_V;
		delete [] tvin_MBA_AXIS_V_last_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_last_V;
		// release memory allocation: "MBA_AXIS_V_id_V"
		delete [] tvout_MBA_AXIS_V_id_V;
		delete [] tvin_MBA_AXIS_V_id_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_id_V;
		// release memory allocation: "MBA_AXIS_V_dest_V"
		delete [] tvout_MBA_AXIS_V_dest_V;
		delete [] tvin_MBA_AXIS_V_dest_V;
		delete [] wrapc_stream_size_out_MBA_AXIS_V_dest_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

