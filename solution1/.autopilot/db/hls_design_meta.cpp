#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("jet_tk13DIP_V", 5, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("jet_muPt_V", 8, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("jet_d_V", 4, hls_in, 2, "ap_none", "in_data", 1),
};
const char* HLS_Design_Meta::dut_name = "get_discriminant";
