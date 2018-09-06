// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _get_discriminant_HH_
#define _get_discriminant_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct get_discriminant : public sc_module {
    // Port declarations 7
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<5> > jet_tk13DIP_V;
    sc_in< sc_lv<8> > jet_muPt_V;
    sc_in< sc_lv<4> > jet_d_V;
    // Port declarations for the virtual clock. 
    sc_in_clk ap_virtual_clock;


    // Module declarations
    get_discriminant(sc_module_name name);
    SC_HAS_PROCESS(get_discriminant);

    ~get_discriminant();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
