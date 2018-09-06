############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project phase2_bjets_hls
set_top get_discriminant
add_files phase2_bjets_hls/discr_array_exercise.hpp
add_files phase2_bjets_hls/discr_array_exercise.cc
open_solution "solution1"
set_part {xa7a12tcsg325-1q}
create_clock -period 10 -name default
#source "./phase2_bjets_hls/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
