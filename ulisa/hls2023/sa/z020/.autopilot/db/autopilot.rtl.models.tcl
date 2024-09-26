set SynModuleInfo {
  {SRCNAME pe MODELNAME pe RTLNAME pe IS_TOP 1
    SUBMODULES {
      {MODELNAME pe_mul_8s_8s_16_1_1 RTLNAME pe_mul_8s_8s_16_1_1 BINDTYPE op TYPE mul IMPL fabric LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME pe_CONTROL_s_axi RTLNAME pe_CONTROL_s_axi BINDTYPE interface TYPE interface_s_axilite}
      {MODELNAME pe_regslice_both RTLNAME pe_regslice_both BINDTYPE interface TYPE interface_regslice INSTNAME pe_regslice_both_U}
    }
  }
}
