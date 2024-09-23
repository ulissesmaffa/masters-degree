set SynModuleInfo {
  {SRCNAME entry_proc MODELNAME entry_proc RTLNAME kernel0_entry_proc}
  {SRCNAME A_IO_L3_in_serialize MODELNAME A_IO_L3_in_serialize RTLNAME kernel0_A_IO_L3_in_serialize
    SUBMODULES {
      {MODELNAME kernel0_flow_control_loop_pipe RTLNAME kernel0_flow_control_loop_pipe BINDTYPE interface TYPE internal_upc_flow_control INSTNAME kernel0_flow_control_loop_pipe_U}
    }
  }
  {SRCNAME A_IO_L3_in MODELNAME A_IO_L3_in RTLNAME kernel0_A_IO_L3_in}
  {SRCNAME A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_112_3 MODELNAME A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_112_3 RTLNAME kernel0_A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_112_3
    SUBMODULES {
      {MODELNAME kernel0_flow_control_loop_pipe_sequential_init RTLNAME kernel0_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME kernel0_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_100_2 MODELNAME A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_100_2 RTLNAME kernel0_A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_100_2}
  {SRCNAME A_IO_L2_in_inter_trans MODELNAME A_IO_L2_in_inter_trans RTLNAME kernel0_A_IO_L2_in_inter_trans}
  {SRCNAME A_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_62_1_VI MODELNAME A_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_62_1_VI RTLNAME kernel0_A_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_62_1_VI
    SUBMODULES {
      {MODELNAME kernel0_mux_8_3_64_1_1 RTLNAME kernel0_mux_8_3_64_1_1 BINDTYPE op TYPE mux IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME A_IO_L2_in_intra_trans MODELNAME A_IO_L2_in_intra_trans RTLNAME kernel0_A_IO_L2_in_intra_trans}
  {SRCNAME A_IO_L2_in MODELNAME A_IO_L2_in RTLNAME kernel0_A_IO_L2_in
    SUBMODULES {
      {MODELNAME kernel0_A_IO_L2_in_local_A_ping_RAM_2P_BRAM_1R1W RTLNAME kernel0_A_IO_L2_in_local_A_ping_RAM_2P_BRAM_1R1W BINDTYPE storage TYPE ram_2p IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME A_IO_L2_in_inter_trans_boundary MODELNAME A_IO_L2_in_inter_trans_boundary RTLNAME kernel0_A_IO_L2_in_inter_trans_boundary}
  {SRCNAME A_IO_L2_in_boundary MODELNAME A_IO_L2_in_boundary RTLNAME kernel0_A_IO_L2_in_boundary}
  {SRCNAME B_IO_L3_in_serialize MODELNAME B_IO_L3_in_serialize RTLNAME kernel0_B_IO_L3_in_serialize}
  {SRCNAME B_IO_L3_in MODELNAME B_IO_L3_in RTLNAME kernel0_B_IO_L3_in}
  {SRCNAME B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_457_3 MODELNAME B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_457_3 RTLNAME kernel0_B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_457_3}
  {SRCNAME B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_445_2 MODELNAME B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_445_2 RTLNAME kernel0_B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_445_2}
  {SRCNAME B_IO_L2_in_inter_trans MODELNAME B_IO_L2_in_inter_trans RTLNAME kernel0_B_IO_L2_in_inter_trans}
  {SRCNAME B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V MODELNAME B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V RTLNAME kernel0_B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V}
  {SRCNAME B_IO_L2_in_intra_trans MODELNAME B_IO_L2_in_intra_trans RTLNAME kernel0_B_IO_L2_in_intra_trans}
  {SRCNAME B_IO_L2_in MODELNAME B_IO_L2_in RTLNAME kernel0_B_IO_L2_in}
  {SRCNAME B_IO_L2_in_inter_trans_boundary MODELNAME B_IO_L2_in_inter_trans_boundary RTLNAME kernel0_B_IO_L2_in_inter_trans_boundary}
  {SRCNAME B_IO_L2_in_boundary MODELNAME B_IO_L2_in_boundary RTLNAME kernel0_B_IO_L2_in_boundary}
  {SRCNAME PE MODELNAME PE RTLNAME kernel0_PE
    SUBMODULES {
      {MODELNAME kernel0_fadd_32ns_32ns_32_5_full_dsp_1 RTLNAME kernel0_fadd_32ns_32ns_32_5_full_dsp_1 BINDTYPE op TYPE fadd IMPL fulldsp LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME kernel0_fmul_32ns_32ns_32_4_max_dsp_1 RTLNAME kernel0_fmul_32ns_32ns_32_4_max_dsp_1 BINDTYPE op TYPE fmul IMPL maxdsp LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME kernel0_PE_local_C_RAM_2P_BRAM_1R1W RTLNAME kernel0_PE_local_C_RAM_2P_BRAM_1R1W BINDTYPE storage TYPE ram_2p IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME PE_wrapper MODELNAME PE_wrapper RTLNAME kernel0_PE_wrapper}
  {SRCNAME PE_wrapper.3 MODELNAME PE_wrapper_3 RTLNAME kernel0_PE_wrapper_3}
  {SRCNAME PE_wrapper.4 MODELNAME PE_wrapper_4 RTLNAME kernel0_PE_wrapper_4}
  {SRCNAME PE_wrapper.5 MODELNAME PE_wrapper_5 RTLNAME kernel0_PE_wrapper_5}
  {SRCNAME A_PE_dummy_in.1 MODELNAME A_PE_dummy_in_1 RTLNAME kernel0_A_PE_dummy_in_1}
  {SRCNAME A_PE_dummy_in MODELNAME A_PE_dummy_in RTLNAME kernel0_A_PE_dummy_in}
  {SRCNAME B_PE_dummy_in.2 MODELNAME B_PE_dummy_in_2 RTLNAME kernel0_B_PE_dummy_in_2}
  {SRCNAME B_PE_dummy_in MODELNAME B_PE_dummy_in RTLNAME kernel0_B_PE_dummy_in}
  {SRCNAME C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_.1 MODELNAME C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1 RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1}
  {SRCNAME C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_ MODELNAME C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_s RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_s}
  {SRCNAME C_drain_IO_L1_out_boundary_wrapper MODELNAME C_drain_IO_L1_out_boundary_wrapper RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper
    SUBMODULES {
      {MODELNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_local_C_RAM_bkb RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_local_C_RAM_bkb BINDTYPE storage TYPE ram_2p IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_ MODELNAME C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s RTLNAME kernel0_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s}
  {SRCNAME C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_ MODELNAME C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s RTLNAME kernel0_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s}
  {SRCNAME C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_ MODELNAME C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s RTLNAME kernel0_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s}
  {SRCNAME C_drain_IO_L1_out MODELNAME C_drain_IO_L1_out RTLNAME kernel0_C_drain_IO_L1_out}
  {SRCNAME C_drain_IO_L1_out_wrapper MODELNAME C_drain_IO_L1_out_wrapper RTLNAME kernel0_C_drain_IO_L1_out_wrapper}
  {SRCNAME C_drain_IO_L1_out_boundary_wrapper.6_Pipeline_VITI.1 MODELNAME C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1 RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1}
  {SRCNAME C_drain_IO_L1_out_boundary_wrapper.6_Pipeline_VITI MODELNAME C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI}
  {SRCNAME C_drain_IO_L1_out_boundary_wrapper.6 MODELNAME C_drain_IO_L1_out_boundary_wrapper_6 RTLNAME kernel0_C_drain_IO_L1_out_boundary_wrapper_6}
  {SRCNAME C_drain_IO_L1_out_wrapper.7 MODELNAME C_drain_IO_L1_out_wrapper_7 RTLNAME kernel0_C_drain_IO_L1_out_wrapper_7}
  {SRCNAME C_drain_IO_L2_out_boundary MODELNAME C_drain_IO_L2_out_boundary RTLNAME kernel0_C_drain_IO_L2_out_boundary}
  {SRCNAME C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1067_7_VITIS MODELNAME C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1067_7_VITIS RTLNAME kernel0_C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1067_7_VITIS}
  {SRCNAME C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1050_4_VITIS MODELNAME C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1050_4_VITIS RTLNAME kernel0_C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1050_4_VITIS}
  {SRCNAME C_drain_IO_L2_out MODELNAME C_drain_IO_L2_out RTLNAME kernel0_C_drain_IO_L2_out}
  {SRCNAME C_drain_IO_L3_out MODELNAME C_drain_IO_L3_out RTLNAME kernel0_C_drain_IO_L3_out}
  {SRCNAME C_drain_IO_L3_out_serialize MODELNAME C_drain_IO_L3_out_serialize RTLNAME kernel0_C_drain_IO_L3_out_serialize}
  {SRCNAME kernel0 MODELNAME kernel0 RTLNAME kernel0 IS_TOP 1
    SUBMODULES {
      {MODELNAME kernel0_fifo_w64_d13_S RTLNAME kernel0_fifo_w64_d13_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME C_c_U}
      {MODELNAME kernel0_fifo_w512_d2_S RTLNAME kernel0_fifo_w512_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_A_IO_L3_in_serialize_U}
      {MODELNAME kernel0_fifo_w512_d2_S RTLNAME kernel0_fifo_w512_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_A_IO_L2_in_0_U}
      {MODELNAME kernel0_fifo_w512_d2_S RTLNAME kernel0_fifo_w512_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_A_IO_L2_in_1_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_PE_0_0_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_PE_1_0_U}
      {MODELNAME kernel0_fifo_w512_d2_S RTLNAME kernel0_fifo_w512_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_B_IO_L3_in_serialize_U}
      {MODELNAME kernel0_fifo_w512_d2_S RTLNAME kernel0_fifo_w512_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_B_IO_L2_in_0_U}
      {MODELNAME kernel0_fifo_w512_d2_S RTLNAME kernel0_fifo_w512_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_B_IO_L2_in_1_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_PE_0_0_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_PE_0_1_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_PE_0_1_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_PE_1_0_U}
      {MODELNAME kernel0_fifo_w32_d2_S RTLNAME kernel0_fifo_w32_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_PE_0_0_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_PE_0_2_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_PE_1_1_U}
      {MODELNAME kernel0_fifo_w32_d2_S RTLNAME kernel0_fifo_w32_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_PE_0_1_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_PE_1_1_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_PE_2_0_U}
      {MODELNAME kernel0_fifo_w32_d2_S RTLNAME kernel0_fifo_w32_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_PE_1_0_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_A_PE_1_2_U}
      {MODELNAME kernel0_fifo_w64_d2_S RTLNAME kernel0_fifo_w64_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_B_PE_2_1_U}
      {MODELNAME kernel0_fifo_w32_d2_S RTLNAME kernel0_fifo_w32_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_PE_1_1_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L1_out_0_1_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L1_out_0_0_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L1_out_1_1_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L1_out_1_0_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L2_out_1_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L2_out_0_U}
      {MODELNAME kernel0_fifo_w128_d2_S RTLNAME kernel0_fifo_w128_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME fifo_C_drain_C_drain_IO_L3_out_serialize_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L3_out_serialize_U0 RTLNAME kernel0_start_for_C_drain_IO_L3_out_serialize_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L3_out_serialize_U0_U}
      {MODELNAME kernel0_start_for_A_IO_L3_in_U0 RTLNAME kernel0_start_for_A_IO_L3_in_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_A_IO_L3_in_U0_U}
      {MODELNAME kernel0_start_for_A_IO_L2_in_U0 RTLNAME kernel0_start_for_A_IO_L2_in_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_A_IO_L2_in_U0_U}
      {MODELNAME kernel0_start_for_A_IO_L2_in_boundary_U0 RTLNAME kernel0_start_for_A_IO_L2_in_boundary_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_A_IO_L2_in_boundary_U0_U}
      {MODELNAME kernel0_start_for_PE_wrapper_U0 RTLNAME kernel0_start_for_PE_wrapper_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_PE_wrapper_U0_U}
      {MODELNAME kernel0_start_for_PE_wrapper_4_U0 RTLNAME kernel0_start_for_PE_wrapper_4_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_PE_wrapper_4_U0_U}
      {MODELNAME kernel0_start_for_B_IO_L3_in_U0 RTLNAME kernel0_start_for_B_IO_L3_in_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_B_IO_L3_in_U0_U}
      {MODELNAME kernel0_start_for_B_IO_L2_in_U0 RTLNAME kernel0_start_for_B_IO_L2_in_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_B_IO_L2_in_U0_U}
      {MODELNAME kernel0_start_for_B_IO_L2_in_boundary_U0 RTLNAME kernel0_start_for_B_IO_L2_in_boundary_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_B_IO_L2_in_boundary_U0_U}
      {MODELNAME kernel0_start_for_PE_wrapper_3_U0 RTLNAME kernel0_start_for_PE_wrapper_3_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_PE_wrapper_3_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L1_out_wrapper_U0 RTLNAME kernel0_start_for_C_drain_IO_L1_out_wrapper_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L1_out_wrapper_U0_U}
      {MODELNAME kernel0_start_for_PE_wrapper_5_U0 RTLNAME kernel0_start_for_PE_wrapper_5_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_PE_wrapper_5_U0_U}
      {MODELNAME kernel0_start_for_A_PE_dummy_in_1_U0 RTLNAME kernel0_start_for_A_PE_dummy_in_1_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_A_PE_dummy_in_1_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L1_out_wrapper_7_U0 RTLNAME kernel0_start_for_C_drain_IO_L1_out_wrapper_7_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L1_out_wrapper_7_U0_U}
      {MODELNAME kernel0_start_for_B_PE_dummy_in_2_U0 RTLNAME kernel0_start_for_B_PE_dummy_in_2_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_B_PE_dummy_in_2_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L1_out_boundary_wrapper_U0 RTLNAME kernel0_start_for_C_drain_IO_L1_out_boundary_wrapper_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L1_out_boundary_wrapper_U0_U}
      {MODELNAME kernel0_start_for_A_PE_dummy_in_U0 RTLNAME kernel0_start_for_A_PE_dummy_in_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_A_PE_dummy_in_U0_U}
      {MODELNAME kernel0_start_for_B_PE_dummy_in_U0 RTLNAME kernel0_start_for_B_PE_dummy_in_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_B_PE_dummy_in_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L1_out_boundary_wrapper_6_U0 RTLNAME kernel0_start_for_C_drain_IO_L1_out_boundary_wrapper_6_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L1_out_boundary_wrapper_6_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L2_out_U0 RTLNAME kernel0_start_for_C_drain_IO_L2_out_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L2_out_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L2_out_boundary_U0 RTLNAME kernel0_start_for_C_drain_IO_L2_out_boundary_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L2_out_boundary_U0_U}
      {MODELNAME kernel0_start_for_C_drain_IO_L3_out_U0 RTLNAME kernel0_start_for_C_drain_IO_L3_out_U0 BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME start_for_C_drain_IO_L3_out_U0_U}
      {MODELNAME kernel0_gmem_A_m_axi RTLNAME kernel0_gmem_A_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME kernel0_gmem_B_m_axi RTLNAME kernel0_gmem_B_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME kernel0_gmem_C_m_axi RTLNAME kernel0_gmem_C_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME kernel0_control_s_axi RTLNAME kernel0_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
