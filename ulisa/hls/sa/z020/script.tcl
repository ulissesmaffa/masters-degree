############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project sa
set_top pe
add_files ../sa/sa.cpp
add_files -tb ../sa/sa_test.cpp
open_solution "z020"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
config_compile -no_signed_zeros=0 -unsafe_math_optimizations=0
config_export -description PE -display_name PE -format ip_catalog -library ufrgs -rtl verilog -taxonomy /unk -vendor x -version 0.01 -vivado_phys_opt place -vivado_report_level 0
#source "./sa/z020/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl vhdl -format ip_catalog -description "PE" -vendor "x" -library "ufrgs" -display_name "PE" -taxonomy "/unk"
