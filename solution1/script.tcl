############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project phase2_bjets_hls
set_top get_discriminant
add_files phase2_bjets_hls/discr_array_exercise.cc
add_files phase2_bjets_hls/discr_array_exercise.hpp
open_solution "solution1"
set_part {xcvu9p-flgc2104-2-i}
create_clock -period 3.125 -name default
#source "./phase2_bjets_hls/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
