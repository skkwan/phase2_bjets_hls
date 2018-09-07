// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="get_discriminant,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgc2104-2-i,HLS_INPUT_CLOCK=3.125000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=0.000000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=0,HLS_VERSION=2018_2}" *)

module get_discriminant (
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        jet_tk13DIP_V,
        jet_muPt_V,
        jet_d_V,
        jet_d_V_ap_vld
);


input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [4:0] jet_tk13DIP_V;
input  [7:0] jet_muPt_V;
output  [0:0] jet_d_V;
output   jet_d_V_ap_vld;

reg jet_d_V_ap_vld;

always @ (*) begin
    if ((ap_start == 1'b1)) begin
        jet_d_V_ap_vld = 1'b1;
    end else begin
        jet_d_V_ap_vld = 1'b0;
    end
end

assign ap_done = ap_start;

assign ap_idle = 1'b1;

assign ap_ready = ap_start;

assign jet_d_V = 1'd1;

endmodule //get_discriminant
