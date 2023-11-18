// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========
// Begin mtask footprint all: 
CData/*0:0*/ VTestHarness::__Vtable1_TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__enq_ptr_value[32];
CData/*0:0*/ VTestHarness::__Vtable1_TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__deq_ptr_value[32];
CData/*0:0*/ VTestHarness::__Vtable1_TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__maybe_full[32];

VL_CTOR_IMP(VTestHarness) {
    VTestHarness__Syms* __restrict vlSymsp = __VlSymsp = new VTestHarness__Syms(this, name());
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, VTestHarness___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestHarness::__Vconfigure(VTestHarness__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

VTestHarness::~VTestHarness() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}
