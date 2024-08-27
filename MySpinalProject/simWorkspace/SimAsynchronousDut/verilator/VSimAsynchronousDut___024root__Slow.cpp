// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimAsynchronousDut.h for the primary calling header

#include "verilated.h"

#include "VSimAsynchronousDut__Syms.h"
#include "VSimAsynchronousDut___024root.h"

void VSimAsynchronousDut___024root___ctor_var_reset(VSimAsynchronousDut___024root* vlSelf);

VSimAsynchronousDut___024root::VSimAsynchronousDut___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimAsynchronousDut___024root___ctor_var_reset(this);
}

void VSimAsynchronousDut___024root::__Vconfigure(VSimAsynchronousDut__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimAsynchronousDut___024root::~VSimAsynchronousDut___024root() {
}
