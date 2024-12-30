############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project geem_hls
set_top sa_compute
add_files src/geem_pe.c
add_files src/geem_sa.c
add_files -tb src/geem_test.c
open_solution "solution1"
set_part {xc7a35tcpg236-1}
create_clock -period 10 -name default
#source "./geem_hls/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -wave_debug -trace_level all -tool xsim
export_design -format ip_catalog
