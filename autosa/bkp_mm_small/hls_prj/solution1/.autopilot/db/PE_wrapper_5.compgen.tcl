# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name fifo_A_PE_1_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fifo_A_PE_1_1 \
    op interface \
    ports { fifo_A_PE_1_1_dout { I 64 vector } fifo_A_PE_1_1_num_data_valid { I 2 vector } fifo_A_PE_1_1_fifo_cap { I 2 vector } fifo_A_PE_1_1_empty_n { I 1 bit } fifo_A_PE_1_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 85 \
    name fifo_A_PE_1_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fifo_A_PE_1_2 \
    op interface \
    ports { fifo_A_PE_1_2_din { O 64 vector } fifo_A_PE_1_2_num_data_valid { I 2 vector } fifo_A_PE_1_2_fifo_cap { I 2 vector } fifo_A_PE_1_2_full_n { I 1 bit } fifo_A_PE_1_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name fifo_B_PE_1_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fifo_B_PE_1_1 \
    op interface \
    ports { fifo_B_PE_1_1_dout { I 64 vector } fifo_B_PE_1_1_num_data_valid { I 2 vector } fifo_B_PE_1_1_fifo_cap { I 2 vector } fifo_B_PE_1_1_empty_n { I 1 bit } fifo_B_PE_1_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name fifo_B_PE_2_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fifo_B_PE_2_1 \
    op interface \
    ports { fifo_B_PE_2_1_din { O 64 vector } fifo_B_PE_2_1_num_data_valid { I 2 vector } fifo_B_PE_2_1_fifo_cap { I 2 vector } fifo_B_PE_2_1_full_n { I 1 bit } fifo_B_PE_2_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name fifo_C_drain_PE_1_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fifo_C_drain_PE_1_1 \
    op interface \
    ports { fifo_C_drain_PE_1_1_din { O 32 vector } fifo_C_drain_PE_1_1_num_data_valid { I 2 vector } fifo_C_drain_PE_1_1_fifo_cap { I 2 vector } fifo_C_drain_PE_1_1_full_n { I 1 bit } fifo_C_drain_PE_1_1_write { O 1 bit } } \
} "
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


