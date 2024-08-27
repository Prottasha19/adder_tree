// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDut.h for the primary calling header

#include "verilated.h"

#include "VDut__Syms.h"
#include "VDut___024root.h"

void VDut___024root___ctor_var_reset(VDut___024root* vlSelf);

VDut___024root::VDut___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VDut___024root___ctor_var_reset(this);
}

void VDut___024root::__Vconfigure(VDut__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VDut___024root::~VDut___024root() {
}
