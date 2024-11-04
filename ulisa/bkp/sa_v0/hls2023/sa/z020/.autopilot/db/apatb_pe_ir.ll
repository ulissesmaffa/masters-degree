; ModuleID = '/home/fabiob/sa/hls2023/sa/z020/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" = type { %"struct.hls::axis<ap_uint<8>, 4, 5, 5, '8', false>" }
%"struct.hls::axis<ap_uint<8>, 4, 5, 5, '8', false>" = type { %"struct.ap_uint<8>", %"struct.ap_uint<1>", %"struct.ap_uint<1>", %"struct.ap_uint<4>", %"struct.ap_uint<1>", %"struct.ap_uint<5>", %"struct.ap_uint<5>" }
%"struct.ap_uint<8>" = type { %"struct.ap_int_base<8, false>" }
%"struct.ap_int_base<8, false>" = type { %"class.std::ios_base::Init" }
%"class.std::ios_base::Init" = type { i8 }
%"struct.ap_uint<4>" = type { %"struct.ap_int_base<4, false>" }
%"struct.ap_int_base<4, false>" = type { %"struct.ssdm_int<4, false>" }
%"struct.ssdm_int<4, false>" = type { i4 }
%"struct.ap_uint<1>" = type { %"struct.ap_int_base<1, false>" }
%"struct.ap_int_base<1, false>" = type { %"struct.ssdm_int<1, false>" }
%"struct.ssdm_int<1, false>" = type { i1 }
%"struct.ap_uint<5>" = type { %"struct.ap_int_base<5, false>" }
%"struct.ap_int_base<5, false>" = type { %"struct.ssdm_int<5, false>" }
%"struct.ssdm_int<5, false>" = type { i5 }
%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" = type { %"struct.hls::axis<ap_uint<16>, 4, 5, 5, '8', false>" }
%"struct.hls::axis<ap_uint<16>, 4, 5, 5, '8', false>" = type { %"struct.ap_uint<16>", %"struct.ap_uint<2>", %"struct.ap_uint<2>", %"struct.ap_uint<4>", %"struct.ap_uint<1>", %"struct.ap_uint<5>", %"struct.ap_uint<5>" }
%"struct.ap_uint<16>" = type { %"struct.ap_int_base<16, false>" }
%"struct.ap_int_base<16, false>" = type { %"struct.ssdm_int<16, false>" }
%"struct.ssdm_int<16, false>" = type { i16 }
%"struct.ap_uint<2>" = type { %"struct.ap_int_base<2, false>" }
%"struct.ap_int_base<2, false>" = type { %"struct.ssdm_int<2, false>" }
%"struct.ssdm_int<2, false>" = type { i2 }

; Function Attrs: inaccessiblemem_or_argmemonly noinline willreturn
define void @apatb_pe_ir(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias nonnull dereferenceable(7) %li_stream, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias nonnull dereferenceable(7) %ri_stream, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias nonnull dereferenceable(7) %tw_stream, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias nonnull dereferenceable(7) %bw_stream, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias nonnull dereferenceable(8) %ta_stream, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias nonnull dereferenceable(8) %ba_stream) local_unnamed_addr #0 {
entry:
  %li_stream_copy.data = alloca i8, align 512
  %li_stream_copy.keep = alloca i1, align 512
  %li_stream_copy.strb = alloca i1, align 512
  %li_stream_copy.user = alloca i4, align 512
  %li_stream_copy.last = alloca i1, align 512
  %li_stream_copy.id = alloca i5, align 512
  %li_stream_copy.dest = alloca i5, align 512
  %ri_stream_copy.data = alloca i8, align 512
  %ri_stream_copy.keep = alloca i1, align 512
  %ri_stream_copy.strb = alloca i1, align 512
  %ri_stream_copy.user = alloca i4, align 512
  %ri_stream_copy.last = alloca i1, align 512
  %ri_stream_copy.id = alloca i5, align 512
  %ri_stream_copy.dest = alloca i5, align 512
  %tw_stream_copy.data = alloca i8, align 512
  %tw_stream_copy.keep = alloca i1, align 512
  %tw_stream_copy.strb = alloca i1, align 512
  %tw_stream_copy.user = alloca i4, align 512
  %tw_stream_copy.last = alloca i1, align 512
  %tw_stream_copy.id = alloca i5, align 512
  %tw_stream_copy.dest = alloca i5, align 512
  %bw_stream_copy.data = alloca i8, align 512
  %bw_stream_copy.keep = alloca i1, align 512
  %bw_stream_copy.strb = alloca i1, align 512
  %bw_stream_copy.user = alloca i4, align 512
  %bw_stream_copy.last = alloca i1, align 512
  %bw_stream_copy.id = alloca i5, align 512
  %bw_stream_copy.dest = alloca i5, align 512
  %ta_stream_copy.data = alloca i16, align 512
  %ta_stream_copy.keep = alloca i2, align 512
  %ta_stream_copy.strb = alloca i2, align 512
  %ta_stream_copy.user = alloca i4, align 512
  %ta_stream_copy.last = alloca i1, align 512
  %ta_stream_copy.id = alloca i5, align 512
  %ta_stream_copy.dest = alloca i5, align 512
  %ba_stream_copy.data = alloca i16, align 512
  %ba_stream_copy.keep = alloca i2, align 512
  %ba_stream_copy.strb = alloca i2, align 512
  %ba_stream_copy.user = alloca i4, align 512
  %ba_stream_copy.last = alloca i1, align 512
  %ba_stream_copy.id = alloca i5, align 512
  %ba_stream_copy.dest = alloca i5, align 512
  call fastcc void @copy_in(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* nonnull %li_stream, i8* nonnull align 512 %li_stream_copy.data, i1* nonnull align 512 %li_stream_copy.keep, i1* nonnull align 512 %li_stream_copy.strb, i4* nonnull align 512 %li_stream_copy.user, i1* nonnull align 512 %li_stream_copy.last, i5* nonnull align 512 %li_stream_copy.id, i5* nonnull align 512 %li_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* nonnull %ri_stream, i8* nonnull align 512 %ri_stream_copy.data, i1* nonnull align 512 %ri_stream_copy.keep, i1* nonnull align 512 %ri_stream_copy.strb, i4* nonnull align 512 %ri_stream_copy.user, i1* nonnull align 512 %ri_stream_copy.last, i5* nonnull align 512 %ri_stream_copy.id, i5* nonnull align 512 %ri_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* nonnull %tw_stream, i8* nonnull align 512 %tw_stream_copy.data, i1* nonnull align 512 %tw_stream_copy.keep, i1* nonnull align 512 %tw_stream_copy.strb, i4* nonnull align 512 %tw_stream_copy.user, i1* nonnull align 512 %tw_stream_copy.last, i5* nonnull align 512 %tw_stream_copy.id, i5* nonnull align 512 %tw_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* nonnull %bw_stream, i8* nonnull align 512 %bw_stream_copy.data, i1* nonnull align 512 %bw_stream_copy.keep, i1* nonnull align 512 %bw_stream_copy.strb, i4* nonnull align 512 %bw_stream_copy.user, i1* nonnull align 512 %bw_stream_copy.last, i5* nonnull align 512 %bw_stream_copy.id, i5* nonnull align 512 %bw_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* nonnull %ta_stream, i16* nonnull align 512 %ta_stream_copy.data, i2* nonnull align 512 %ta_stream_copy.keep, i2* nonnull align 512 %ta_stream_copy.strb, i4* nonnull align 512 %ta_stream_copy.user, i1* nonnull align 512 %ta_stream_copy.last, i5* nonnull align 512 %ta_stream_copy.id, i5* nonnull align 512 %ta_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* nonnull %ba_stream, i16* nonnull align 512 %ba_stream_copy.data, i2* nonnull align 512 %ba_stream_copy.keep, i2* nonnull align 512 %ba_stream_copy.strb, i4* nonnull align 512 %ba_stream_copy.user, i1* nonnull align 512 %ba_stream_copy.last, i5* nonnull align 512 %ba_stream_copy.id, i5* nonnull align 512 %ba_stream_copy.dest)
  call void @apatb_pe_hw(i8* %li_stream_copy.data, i1* %li_stream_copy.keep, i1* %li_stream_copy.strb, i4* %li_stream_copy.user, i1* %li_stream_copy.last, i5* %li_stream_copy.id, i5* %li_stream_copy.dest, i8* %ri_stream_copy.data, i1* %ri_stream_copy.keep, i1* %ri_stream_copy.strb, i4* %ri_stream_copy.user, i1* %ri_stream_copy.last, i5* %ri_stream_copy.id, i5* %ri_stream_copy.dest, i8* %tw_stream_copy.data, i1* %tw_stream_copy.keep, i1* %tw_stream_copy.strb, i4* %tw_stream_copy.user, i1* %tw_stream_copy.last, i5* %tw_stream_copy.id, i5* %tw_stream_copy.dest, i8* %bw_stream_copy.data, i1* %bw_stream_copy.keep, i1* %bw_stream_copy.strb, i4* %bw_stream_copy.user, i1* %bw_stream_copy.last, i5* %bw_stream_copy.id, i5* %bw_stream_copy.dest, i16* %ta_stream_copy.data, i2* %ta_stream_copy.keep, i2* %ta_stream_copy.strb, i4* %ta_stream_copy.user, i1* %ta_stream_copy.last, i5* %ta_stream_copy.id, i5* %ta_stream_copy.dest, i16* %ba_stream_copy.data, i2* %ba_stream_copy.keep, i2* %ba_stream_copy.strb, i4* %ba_stream_copy.user, i1* %ba_stream_copy.last, i5* %ba_stream_copy.id, i5* %ba_stream_copy.dest)
  call void @copy_back(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %li_stream, i8* %li_stream_copy.data, i1* %li_stream_copy.keep, i1* %li_stream_copy.strb, i4* %li_stream_copy.user, i1* %li_stream_copy.last, i5* %li_stream_copy.id, i5* %li_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %ri_stream, i8* %ri_stream_copy.data, i1* %ri_stream_copy.keep, i1* %ri_stream_copy.strb, i4* %ri_stream_copy.user, i1* %ri_stream_copy.last, i5* %ri_stream_copy.id, i5* %ri_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %tw_stream, i8* %tw_stream_copy.data, i1* %tw_stream_copy.keep, i1* %tw_stream_copy.strb, i4* %tw_stream_copy.user, i1* %tw_stream_copy.last, i5* %tw_stream_copy.id, i5* %tw_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %bw_stream, i8* %bw_stream_copy.data, i1* %bw_stream_copy.keep, i1* %bw_stream_copy.strb, i4* %bw_stream_copy.user, i1* %bw_stream_copy.last, i5* %bw_stream_copy.id, i5* %bw_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %ta_stream, i16* %ta_stream_copy.data, i2* %ta_stream_copy.keep, i2* %ta_stream_copy.strb, i4* %ta_stream_copy.user, i1* %ta_stream_copy.last, i5* %ta_stream_copy.id, i5* %ta_stream_copy.dest, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %ba_stream, i16* %ba_stream_copy.data, i2* %ba_stream_copy.keep, i2* %ba_stream_copy.strb, i4* %ba_stream_copy.user, i1* %ba_stream_copy.last, i5* %ba_stream_copy.id, i5* %ba_stream_copy.dest)
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @copy_in(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="1.0" %_V_data_V, i1* noalias align 512 "unpacked"="1.1" %_V_keep_V, i1* noalias align 512 "unpacked"="1.2" %_V_strb_V, i4* noalias align 512 "unpacked"="1.3" %_V_user_V, i1* noalias align 512 "unpacked"="1.4" %_V_last_V, i5* noalias align 512 "unpacked"="1.5" %_V_id_V, i5* noalias align 512 "unpacked"="1.6" %_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="3.0" %_V_data_V1, i1* noalias align 512 "unpacked"="3.1" %_V_keep_V2, i1* noalias align 512 "unpacked"="3.2" %_V_strb_V3, i4* noalias align 512 "unpacked"="3.3" %_V_user_V4, i1* noalias align 512 "unpacked"="3.4" %_V_last_V5, i5* noalias align 512 "unpacked"="3.5" %_V_id_V6, i5* noalias align 512 "unpacked"="3.6" %_V_dest_V7, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="11.0" %_V_data_V18, i1* noalias align 512 "unpacked"="11.1" %_V_keep_V29, i1* noalias align 512 "unpacked"="11.2" %_V_strb_V310, i4* noalias align 512 "unpacked"="11.3" %_V_user_V411, i1* noalias align 512 "unpacked"="11.4" %_V_last_V512, i5* noalias align 512 "unpacked"="11.5" %_V_id_V613, i5* noalias align 512 "unpacked"="11.6" %_V_dest_V714, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="13.0" %_V_data_V1815, i1* noalias align 512 "unpacked"="13.1" %_V_keep_V2916, i1* noalias align 512 "unpacked"="13.2" %_V_strb_V31017, i4* noalias align 512 "unpacked"="13.3" %_V_user_V41118, i1* noalias align 512 "unpacked"="13.4" %_V_last_V51219, i5* noalias align 512 "unpacked"="13.5" %_V_id_V61320, i5* noalias align 512 "unpacked"="13.6" %_V_dest_V71421, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias, i16* noalias align 512 "unpacked"="21.0" %_V_data_V2, i2* noalias align 512 "unpacked"="21.1" %_V_keep_V3, i2* noalias align 512 "unpacked"="21.2" %_V_strb_V4, i4* noalias align 512 "unpacked"="21.3" %_V_user_V5, i1* noalias align 512 "unpacked"="21.4" %_V_last_V6, i5* noalias align 512 "unpacked"="21.5" %_V_id_V7, i5* noalias align 512 "unpacked"="21.6" %_V_dest_V8, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias, i16* noalias align 512 "unpacked"="11.0" %_V_data_V181522, i2* noalias align 512 "unpacked"="11.1" %_V_keep_V291623, i2* noalias align 512 "unpacked"="11.2" %_V_strb_V3101724, i4* noalias align 512 "unpacked"="11.3" %_V_user_V4111825, i1* noalias align 512 "unpacked"="11.4" %_V_last_V5121926, i5* noalias align 512 "unpacked"="11.5" %_V_id_V6132027, i5* noalias align 512 "unpacked"="11.6" %_V_dest_V7142128) unnamed_addr #1 {
entry:
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.19"(i8* align 512 %_V_data_V, i1* align 512 %_V_keep_V, i1* align 512 %_V_strb_V, i4* align 512 %_V_user_V, i1* align 512 %_V_last_V, i5* align 512 %_V_id_V, i5* align 512 %_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %0)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.19"(i8* align 512 %_V_data_V1, i1* align 512 %_V_keep_V2, i1* align 512 %_V_strb_V3, i4* align 512 %_V_user_V4, i1* align 512 %_V_last_V5, i5* align 512 %_V_id_V6, i5* align 512 %_V_dest_V7, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %1)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.19"(i8* align 512 %_V_data_V18, i1* align 512 %_V_keep_V29, i1* align 512 %_V_strb_V310, i4* align 512 %_V_user_V411, i1* align 512 %_V_last_V512, i5* align 512 %_V_id_V613, i5* align 512 %_V_dest_V714, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %2)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.19"(i8* align 512 %_V_data_V1815, i1* align 512 %_V_keep_V2916, i1* align 512 %_V_strb_V31017, i4* align 512 %_V_user_V41118, i1* align 512 %_V_last_V51219, i5* align 512 %_V_id_V61320, i5* align 512 %_V_dest_V71421, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %3)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.12"(i16* align 512 %_V_data_V2, i2* align 512 %_V_keep_V3, i2* align 512 %_V_strb_V4, i4* align 512 %_V_user_V5, i1* align 512 %_V_last_V6, i5* align 512 %_V_id_V7, i5* align 512 %_V_dest_V8, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %4)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.12"(i16* align 512 %_V_data_V181522, i2* align 512 %_V_keep_V291623, i2* align 512 %_V_strb_V3101724, i4* align 512 %_V_user_V4111825, i1* align 512 %_V_last_V5121926, i5* align 512 %_V_id_V6132027, i5* align 512 %_V_dest_V7142128, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %5)
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @copy_out(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="1.0" %_V_data_V, i1* noalias align 512 "unpacked"="1.1" %_V_keep_V, i1* noalias align 512 "unpacked"="1.2" %_V_strb_V, i4* noalias align 512 "unpacked"="1.3" %_V_user_V, i1* noalias align 512 "unpacked"="1.4" %_V_last_V, i5* noalias align 512 "unpacked"="1.5" %_V_id_V, i5* noalias align 512 "unpacked"="1.6" %_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="3.0" %_V_data_V1, i1* noalias align 512 "unpacked"="3.1" %_V_keep_V2, i1* noalias align 512 "unpacked"="3.2" %_V_strb_V3, i4* noalias align 512 "unpacked"="3.3" %_V_user_V4, i1* noalias align 512 "unpacked"="3.4" %_V_last_V5, i5* noalias align 512 "unpacked"="3.5" %_V_id_V6, i5* noalias align 512 "unpacked"="3.6" %_V_dest_V7, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="11.0" %_V_data_V18, i1* noalias align 512 "unpacked"="11.1" %_V_keep_V29, i1* noalias align 512 "unpacked"="11.2" %_V_strb_V310, i4* noalias align 512 "unpacked"="11.3" %_V_user_V411, i1* noalias align 512 "unpacked"="11.4" %_V_last_V512, i5* noalias align 512 "unpacked"="11.5" %_V_id_V613, i5* noalias align 512 "unpacked"="11.6" %_V_dest_V714, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="13.0" %_V_data_V1815, i1* noalias align 512 "unpacked"="13.1" %_V_keep_V2916, i1* noalias align 512 "unpacked"="13.2" %_V_strb_V31017, i4* noalias align 512 "unpacked"="13.3" %_V_user_V41118, i1* noalias align 512 "unpacked"="13.4" %_V_last_V51219, i5* noalias align 512 "unpacked"="13.5" %_V_id_V61320, i5* noalias align 512 "unpacked"="13.6" %_V_dest_V71421, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias, i16* noalias align 512 "unpacked"="21.0" %_V_data_V2, i2* noalias align 512 "unpacked"="21.1" %_V_keep_V3, i2* noalias align 512 "unpacked"="21.2" %_V_strb_V4, i4* noalias align 512 "unpacked"="21.3" %_V_user_V5, i1* noalias align 512 "unpacked"="21.4" %_V_last_V6, i5* noalias align 512 "unpacked"="21.5" %_V_id_V7, i5* noalias align 512 "unpacked"="21.6" %_V_dest_V8, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias, i16* noalias align 512 "unpacked"="11.0" %_V_data_V181522, i2* noalias align 512 "unpacked"="11.1" %_V_keep_V291623, i2* noalias align 512 "unpacked"="11.2" %_V_strb_V3101724, i4* noalias align 512 "unpacked"="11.3" %_V_user_V4111825, i1* noalias align 512 "unpacked"="11.4" %_V_last_V5121926, i5* noalias align 512 "unpacked"="11.5" %_V_id_V6132027, i5* noalias align 512 "unpacked"="11.6" %_V_dest_V7142128) unnamed_addr #2 {
entry:
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %0, i8* align 512 %_V_data_V, i1* align 512 %_V_keep_V, i1* align 512 %_V_strb_V, i4* align 512 %_V_user_V, i1* align 512 %_V_last_V, i5* align 512 %_V_id_V, i5* align 512 %_V_dest_V)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %1, i8* align 512 %_V_data_V1, i1* align 512 %_V_keep_V2, i1* align 512 %_V_strb_V3, i4* align 512 %_V_user_V4, i1* align 512 %_V_last_V5, i5* align 512 %_V_id_V6, i5* align 512 %_V_dest_V7)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %2, i8* align 512 %_V_data_V18, i1* align 512 %_V_keep_V29, i1* align 512 %_V_strb_V310, i4* align 512 %_V_user_V411, i1* align 512 %_V_last_V512, i5* align 512 %_V_id_V613, i5* align 512 %_V_dest_V714)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %3, i8* align 512 %_V_data_V1815, i1* align 512 %_V_keep_V2916, i1* align 512 %_V_strb_V31017, i4* align 512 %_V_user_V41118, i1* align 512 %_V_last_V51219, i5* align 512 %_V_id_V61320, i5* align 512 %_V_dest_V71421)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %4, i16* align 512 %_V_data_V2, i2* align 512 %_V_keep_V3, i2* align 512 %_V_strb_V4, i4* align 512 %_V_user_V5, i1* align 512 %_V_last_V6, i5* align 512 %_V_id_V7, i5* align 512 %_V_dest_V8)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %5, i16* align 512 %_V_data_V181522, i2* align 512 %_V_keep_V291623, i2* align 512 %_V_strb_V3101724, i4* align 512 %_V_user_V4111825, i1* align 512 %_V_last_V5121926, i5* align 512 %_V_id_V6132027, i5* align 512 %_V_dest_V7142128)
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias %dst, i16* noalias align 512 "unpacked"="1.0" %src_V_data_V, i2* noalias align 512 "unpacked"="1.1" %src_V_keep_V, i2* noalias align 512 "unpacked"="1.2" %src_V_strb_V, i4* noalias align 512 "unpacked"="1.3" %src_V_user_V, i1* noalias align 512 "unpacked"="1.4" %src_V_last_V, i5* noalias align 512 "unpacked"="1.5" %src_V_id_V, i5* noalias align 512 "unpacked"="1.6" %src_V_dest_V) unnamed_addr #3 {
entry:
  %0 = icmp eq %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.7"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* nonnull %dst, i16* align 512 %src_V_data_V, i2* align 512 %src_V_keep_V, i2* align 512 %src_V_strb_V, i4* align 512 %src_V_user_V, i1* align 512 %src_V_last_V, i5* align 512 %src_V_id_V, i5* align 512 %src_V_dest_V)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.7"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias nocapture, i16* noalias nocapture align 512 "unpacked"="1.0" %_V_data_V, i2* noalias nocapture align 512 "unpacked"="1.1" %_V_keep_V, i2* noalias nocapture align 512 "unpacked"="1.2" %_V_strb_V, i4* noalias nocapture align 512 "unpacked"="1.3" %_V_user_V, i1* noalias nocapture align 512 "unpacked"="1.4" %_V_last_V, i5* noalias nocapture align 512 "unpacked"="1.5" %_V_id_V, i5* noalias nocapture align 512 "unpacked"="1.6" %_V_dest_V) unnamed_addr #4 {
entry:
  %1 = alloca i16
  %2 = alloca i2
  %3 = alloca i2
  %4 = alloca i4
  %5 = alloca i1
  %6 = alloca i5
  %7 = alloca i5
  %8 = alloca %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"
  br label %empty

empty:                                            ; preds = %push, %entry
  %9 = bitcast i16* %_V_data_V to i8*
  %10 = call i1 @fpga_fifo_not_empty_2(i8* %9)
  br i1 %10, label %push, label %ret

push:                                             ; preds = %empty
  %11 = bitcast i16* %1 to i8*
  %12 = bitcast i16* %_V_data_V to i8*
  call void @fpga_fifo_pop_2(i8* %11, i8* %12)
  %13 = load volatile i16, i16* %1
  %14 = bitcast i2* %3 to i8*
  %15 = bitcast i2* %_V_keep_V to i8*
  call void @fpga_fifo_pop_1(i8* %14, i8* %15)
  %16 = bitcast i2* %3 to i8*
  %17 = load i8, i8* %16
  %18 = trunc i8 %17 to i2
  %19 = bitcast i2* %2 to i8*
  %20 = bitcast i2* %_V_strb_V to i8*
  call void @fpga_fifo_pop_1(i8* %19, i8* %20)
  %21 = bitcast i2* %2 to i8*
  %22 = load i8, i8* %21
  %23 = trunc i8 %22 to i2
  %24 = bitcast i4* %4 to i8*
  %25 = bitcast i4* %_V_user_V to i8*
  call void @fpga_fifo_pop_1(i8* %24, i8* %25)
  %26 = bitcast i4* %4 to i8*
  %27 = load i8, i8* %26
  %28 = trunc i8 %27 to i4
  %29 = bitcast i1* %5 to i8*
  %30 = bitcast i1* %_V_last_V to i8*
  call void @fpga_fifo_pop_1(i8* %29, i8* %30)
  %31 = bitcast i1* %5 to i8*
  %32 = load i8, i8* %31
  %33 = trunc i8 %32 to i1
  %34 = bitcast i5* %7 to i8*
  %35 = bitcast i5* %_V_id_V to i8*
  call void @fpga_fifo_pop_1(i8* %34, i8* %35)
  %36 = bitcast i5* %7 to i8*
  %37 = load i8, i8* %36
  %38 = trunc i8 %37 to i5
  %39 = bitcast i5* %6 to i8*
  %40 = bitcast i5* %_V_dest_V to i8*
  call void @fpga_fifo_pop_1(i8* %39, i8* %40)
  %41 = bitcast i5* %6 to i8*
  %42 = load i8, i8* %41
  %43 = trunc i8 %42 to i5
  %.fca.0.0.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" undef, i16 %13, 0, 0, 0, 0, 0
  %.fca.0.1.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.0.0.0.0.insert, i2 %18, 0, 1, 0, 0, 0
  %.fca.0.2.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.1.0.0.0.insert, i2 %23, 0, 2, 0, 0, 0
  %.fca.0.3.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.2.0.0.0.insert, i4 %28, 0, 3, 0, 0, 0
  %.fca.0.4.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.3.0.0.0.insert, i1 %33, 0, 4, 0, 0, 0
  %.fca.0.5.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.4.0.0.0.insert, i5 %38, 0, 5, 0, 0, 0
  %.fca.0.6.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.5.0.0.0.insert, i5 %43, 0, 6, 0, 0, 0
  store %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %.fca.0.6.0.0.0.insert, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %8
  %44 = bitcast %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %8 to i8*
  %45 = bitcast %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %0 to i8*
  call void @fpga_fifo_push_8(i8* %44, i8* %45)
  br label %empty, !llvm.loop !5

ret:                                              ; preds = %empty
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.12"(i16* noalias align 512 "unpacked"="0.0" %dst_V_data_V, i2* noalias align 512 "unpacked"="0.1" %dst_V_keep_V, i2* noalias align 512 "unpacked"="0.2" %dst_V_strb_V, i4* noalias align 512 "unpacked"="0.3" %dst_V_user_V, i1* noalias align 512 "unpacked"="0.4" %dst_V_last_V, i5* noalias align 512 "unpacked"="0.5" %dst_V_id_V, i5* noalias align 512 "unpacked"="0.6" %dst_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias %src) unnamed_addr #3 {
entry:
  %0 = icmp eq %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.15"(i16* align 512 %dst_V_data_V, i2* align 512 %dst_V_keep_V, i2* align 512 %dst_V_strb_V, i4* align 512 %dst_V_user_V, i1* align 512 %dst_V_last_V, i5* align 512 %dst_V_id_V, i5* align 512 %dst_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* nonnull %src)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>.15"(i16* noalias nocapture align 512 "unpacked"="0.0" %_V_data_V, i2* noalias nocapture align 512 "unpacked"="0.1" %_V_keep_V, i2* noalias nocapture align 512 "unpacked"="0.2" %_V_strb_V, i4* noalias nocapture align 512 "unpacked"="0.3" %_V_user_V, i1* noalias nocapture align 512 "unpacked"="0.4" %_V_last_V, i5* noalias nocapture align 512 "unpacked"="0.5" %_V_id_V, i5* noalias nocapture align 512 "unpacked"="0.6" %_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias nocapture) unnamed_addr #4 {
entry:
  %1 = alloca %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"
  %2 = alloca i16
  %3 = alloca i2
  %4 = alloca i2
  %5 = alloca i4
  %6 = alloca i1
  %7 = alloca i5
  %8 = alloca i5
  br label %empty

empty:                                            ; preds = %push, %entry
  %9 = bitcast %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %0 to i8*
  %10 = call i1 @fpga_fifo_not_empty_8(i8* %9)
  br i1 %10, label %push, label %ret

push:                                             ; preds = %empty
  %11 = bitcast %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %1 to i8*
  %12 = bitcast %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %0 to i8*
  call void @fpga_fifo_pop_8(i8* %11, i8* %12)
  %13 = load volatile %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>", %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %1
  %.fca.0.0.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 0, 0, 0, 0
  %.fca.0.1.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 1, 0, 0, 0
  %.fca.0.2.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 2, 0, 0, 0
  %.fca.0.3.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 3, 0, 0, 0
  %.fca.0.4.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 4, 0, 0, 0
  %.fca.0.5.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 5, 0, 0, 0
  %.fca.0.6.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>" %13, 0, 6, 0, 0, 0
  store i16 %.fca.0.0.0.0.0.extract, i16* %2
  %14 = bitcast i16* %2 to i8*
  %15 = bitcast i16* %_V_data_V to i8*
  call void @fpga_fifo_push_2(i8* %14, i8* %15)
  store i2 %.fca.0.1.0.0.0.extract, i2* %4
  %16 = bitcast i2* %4 to i8*
  %17 = bitcast i2* %_V_keep_V to i8*
  call void @fpga_fifo_push_1(i8* %16, i8* %17)
  store i2 %.fca.0.2.0.0.0.extract, i2* %3
  %18 = bitcast i2* %3 to i8*
  %19 = bitcast i2* %_V_strb_V to i8*
  call void @fpga_fifo_push_1(i8* %18, i8* %19)
  store i4 %.fca.0.3.0.0.0.extract, i4* %5
  %20 = bitcast i4* %5 to i8*
  %21 = bitcast i4* %_V_user_V to i8*
  call void @fpga_fifo_push_1(i8* %20, i8* %21)
  store i1 %.fca.0.4.0.0.0.extract, i1* %6
  %22 = bitcast i1* %6 to i8*
  %23 = bitcast i1* %_V_last_V to i8*
  call void @fpga_fifo_push_1(i8* %22, i8* %23)
  store i5 %.fca.0.5.0.0.0.extract, i5* %8
  %24 = bitcast i5* %8 to i8*
  %25 = bitcast i5* %_V_id_V to i8*
  call void @fpga_fifo_push_1(i8* %24, i8* %25)
  store i5 %.fca.0.6.0.0.0.extract, i5* %7
  %26 = bitcast i5* %7 to i8*
  %27 = bitcast i5* %_V_dest_V to i8*
  call void @fpga_fifo_push_1(i8* %26, i8* %27)
  br label %empty, !llvm.loop !5

ret:                                              ; preds = %empty
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.19"(i8* noalias align 512 "unpacked"="0.0" %dst_V_data_V, i1* noalias align 512 "unpacked"="0.1" %dst_V_keep_V, i1* noalias align 512 "unpacked"="0.2" %dst_V_strb_V, i4* noalias align 512 "unpacked"="0.3" %dst_V_user_V, i1* noalias align 512 "unpacked"="0.4" %dst_V_last_V, i5* noalias align 512 "unpacked"="0.5" %dst_V_id_V, i5* noalias align 512 "unpacked"="0.6" %dst_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias %src) unnamed_addr #3 {
entry:
  %0 = icmp eq %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.22"(i8* align 512 %dst_V_data_V, i1* align 512 %dst_V_keep_V, i1* align 512 %dst_V_strb_V, i4* align 512 %dst_V_user_V, i1* align 512 %dst_V_last_V, i5* align 512 %dst_V_id_V, i5* align 512 %dst_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* nonnull %src)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.22"(i8* noalias nocapture align 512 "unpacked"="0.0" %_V_data_V, i1* noalias nocapture align 512 "unpacked"="0.1" %_V_keep_V, i1* noalias nocapture align 512 "unpacked"="0.2" %_V_strb_V, i4* noalias nocapture align 512 "unpacked"="0.3" %_V_user_V, i1* noalias nocapture align 512 "unpacked"="0.4" %_V_last_V, i5* noalias nocapture align 512 "unpacked"="0.5" %_V_id_V, i5* noalias nocapture align 512 "unpacked"="0.6" %_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias nocapture) unnamed_addr #4 {
entry:
  %1 = alloca %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"
  %2 = alloca i4
  %3 = alloca i1
  %4 = alloca i1
  %5 = alloca i1
  %6 = alloca i5
  %7 = alloca i5
  %8 = alloca i8
  br label %empty

empty:                                            ; preds = %push, %entry
  %9 = bitcast %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %0 to i8*
  %10 = call i1 @fpga_fifo_not_empty_7(i8* %9)
  br i1 %10, label %push, label %ret

push:                                             ; preds = %empty
  %11 = bitcast %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %1 to i8*
  %12 = bitcast %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %0 to i8*
  call void @fpga_fifo_pop_7(i8* %11, i8* %12)
  %13 = load volatile %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>", %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %1
  %.fca.0.0.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 0, 0, 0, 0
  %.fca.0.1.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 1, 0, 0, 0
  %.fca.0.2.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 2, 0, 0, 0
  %.fca.0.3.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 3, 0, 0, 0
  %.fca.0.4.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 4, 0, 0, 0
  %.fca.0.5.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 5, 0, 0, 0
  %.fca.0.6.0.0.0.extract = extractvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %13, 0, 6, 0, 0, 0
  store i8 %.fca.0.0.0.0.0.extract, i8* %8
  call void @fpga_fifo_push_1(i8* %8, i8* %_V_data_V)
  store i1 %.fca.0.1.0.0.0.extract, i1* %5
  %14 = bitcast i1* %5 to i8*
  %15 = bitcast i1* %_V_keep_V to i8*
  call void @fpga_fifo_push_1(i8* %14, i8* %15)
  store i1 %.fca.0.2.0.0.0.extract, i1* %4
  %16 = bitcast i1* %4 to i8*
  %17 = bitcast i1* %_V_strb_V to i8*
  call void @fpga_fifo_push_1(i8* %16, i8* %17)
  store i4 %.fca.0.3.0.0.0.extract, i4* %2
  %18 = bitcast i4* %2 to i8*
  %19 = bitcast i4* %_V_user_V to i8*
  call void @fpga_fifo_push_1(i8* %18, i8* %19)
  store i1 %.fca.0.4.0.0.0.extract, i1* %3
  %20 = bitcast i1* %3 to i8*
  %21 = bitcast i1* %_V_last_V to i8*
  call void @fpga_fifo_push_1(i8* %20, i8* %21)
  store i5 %.fca.0.5.0.0.0.extract, i5* %7
  %22 = bitcast i5* %7 to i8*
  %23 = bitcast i5* %_V_id_V to i8*
  call void @fpga_fifo_push_1(i8* %22, i8* %23)
  store i5 %.fca.0.6.0.0.0.extract, i5* %6
  %24 = bitcast i5* %6 to i8*
  %25 = bitcast i5* %_V_dest_V to i8*
  call void @fpga_fifo_push_1(i8* %24, i8* %25)
  br label %empty, !llvm.loop !7

ret:                                              ; preds = %empty
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias %dst, i8* noalias align 512 "unpacked"="1.0" %src_V_data_V, i1* noalias align 512 "unpacked"="1.1" %src_V_keep_V, i1* noalias align 512 "unpacked"="1.2" %src_V_strb_V, i4* noalias align 512 "unpacked"="1.3" %src_V_user_V, i1* noalias align 512 "unpacked"="1.4" %src_V_last_V, i5* noalias align 512 "unpacked"="1.5" %src_V_id_V, i5* noalias align 512 "unpacked"="1.6" %src_V_dest_V) unnamed_addr #3 {
entry:
  %0 = icmp eq %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.30"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* nonnull %dst, i8* align 512 %src_V_data_V, i1* align 512 %src_V_keep_V, i1* align 512 %src_V_strb_V, i4* align 512 %src_V_user_V, i1* align 512 %src_V_last_V, i5* align 512 %src_V_id_V, i5* align 512 %src_V_dest_V)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @"streamcpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>.30"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias nocapture, i8* noalias nocapture align 512 "unpacked"="1.0" %_V_data_V, i1* noalias nocapture align 512 "unpacked"="1.1" %_V_keep_V, i1* noalias nocapture align 512 "unpacked"="1.2" %_V_strb_V, i4* noalias nocapture align 512 "unpacked"="1.3" %_V_user_V, i1* noalias nocapture align 512 "unpacked"="1.4" %_V_last_V, i5* noalias nocapture align 512 "unpacked"="1.5" %_V_id_V, i5* noalias nocapture align 512 "unpacked"="1.6" %_V_dest_V) unnamed_addr #4 {
entry:
  %1 = alloca i4
  %2 = alloca i1
  %3 = alloca i1
  %4 = alloca i1
  %5 = alloca i5
  %6 = alloca i5
  %7 = alloca i8
  %8 = alloca %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"
  br label %empty

empty:                                            ; preds = %push, %entry
  %9 = call i1 @fpga_fifo_not_empty_1(i8* %_V_data_V)
  br i1 %9, label %push, label %ret

push:                                             ; preds = %empty
  call void @fpga_fifo_pop_1(i8* %7, i8* %_V_data_V)
  %10 = load volatile i8, i8* %7
  %11 = bitcast i1* %4 to i8*
  %12 = bitcast i1* %_V_keep_V to i8*
  call void @fpga_fifo_pop_1(i8* %11, i8* %12)
  %13 = bitcast i1* %4 to i8*
  %14 = load i8, i8* %13
  %15 = trunc i8 %14 to i1
  %16 = bitcast i1* %3 to i8*
  %17 = bitcast i1* %_V_strb_V to i8*
  call void @fpga_fifo_pop_1(i8* %16, i8* %17)
  %18 = bitcast i1* %3 to i8*
  %19 = load i8, i8* %18
  %20 = trunc i8 %19 to i1
  %21 = bitcast i4* %1 to i8*
  %22 = bitcast i4* %_V_user_V to i8*
  call void @fpga_fifo_pop_1(i8* %21, i8* %22)
  %23 = bitcast i4* %1 to i8*
  %24 = load i8, i8* %23
  %25 = trunc i8 %24 to i4
  %26 = bitcast i1* %2 to i8*
  %27 = bitcast i1* %_V_last_V to i8*
  call void @fpga_fifo_pop_1(i8* %26, i8* %27)
  %28 = bitcast i1* %2 to i8*
  %29 = load i8, i8* %28
  %30 = trunc i8 %29 to i1
  %31 = bitcast i5* %6 to i8*
  %32 = bitcast i5* %_V_id_V to i8*
  call void @fpga_fifo_pop_1(i8* %31, i8* %32)
  %33 = bitcast i5* %6 to i8*
  %34 = load i8, i8* %33
  %35 = trunc i8 %34 to i5
  %36 = bitcast i5* %5 to i8*
  %37 = bitcast i5* %_V_dest_V to i8*
  call void @fpga_fifo_pop_1(i8* %36, i8* %37)
  %38 = bitcast i5* %5 to i8*
  %39 = load i8, i8* %38
  %40 = trunc i8 %39 to i5
  %.fca.0.0.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" undef, i8 %10, 0, 0, 0, 0, 0
  %.fca.0.1.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.0.0.0.0.insert, i1 %15, 0, 1, 0, 0, 0
  %.fca.0.2.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.1.0.0.0.insert, i1 %20, 0, 2, 0, 0, 0
  %.fca.0.3.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.2.0.0.0.insert, i4 %25, 0, 3, 0, 0, 0
  %.fca.0.4.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.3.0.0.0.insert, i1 %30, 0, 4, 0, 0, 0
  %.fca.0.5.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.4.0.0.0.insert, i5 %35, 0, 5, 0, 0, 0
  %.fca.0.6.0.0.0.insert = insertvalue %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.5.0.0.0.insert, i5 %40, 0, 6, 0, 0, 0
  store %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>" %.fca.0.6.0.0.0.insert, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %8
  %41 = bitcast %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %8 to i8*
  %42 = bitcast %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %0 to i8*
  call void @fpga_fifo_push_7(i8* %41, i8* %42)
  br label %empty, !llvm.loop !7

ret:                                              ; preds = %empty
  ret void
}

declare void @apatb_pe_hw(i8*, i1*, i1*, i4*, i1*, i5*, i5*, i8*, i1*, i1*, i4*, i1*, i5*, i5*, i8*, i1*, i1*, i4*, i1*, i5*, i5*, i8*, i1*, i1*, i4*, i1*, i5*, i5*, i16*, i2*, i2*, i4*, i1*, i5*, i5*, i16*, i2*, i2*, i4*, i1*, i5*, i5*)

; Function Attrs: argmemonly noinline willreturn
define internal fastcc void @copy_back(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="1.0" %_V_data_V, i1* noalias align 512 "unpacked"="1.1" %_V_keep_V, i1* noalias align 512 "unpacked"="1.2" %_V_strb_V, i4* noalias align 512 "unpacked"="1.3" %_V_user_V, i1* noalias align 512 "unpacked"="1.4" %_V_last_V, i5* noalias align 512 "unpacked"="1.5" %_V_id_V, i5* noalias align 512 "unpacked"="1.6" %_V_dest_V, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="3.0" %_V_data_V1, i1* noalias align 512 "unpacked"="3.1" %_V_keep_V2, i1* noalias align 512 "unpacked"="3.2" %_V_strb_V3, i4* noalias align 512 "unpacked"="3.3" %_V_user_V4, i1* noalias align 512 "unpacked"="3.4" %_V_last_V5, i5* noalias align 512 "unpacked"="3.5" %_V_id_V6, i5* noalias align 512 "unpacked"="3.6" %_V_dest_V7, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="11.0" %_V_data_V18, i1* noalias align 512 "unpacked"="11.1" %_V_keep_V29, i1* noalias align 512 "unpacked"="11.2" %_V_strb_V310, i4* noalias align 512 "unpacked"="11.3" %_V_user_V411, i1* noalias align 512 "unpacked"="11.4" %_V_last_V512, i5* noalias align 512 "unpacked"="11.5" %_V_id_V613, i5* noalias align 512 "unpacked"="11.6" %_V_dest_V714, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* noalias, i8* noalias align 512 "unpacked"="13.0" %_V_data_V1815, i1* noalias align 512 "unpacked"="13.1" %_V_keep_V2916, i1* noalias align 512 "unpacked"="13.2" %_V_strb_V31017, i4* noalias align 512 "unpacked"="13.3" %_V_user_V41118, i1* noalias align 512 "unpacked"="13.4" %_V_last_V51219, i5* noalias align 512 "unpacked"="13.5" %_V_id_V61320, i5* noalias align 512 "unpacked"="13.6" %_V_dest_V71421, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias, i16* noalias align 512 "unpacked"="21.0" %_V_data_V2, i2* noalias align 512 "unpacked"="21.1" %_V_keep_V3, i2* noalias align 512 "unpacked"="21.2" %_V_strb_V4, i4* noalias align 512 "unpacked"="21.3" %_V_user_V5, i1* noalias align 512 "unpacked"="21.4" %_V_last_V6, i5* noalias align 512 "unpacked"="21.5" %_V_id_V7, i5* noalias align 512 "unpacked"="21.6" %_V_dest_V8, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* noalias, i16* noalias align 512 "unpacked"="11.0" %_V_data_V181522, i2* noalias align 512 "unpacked"="11.1" %_V_keep_V291623, i2* noalias align 512 "unpacked"="11.2" %_V_strb_V3101724, i4* noalias align 512 "unpacked"="11.3" %_V_user_V4111825, i1* noalias align 512 "unpacked"="11.4" %_V_last_V5121926, i5* noalias align 512 "unpacked"="11.5" %_V_id_V6132027, i5* noalias align 512 "unpacked"="11.6" %_V_dest_V7142128) unnamed_addr #2 {
entry:
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %0, i8* align 512 %_V_data_V, i1* align 512 %_V_keep_V, i1* align 512 %_V_strb_V, i4* align 512 %_V_user_V, i1* align 512 %_V_last_V, i5* align 512 %_V_id_V, i5* align 512 %_V_dest_V)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %1, i8* align 512 %_V_data_V1, i1* align 512 %_V_keep_V2, i1* align 512 %_V_strb_V3, i4* align 512 %_V_user_V4, i1* align 512 %_V_last_V5, i5* align 512 %_V_id_V6, i5* align 512 %_V_dest_V7)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %2, i8* align 512 %_V_data_V18, i1* align 512 %_V_keep_V29, i1* align 512 %_V_strb_V310, i4* align 512 %_V_user_V411, i1* align 512 %_V_last_V512, i5* align 512 %_V_id_V613, i5* align 512 %_V_dest_V714)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %3, i8* align 512 %_V_data_V1815, i1* align 512 %_V_keep_V2916, i1* align 512 %_V_strb_V31017, i4* align 512 %_V_user_V41118, i1* align 512 %_V_last_V51219, i5* align 512 %_V_id_V61320, i5* align 512 %_V_dest_V71421)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %4, i16* align 512 %_V_data_V2, i2* align 512 %_V_keep_V3, i2* align 512 %_V_strb_V4, i4* align 512 %_V_user_V5, i1* align 512 %_V_last_V6, i5* align 512 %_V_id_V7, i5* align 512 %_V_dest_V8)
  call fastcc void @"onebyonecpy_hls.p0class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"(%"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %5, i16* align 512 %_V_data_V181522, i2* align 512 %_V_keep_V291623, i2* align 512 %_V_strb_V3101724, i4* align 512 %_V_user_V4111825, i1* align 512 %_V_last_V5121926, i5* align 512 %_V_id_V6132027, i5* align 512 %_V_dest_V7142128)
  ret void
}

define void @pe_hw_stub_wrapper(i8*, i1*, i1*, i4*, i1*, i5*, i5*, i8*, i1*, i1*, i4*, i1*, i5*, i5*, i8*, i1*, i1*, i4*, i1*, i5*, i5*, i8*, i1*, i1*, i4*, i1*, i5*, i5*, i16*, i2*, i2*, i4*, i1*, i5*, i5*, i16*, i2*, i2*, i4*, i1*, i5*, i5*) #5 {
entry:
  %42 = alloca %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"
  %43 = alloca %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"
  %44 = alloca %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"
  %45 = alloca %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"
  %46 = alloca %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"
  %47 = alloca %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"
  call void @copy_out(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %42, i8* %0, i1* %1, i1* %2, i4* %3, i1* %4, i5* %5, i5* %6, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %43, i8* %7, i1* %8, i1* %9, i4* %10, i1* %11, i5* %12, i5* %13, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %44, i8* %14, i1* %15, i1* %16, i4* %17, i1* %18, i5* %19, i5* %20, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %45, i8* %21, i1* %22, i1* %23, i4* %24, i1* %25, i5* %26, i5* %27, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %46, i16* %28, i2* %29, i2* %30, i4* %31, i1* %32, i5* %33, i5* %34, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %47, i16* %35, i2* %36, i2* %37, i4* %38, i1* %39, i5* %40, i5* %41)
  call void @pe_hw_stub(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %42, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %43, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %44, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %45, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %46, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %47)
  call void @copy_in(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %42, i8* %0, i1* %1, i1* %2, i4* %3, i1* %4, i5* %5, i5* %6, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %43, i8* %7, i1* %8, i1* %9, i4* %10, i1* %11, i5* %12, i5* %13, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %44, i8* %14, i1* %15, i1* %16, i4* %17, i1* %18, i5* %19, i5* %20, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"* %45, i8* %21, i1* %22, i1* %23, i4* %24, i1* %25, i5* %26, i5* %27, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %46, i16* %28, i2* %29, i2* %30, i4* %31, i1* %32, i5* %33, i5* %34, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"* %47, i16* %35, i2* %36, i2* %37, i4* %38, i1* %39, i5* %40, i5* %41)
  ret void
}

declare void @pe_hw_stub(%"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"*, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"*, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"*, %"class.hls::stream<hls::axis<ap_uint<8>, 4, 5, 5, '8', false>, 0>"*, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"*, %"class.hls::stream<hls::axis<ap_uint<16>, 4, 5, 5, '8', false>, 0>"*)

declare i1 @fpga_fifo_not_empty_7(i8*)

declare i1 @fpga_fifo_not_empty_8(i8*)

declare i1 @fpga_fifo_not_empty_2(i8*)

declare i1 @fpga_fifo_not_empty_1(i8*)

declare void @fpga_fifo_pop_7(i8*, i8*)

declare void @fpga_fifo_pop_8(i8*, i8*)

declare void @fpga_fifo_pop_2(i8*, i8*)

declare void @fpga_fifo_pop_1(i8*, i8*)

declare void @fpga_fifo_push_7(i8*, i8*)

declare void @fpga_fifo_push_8(i8*, i8*)

declare void @fpga_fifo_push_2(i8*, i8*)

declare void @fpga_fifo_push_1(i8*, i8*)

attributes #0 = { inaccessiblemem_or_argmemonly noinline willreturn "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline willreturn "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline willreturn "fpga.wrapper.func"="copyout" }
attributes #3 = { argmemonly noinline willreturn "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #4 = { argmemonly noinline willreturn "fpga.wrapper.func"="streamcpy_hls" }
attributes #5 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
!5 = distinct !{!5, !6}
!6 = !{!"llvm.loop.rotate.disable"}
!7 = distinct !{!7, !6}
