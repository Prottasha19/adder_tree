// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimAsynchronousDut.h for the primary calling header

#ifndef VERILATED_VSIMASYNCHRONOUSDUT___024ROOT_H_
#define VERILATED_VSIMASYNCHRONOUSDUT___024ROOT_H_  // guard

#include "verilated.h"

class VSimAsynchronousDut__Syms;
VL_MODULE(VSimAsynchronousDut___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_a,7,0);
    VL_IN8(io_b,7,0);
    VL_IN8(io_c,7,0);
    VL_OUT8(io_result,7,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);

    // INTERNAL VARIABLES
    VSimAsynchronousDut__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimAsynchronousDut___024root(const char* name);
    ~VSimAsynchronousDut___024root();
    VL_UNCOPYABLE(VSimAsynchronousDut___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimAsynchronousDut__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
