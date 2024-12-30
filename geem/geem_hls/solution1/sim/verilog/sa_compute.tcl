
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set sa_group [add_wave_group sa(memory) -into $cinoutgroup]
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_ready_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_ready_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_ready_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_ready_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_ready_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_ready_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_ready_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_ready_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_ready_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_ready_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ba_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ba_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ba_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ba_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ba_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_bw_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_bw_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_bw_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_bw_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_bw_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ri_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ri_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ri_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ri_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_ri_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_tw_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_tw_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_tw_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_tw_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_tw_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_li_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_li_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_li_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_li_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_pe_li_address0 -into $sa_group -radix hex
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set sa_group [add_wave_group sa(memory) -into $coutputgroup]
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_ba_sa_d0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_ba_sa_we0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_ba_sa_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_ba_sa_address0 -into $sa_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set sa_group [add_wave_group sa(memory) -into $cinputgroup]
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_value_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_value_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_b_tw_value_address0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_value_q0 -into $sa_group -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_value_ce0 -into $sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/sa_buffer_a_li_value_address0 -into $sa_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/ap_start -into $blocksiggroup
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/ap_done -into $blocksiggroup
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/ap_idle -into $blocksiggroup
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_sa_compute_top/AESL_inst_sa_compute/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_sa_compute_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_sa_compute_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sa_compute_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_pe_li -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_pe_tw -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_pe_ri -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_pe_bw -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_pe_ba -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_buffer_a_li_ready -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_buffer_a_li_value -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_buffer_b_tw_ready -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_buffer_b_tw_value -into $tb_portdepth_group -radix hex
add_wave /apatb_sa_compute_top/LENGTH_sa_ba_sa -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_sa_group [add_wave_group sa(memory) -into $tbcinoutgroup]
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_ready_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_ready_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_ready_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_ready_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_ready_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_ready_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_ready_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_ready_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_ready_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_ready_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ba_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ba_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ba_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ba_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ba_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_bw_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_bw_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_bw_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_bw_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_bw_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ri_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ri_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ri_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ri_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_ri_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_tw_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_tw_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_tw_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_tw_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_tw_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_li_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_li_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_pe_li_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_li_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_pe_li_address0 -into $tb_sa_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_sa_group [add_wave_group sa(memory) -into $tbcoutputgroup]
add_wave /apatb_sa_compute_top/sa_ba_sa_d0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_ba_sa_we0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_ba_sa_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_ba_sa_address0 -into $tb_sa_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_sa_group [add_wave_group sa(memory) -into $tbcinputgroup]
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_value_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_value_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_b_tw_value_address0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_value_q0 -into $tb_sa_group -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_value_ce0 -into $tb_sa_group -color #ffff00 -radix hex
add_wave /apatb_sa_compute_top/sa_buffer_a_li_value_address0 -into $tb_sa_group -radix hex
save_wave_config sa_compute.wcfg
run all

