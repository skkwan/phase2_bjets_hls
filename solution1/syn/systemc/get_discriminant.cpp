// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "get_discriminant.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic get_discriminant::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic get_discriminant::ap_const_logic_0 = sc_dt::Log_0;

get_discriminant::get_discriminant(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_virtual_clock.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "get_discriminant_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, jet_tk13DIP_V, "(port)jet_tk13DIP_V");
    sc_trace(mVcdFile, jet_muPt_V, "(port)jet_muPt_V");
    sc_trace(mVcdFile, jet_d_V, "(port)jet_d_V");
#endif

    }
    mHdltvinHandle.open("get_discriminant.hdltvin.dat");
    mHdltvoutHandle.open("get_discriminant.hdltvout.dat");
}

get_discriminant::~get_discriminant() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void get_discriminant::thread_ap_done() {
    ap_done = ap_start.read();
}

void get_discriminant::thread_ap_idle() {
    ap_idle = ap_const_logic_1;
}

void get_discriminant::thread_ap_ready() {
    ap_ready = ap_start.read();
}

void get_discriminant::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"jet_tk13DIP_V\" :  \"" << jet_tk13DIP_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"jet_muPt_V\" :  \"" << jet_muPt_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"jet_d_V\" :  \"" << jet_d_V.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

