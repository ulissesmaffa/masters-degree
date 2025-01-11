# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1 \
    name sa_pe_li \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_pe_li \
    op interface \
    ports { sa_pe_li_address0 { O 2 vector } sa_pe_li_ce0 { O 1 bit } sa_pe_li_we0 { O 1 bit } sa_pe_li_d0 { O 32 vector } sa_pe_li_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_pe_li'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2 \
    name sa_pe_tw \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_pe_tw \
    op interface \
    ports { sa_pe_tw_address0 { O 2 vector } sa_pe_tw_ce0 { O 1 bit } sa_pe_tw_we0 { O 1 bit } sa_pe_tw_d0 { O 32 vector } sa_pe_tw_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_pe_tw'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3 \
    name sa_pe_ri \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_pe_ri \
    op interface \
    ports { sa_pe_ri_address0 { O 2 vector } sa_pe_ri_ce0 { O 1 bit } sa_pe_ri_we0 { O 1 bit } sa_pe_ri_d0 { O 32 vector } sa_pe_ri_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_pe_ri'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 4 \
    name sa_pe_bw \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_pe_bw \
    op interface \
    ports { sa_pe_bw_address0 { O 2 vector } sa_pe_bw_ce0 { O 1 bit } sa_pe_bw_we0 { O 1 bit } sa_pe_bw_d0 { O 32 vector } sa_pe_bw_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_pe_bw'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name sa_pe_ba \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_pe_ba \
    op interface \
    ports { sa_pe_ba_address0 { O 2 vector } sa_pe_ba_ce0 { O 1 bit } sa_pe_ba_we0 { O 1 bit } sa_pe_ba_d0 { O 32 vector } sa_pe_ba_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_pe_ba'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name sa_buffer_a_li_ready \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_buffer_a_li_ready \
    op interface \
    ports { sa_buffer_a_li_ready_address0 { O 1 vector } sa_buffer_a_li_ready_ce0 { O 1 bit } sa_buffer_a_li_ready_we0 { O 1 bit } sa_buffer_a_li_ready_d0 { O 1 vector } sa_buffer_a_li_ready_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_buffer_a_li_ready'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name sa_buffer_a_li_value \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename sa_buffer_a_li_value \
    op interface \
    ports { sa_buffer_a_li_value_address0 { O 1 vector } sa_buffer_a_li_value_ce0 { O 1 bit } sa_buffer_a_li_value_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_buffer_a_li_value'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name sa_buffer_b_tw_ready \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename sa_buffer_b_tw_ready \
    op interface \
    ports { sa_buffer_b_tw_ready_address0 { O 1 vector } sa_buffer_b_tw_ready_ce0 { O 1 bit } sa_buffer_b_tw_ready_we0 { O 1 bit } sa_buffer_b_tw_ready_d0 { O 1 vector } sa_buffer_b_tw_ready_q0 { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_buffer_b_tw_ready'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name sa_buffer_b_tw_value \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename sa_buffer_b_tw_value \
    op interface \
    ports { sa_buffer_b_tw_value_address0 { O 1 vector } sa_buffer_b_tw_value_ce0 { O 1 bit } sa_buffer_b_tw_value_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_buffer_b_tw_value'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name sa_ba_sa \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename sa_ba_sa \
    op interface \
    ports { sa_ba_sa_address0 { O 2 vector } sa_ba_sa_ce0 { O 1 bit } sa_ba_sa_we0 { O 1 bit } sa_ba_sa_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sa_ba_sa'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


