// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"

class VDut__Syms;
VL_MODULE(VDut___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_a,7,0);
    VL_IN8(io_b,7,0);
    VL_OUT8(io_result,7,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ Dut__DOT__carryAdder_1_io_result;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_7;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_6;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_5;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_4;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_3;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_2;
    CData/*0:0*/ Dut__DOT__carryAdder_1__DOT__c_1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VDut__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VDut___024root(const char* name);
    ~VDut___024root();
    VL_UNCOPYABLE(VDut___024root);

    // INTERNAL METHODS
    void __Vconfigure(VDut__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
