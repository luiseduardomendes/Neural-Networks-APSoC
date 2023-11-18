// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceFullThis__4880(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37188);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*16415:0*/ __Vtemp27964[513];
    WData/*16415:0*/ __Vtemp27965[513];
    WData/*4159:0*/ __Vtemp27970[130];
    WData/*4159:0*/ __Vtemp27973[130];
    WData/*4159:0*/ __Vtemp27976[130];
    WData/*4159:0*/ __Vtemp27977[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        VL_EXTEND_WI(16386,3, __Vtemp27964, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                              ? (1U 
                                                 | (6U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                              : 0U));
        VL_SHIFTL_WWI(16386,16386,14, __Vtemp27965, __Vtemp27964, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp27970[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[0U] : 0U);
        __Vtemp27970[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[1U] : 0U);
        __Vtemp27970[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[2U] : 0U);
        __Vtemp27970[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[3U] : 0U);
        __Vtemp27970[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[4U] : 0U);
        __Vtemp27970[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[5U] : 0U);
        __Vtemp27970[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[6U] : 0U);
        __Vtemp27970[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[7U] : 0U);
        __Vtemp27970[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[8U] : 0U);
        __Vtemp27970[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27965[9U] : 0U);
        __Vtemp27970[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27965[0xaU]
                               : 0U);
        __Vtemp27970[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27965[0xbU]
                               : 0U);
        __Vtemp27970[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27965[0xcU]
                               : 0U);
        __Vtemp27970[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27965[0xdU]
                               : 0U);
        __Vtemp27970[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27965[0xeU]
                               : 0U);
        __Vtemp27970[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27965[0xfU]
                               : 0U);
        __Vtemp27970[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x10U]
                                : 0U);
        __Vtemp27970[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x11U]
                                : 0U);
        __Vtemp27970[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x12U]
                                : 0U);
        __Vtemp27970[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x13U]
                                : 0U);
        __Vtemp27970[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x14U]
                                : 0U);
        __Vtemp27970[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x15U]
                                : 0U);
        __Vtemp27970[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x16U]
                                : 0U);
        __Vtemp27970[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x17U]
                                : 0U);
        __Vtemp27970[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x18U]
                                : 0U);
        __Vtemp27970[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x19U]
                                : 0U);
        __Vtemp27970[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x1aU]
                                : 0U);
        __Vtemp27970[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x1bU]
                                : 0U);
        __Vtemp27970[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x1cU]
                                : 0U);
        __Vtemp27970[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x1dU]
                                : 0U);
        __Vtemp27970[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x1eU]
                                : 0U);
        __Vtemp27970[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x1fU]
                                : 0U);
        __Vtemp27970[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x20U]
                                : 0U);
        __Vtemp27970[0x21U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x21U]
                                : 0U);
        __Vtemp27970[0x22U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x22U]
                                : 0U);
        __Vtemp27970[0x23U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x23U]
                                : 0U);
        __Vtemp27970[0x24U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x24U]
                                : 0U);
        __Vtemp27970[0x25U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x25U]
                                : 0U);
        __Vtemp27970[0x26U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x26U]
                                : 0U);
        __Vtemp27970[0x27U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x27U]
                                : 0U);
        __Vtemp27970[0x28U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x28U]
                                : 0U);
        __Vtemp27970[0x29U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x29U]
                                : 0U);
        __Vtemp27970[0x2aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x2aU]
                                : 0U);
        __Vtemp27970[0x2bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x2bU]
                                : 0U);
        __Vtemp27970[0x2cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x2cU]
                                : 0U);
        __Vtemp27970[0x2dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x2dU]
                                : 0U);
        __Vtemp27970[0x2eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x2eU]
                                : 0U);
        __Vtemp27970[0x2fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x2fU]
                                : 0U);
        __Vtemp27970[0x30U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x30U]
                                : 0U);
        __Vtemp27970[0x31U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x31U]
                                : 0U);
        __Vtemp27970[0x32U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x32U]
                                : 0U);
        __Vtemp27970[0x33U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x33U]
                                : 0U);
        __Vtemp27970[0x34U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x34U]
                                : 0U);
        __Vtemp27970[0x35U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x35U]
                                : 0U);
        __Vtemp27970[0x36U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x36U]
                                : 0U);
        __Vtemp27970[0x37U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x37U]
                                : 0U);
        __Vtemp27970[0x38U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x38U]
                                : 0U);
        __Vtemp27970[0x39U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x39U]
                                : 0U);
        __Vtemp27970[0x3aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x3aU]
                                : 0U);
        __Vtemp27970[0x3bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x3bU]
                                : 0U);
        __Vtemp27970[0x3cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x3cU]
                                : 0U);
        __Vtemp27970[0x3dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x3dU]
                                : 0U);
        __Vtemp27970[0x3eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x3eU]
                                : 0U);
        __Vtemp27970[0x3fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x3fU]
                                : 0U);
        __Vtemp27970[0x40U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x40U]
                                : 0U);
        __Vtemp27970[0x41U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x41U]
                                : 0U);
        __Vtemp27970[0x42U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x42U]
                                : 0U);
        __Vtemp27970[0x43U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x43U]
                                : 0U);
        __Vtemp27970[0x44U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x44U]
                                : 0U);
        __Vtemp27970[0x45U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x45U]
                                : 0U);
        __Vtemp27970[0x46U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x46U]
                                : 0U);
        __Vtemp27970[0x47U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x47U]
                                : 0U);
        __Vtemp27970[0x48U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x48U]
                                : 0U);
        __Vtemp27970[0x49U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x49U]
                                : 0U);
        __Vtemp27970[0x4aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x4aU]
                                : 0U);
        __Vtemp27970[0x4bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x4bU]
                                : 0U);
        __Vtemp27970[0x4cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x4cU]
                                : 0U);
        __Vtemp27970[0x4dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x4dU]
                                : 0U);
        __Vtemp27970[0x4eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x4eU]
                                : 0U);
        __Vtemp27970[0x4fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x4fU]
                                : 0U);
        __Vtemp27970[0x50U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x50U]
                                : 0U);
        __Vtemp27970[0x51U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x51U]
                                : 0U);
        __Vtemp27970[0x52U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x52U]
                                : 0U);
        __Vtemp27970[0x53U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x53U]
                                : 0U);
        __Vtemp27970[0x54U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x54U]
                                : 0U);
        __Vtemp27970[0x55U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x55U]
                                : 0U);
        __Vtemp27970[0x56U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x56U]
                                : 0U);
        __Vtemp27970[0x57U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x57U]
                                : 0U);
        __Vtemp27970[0x58U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x58U]
                                : 0U);
        __Vtemp27970[0x59U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x59U]
                                : 0U);
        __Vtemp27970[0x5aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x5aU]
                                : 0U);
        __Vtemp27970[0x5bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x5bU]
                                : 0U);
        __Vtemp27970[0x5cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x5cU]
                                : 0U);
        __Vtemp27970[0x5dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x5dU]
                                : 0U);
        __Vtemp27970[0x5eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x5eU]
                                : 0U);
        __Vtemp27970[0x5fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x5fU]
                                : 0U);
        __Vtemp27970[0x60U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x60U]
                                : 0U);
        __Vtemp27970[0x61U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x61U]
                                : 0U);
        __Vtemp27970[0x62U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x62U]
                                : 0U);
        __Vtemp27970[0x63U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x63U]
                                : 0U);
        __Vtemp27970[0x64U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x64U]
                                : 0U);
        __Vtemp27970[0x65U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x65U]
                                : 0U);
        __Vtemp27970[0x66U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x66U]
                                : 0U);
        __Vtemp27970[0x67U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x67U]
                                : 0U);
        __Vtemp27970[0x68U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x68U]
                                : 0U);
        __Vtemp27970[0x69U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x69U]
                                : 0U);
        __Vtemp27970[0x6aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x6aU]
                                : 0U);
        __Vtemp27970[0x6bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x6bU]
                                : 0U);
        __Vtemp27970[0x6cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x6cU]
                                : 0U);
        __Vtemp27970[0x6dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x6dU]
                                : 0U);
        __Vtemp27970[0x6eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x6eU]
                                : 0U);
        __Vtemp27970[0x6fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x6fU]
                                : 0U);
        __Vtemp27970[0x70U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x70U]
                                : 0U);
        __Vtemp27970[0x71U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x71U]
                                : 0U);
        __Vtemp27970[0x72U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x72U]
                                : 0U);
        __Vtemp27970[0x73U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x73U]
                                : 0U);
        __Vtemp27970[0x74U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x74U]
                                : 0U);
        __Vtemp27970[0x75U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x75U]
                                : 0U);
        __Vtemp27970[0x76U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x76U]
                                : 0U);
        __Vtemp27970[0x77U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x77U]
                                : 0U);
        __Vtemp27970[0x78U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x78U]
                                : 0U);
        __Vtemp27970[0x79U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x79U]
                                : 0U);
        __Vtemp27970[0x7aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x7aU]
                                : 0U);
        __Vtemp27970[0x7bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x7bU]
                                : 0U);
        __Vtemp27970[0x7cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x7cU]
                                : 0U);
        __Vtemp27970[0x7dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x7dU]
                                : 0U);
        __Vtemp27970[0x7eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x7eU]
                                : 0U);
        __Vtemp27970[0x7fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x7fU]
                                : 0U);
        __Vtemp27970[0x80U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x80U]
                                : 0U);
        __Vtemp27970[0x81U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27965[0x81U]
                                : 0U);
        vcdp->fullWData(oldp+0,(__Vtemp27970),4160);
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp27973, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp27976[0U] = (7U & (__Vtemp27973[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp27976[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp27977, __Vtemp27976);
        vcdp->fullCData(oldp+130,((0xfU & __Vtemp27977[0U])),4);
        vcdp->fullQData(oldp+131,((((0xffU == (0xffU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                  >> 3U)))
                                     ? (0U == (0x100U 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                  >> 3U)))
                                     : ((0xfeU == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U)))
                                         ? (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U)))
                                         : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1763)))
                                    ? ((0xffU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                        : ((0xfeU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                            : ((0xfdU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                : (
                                                   (0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                        : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_2013))))))))
                                    : VL_ULL(0))),64);
    }
}

void VTestHarness::traceFullThis__4883(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37321);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source_io_enq_ready));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink_io_deq_valid));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeAcks));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_65));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_90));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn));
        vcdp->fullIData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal),32);
        vcdp->fullCData(oldp+9,((0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                          >> 0x18U))),8);
        vcdp->fullBit(oldp+10,((0U == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                                >> 0x18U)))));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__wrAccessRegisterCommand));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F96));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_96));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F96));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F0));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F0));
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4));
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F31));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_31));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F31));
        vcdp->fullBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0));
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F23));
        vcdp->fullBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_23));
        vcdp->fullBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F23));
        vcdp->fullBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4));
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F35));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_35));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F35));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8));
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F78));
        vcdp->fullBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_78));
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F78));
        vcdp->fullBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12));
        vcdp->fullBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F91));
        vcdp->fullBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_91));
        vcdp->fullBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F91));
        vcdp->fullBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16));
        vcdp->fullBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F11));
        vcdp->fullBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_11));
        vcdp->fullBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F11));
        vcdp->fullBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20));
        vcdp->fullBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F19));
        vcdp->fullBit(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_19));
        vcdp->fullBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F19));
    }
}

void VTestHarness::traceFullThis__4885(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37368);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F74));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_74));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F74));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F86));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_86));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F86));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F27));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_27));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F27));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F4));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_4));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F4));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F82));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_82));
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F82));
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F70));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_70));
        vcdp->fullBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F70));
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48));
        vcdp->fullBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F39));
        vcdp->fullBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_39));
        vcdp->fullBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F39));
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F15));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_15));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F15));
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56));
        vcdp->fullBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F100));
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_100));
        vcdp->fullBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F100));
        vcdp->fullBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60));
        vcdp->fullBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec));
        vcdp->fullBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__regAccessRegisterCommand));
        vcdp->fullBit(oldp+39,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) 
                                & (0U != (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                                   >> 0x18U))))));
        vcdp->fullBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F8));
        vcdp->fullBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_8));
        vcdp->fullBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_10));
        vcdp->fullBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_97));
        vcdp->fullBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_98));
        vcdp->fullBit(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_99));
        vcdp->fullBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_1));
    }
}

void VTestHarness::traceFullThis__4887(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37415);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_2));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_3));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_32));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_33));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_34));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_24));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_25));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_26));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_36));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_37));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_38));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_79));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_80));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_81));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_92));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_93));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_94));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_12));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_13));
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_14));
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_20));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_21));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_22));
        vcdp->fullBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_75));
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_76));
        vcdp->fullBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_77));
        vcdp->fullBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_87));
        vcdp->fullBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_88));
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_89));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_28));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_29));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_30));
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_5));
        vcdp->fullBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_6));
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_7));
        vcdp->fullBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_83));
        vcdp->fullBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_84));
        vcdp->fullBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_85));
        vcdp->fullBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_71));
        vcdp->fullBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_72));
        vcdp->fullBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_73));
        vcdp->fullBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_40));
        vcdp->fullBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_41));
        vcdp->fullBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_42));
        vcdp->fullBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_16));
        vcdp->fullBit(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_17));
        vcdp->fullBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_18));
        vcdp->fullBit(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_101));
        vcdp->fullBit(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_102));
        vcdp->fullBit(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_103));
        vcdp->fullBit(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorBusy));
    }
}

void VTestHarness::traceFullThis__4889(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37466);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp27993[4];
    // Body
    {
        vcdp->fullIData(oldp+0,((0xffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal)),24);
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+3,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_23)),4);
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__ridx_incremented) 
                                  != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__ridx_incremented));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_widx_bin) 
                                  + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1)))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented) 
                                  != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented));
        vcdp->fullCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode),3);
        vcdp->fullSData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address),9);
        vcdp->fullCData(oldp+11,((0x7fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))),7);
        vcdp->fullCData(oldp+12,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))),3);
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1));
        vcdp->fullBit(oldp+15,((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+16,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))));
        vcdp->fullCData(oldp+17,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                        >> 2U))),3);
        vcdp->fullBit(oldp+18,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                      >> 3U))));
        vcdp->fullCData(oldp+19,((5U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                        >> 2U))),3);
        vcdp->fullBit(oldp+20,((1U & ((IData)(1U) << 
                                      (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                             >> 3U))))));
        vcdp->fullBit(oldp+21,((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
        VL_EXTEND_WI(128,9, __Vtemp27993, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
        vcdp->fullWData(oldp+22,(__Vtemp27993),128);
    }
}

void VTestHarness::traceFullThis__4892(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37492);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp28001[4];
    // Body
    {
        vcdp->fullCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode),3);
        vcdp->fullBit(oldp+1,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode))));
        VL_EXTEND_WI(128,9, __Vtemp28001, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
        vcdp->fullBit(oldp+2,((0U == (3U & __Vtemp28001[0U]))));
        vcdp->fullBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits 
                                     >> 0x10U))));
        vcdp->fullCData(oldp+4,((0x7fU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                                  >> 0x22U)))),7);
        vcdp->fullIData(oldp+5,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                         >> 2U))),32);
        vcdp->fullCData(oldp+6,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))),2);
        vcdp->fullIData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits),32);
        vcdp->fullQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits),41);
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode))));
        vcdp->fullBit(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_a_ready)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready)))));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__uart_sim_0_io_uart_rxd));
        vcdp->fullQData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data),64);
        vcdp->fullQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data),64);
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data));
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_d_ready));
        vcdp->fullBit(oldp+20,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
        vcdp->fullBit(oldp+21,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)))));
        vcdp->fullCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data),3);
        vcdp->fullIData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data),21);
        vcdp->fullQData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data),64);
        vcdp->fullCData(oldp+26,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))),3);
        vcdp->fullBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_d_ready));
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid));
        vcdp->fullCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode),3);
        vcdp->fullCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_param),3);
        vcdp->fullCData(oldp+32,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))),2);
        vcdp->fullSData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source),11);
        vcdp->fullSData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address),12);
    }
}

void VTestHarness::traceFullThis__4899(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37527);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28005[9];
    // Body
    {
        vcdp->fullCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask),8);
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))));
        vcdp->fullCData(oldp+2,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))),3);
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid));
        vcdp->fullCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode),3);
        vcdp->fullIData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address),26);
        vcdp->fullCData(oldp+7,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))),3);
        vcdp->fullQData(oldp+8,((((3U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 0xeU))) 
                                  | ((2U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 0xeU)))
                                      ? (0x7ffU == 
                                         (0x7ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                      : (0U == (0x7ffU 
                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))))
                                  ? ((3U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 0xeU)))
                                      ? VL_ULL(0) : 
                                     ((2U == (3U & 
                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 0xeU)))
                                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_
                                       : ((1U == (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 0xeU)))
                                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0
                                           : (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__ipi_0)))))
                                  : VL_ULL(0))),64);
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready));
        __Vtemp28005[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28005[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28005[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28005[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28005[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28005[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28005[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28005[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28005[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+11,(__Vtemp28005),260);
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid));
        vcdp->fullCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode),3);
        vcdp->fullCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param),2);
    }
}

void VTestHarness::traceFullThis__4901(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37552);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28013[9];
    WData/*287:0*/ __Vtemp28014[9];
    // Body
    {
        vcdp->fullCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size),4);
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source),7);
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_8_d_ready));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_7_d_ready));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_d_ready));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid));
        vcdp->fullCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size),3);
        vcdp->fullCData(oldp+12,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                           >> 4U))),7);
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_d_ready));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_d_ready));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_d_ready));
        vcdp->fullBit(oldp+19,((((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                                     | (1U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                                    | (0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                                   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                  | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x40U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))));
        vcdp->fullSData(oldp+20,((0x1ffU & (~ (0xffffffU 
                                               & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                                                  >> 3U))))),9);
        vcdp->fullBit(oldp+21,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))));
        __Vtemp28013[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp28013[1U] = 0U;
        __Vtemp28013[2U] = 0U;
        __Vtemp28013[3U] = 0U;
        __Vtemp28013[4U] = 0U;
        __Vtemp28013[5U] = 0U;
        __Vtemp28013[6U] = 0U;
        __Vtemp28013[7U] = 0U;
        __Vtemp28013[8U] = 0U;
        VL_EXTEND_WW(260,259, __Vtemp28014, __Vtemp28013);
        vcdp->fullCData(oldp+22,((0xfU & __Vtemp28014[0U])),4);
        vcdp->fullBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready));
    }
}

void VTestHarness::traceFullThis__4903(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37576);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->fullCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size),4);
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source),7);
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied));
        vcdp->fullSData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_valid),9);
        vcdp->fullIData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter),18);
        vcdp->fullIData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_unready),18);
        vcdp->fullSData(oldp+10,((0x1ffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2)))),9);
        vcdp->fullBit(oldp+11,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2)))));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0));
        vcdp->fullBit(oldp+14,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 1U)))));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1));
        vcdp->fullBit(oldp+17,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 2U)))));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2));
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2));
        vcdp->fullBit(oldp+20,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 3U)))));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3));
        vcdp->fullBit(oldp+23,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 4U)))));
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4));
        vcdp->fullBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4));
        vcdp->fullBit(oldp+26,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 5U)))));
        vcdp->fullBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5));
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_5));
        vcdp->fullBit(oldp+29,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 6U)))));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_6));
        vcdp->fullBit(oldp+32,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                         >> 7U)))));
        vcdp->fullBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_7));
    }
}

void VTestHarness::traceFullThis__4905(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37610);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_7));
        vcdp->fullBit(oldp+1,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 8U)))));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_8));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_8));
        vcdp->fullBit(oldp+4,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))));
        vcdp->fullCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size),4);
        vcdp->fullCData(oldp+6,((7U & (~ (0x3ffffU 
                                          & (((IData)(0x3fU) 
                                              << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
                                             >> 3U))))),3);
        vcdp->fullBit(oldp+7,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))));
        vcdp->fullCData(oldp+8,(((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                  ? (7U & (~ (0x3ffffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
                                                 >> 3U))))
                                  : 0U)),3);
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))));
        vcdp->fullBit(oldp+10,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2))));
        vcdp->fullBit(oldp+11,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3))));
        vcdp->fullBit(oldp+12,((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4))));
        vcdp->fullBit(oldp+13,(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5))));
        vcdp->fullBit(oldp+14,((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6))));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_8));
    }
}

void VTestHarness::traceFullThis__4907(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37626);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28038[9];
    WData/*287:0*/ __Vtemp28039[9];
    WData/*4159:0*/ __Vtemp28040[130];
    WData/*287:0*/ __Vtemp28043[9];
    WData/*287:0*/ __Vtemp28046[9];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->fullCData(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5)
                                  ? ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                      ? (7U & (~ (0x3ffffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
                                                     >> 3U))))
                                      : 0U) : 0U)),3);
        vcdp->fullBit(oldp+1,((((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)) 
                                    | (1U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                                   | (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U)))) 
                                  | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                                 | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                                | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                               | (0x40U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))));
        vcdp->fullSData(oldp+2,((0x1ffU & (~ (0xffffffU 
                                              & (((IData)(0xfffU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
                                                 >> 3U))))),9);
        vcdp->fullBit(oldp+3,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))));
        __Vtemp28038[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp28038[1U] = 0U;
        __Vtemp28038[2U] = 0U;
        __Vtemp28038[3U] = 0U;
        __Vtemp28038[4U] = 0U;
        __Vtemp28038[5U] = 0U;
        __Vtemp28038[6U] = 0U;
        __Vtemp28038[7U] = 0U;
        __Vtemp28038[8U] = 0U;
        VL_EXTEND_WW(260,259, __Vtemp28039, __Vtemp28038);
        vcdp->fullCData(oldp+4,((0xfU & __Vtemp28039[0U])),4);
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28040[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+10,(__Vtemp28040),4160);
        __Vtemp28043[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28043[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28043[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28043[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28043[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28043[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28043[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28043[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28043[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+140,(__Vtemp28043),260);
        __Vtemp28046[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28046[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28046[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28046[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28046[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28046[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28046[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28046[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28046[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+149,(__Vtemp28046),260);
        vcdp->fullBit(oldp+158,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_valid));
    }
}

void VTestHarness::traceFullThis__4909(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37785);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28052[9];
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop))));
        vcdp->fullBit(oldp+3,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                        >> 2U)))));
        __Vtemp28052[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28052[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28052[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28052[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28052[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28052[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28052[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28052[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28052[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+4,(__Vtemp28052),260);
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size),3);
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat));
        vcdp->fullCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size),3);
        vcdp->fullCData(oldp+17,((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source))),3);
        vcdp->fullBit(oldp+18,((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source)))));
        vcdp->fullCData(oldp+19,((0xfU & ((IData)(1U) 
                                          << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))),4);
        vcdp->fullCData(oldp+20,((7U & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))))),3);
        vcdp->fullBit(oldp+21,((1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
                                      | (1U & (((IData)(1U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                                               >> 3U))))));
        vcdp->fullCData(oldp+22,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                        >> 4U))),3);
        vcdp->fullCData(oldp+23,((0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6))),4);
        vcdp->fullCData(oldp+24,((3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                        >> 2U))),2);
        vcdp->fullCData(oldp+25,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_8))),2);
        vcdp->fullCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size),3);
        vcdp->fullBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
        vcdp->fullBit(oldp+28,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_d_ready) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop))));
        vcdp->fullCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag),3);
    }
}

void VTestHarness::traceFullThis__4911(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37815);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28066[9];
    WData/*287:0*/ __Vtemp28067[9];
    WData/*287:0*/ __Vtemp28070[9];
    WData/*287:0*/ __Vtemp28073[9];
    // Body
    {
        vcdp->fullCData(oldp+0,((0x3fU & (~ (0x1fffU 
                                             & ((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))))),6);
        vcdp->fullCData(oldp+1,((7U & (~ (0x3ffU & 
                                          ((IData)(7U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))))),3);
        vcdp->fullBit(oldp+2,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                        >> 2U)))));
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__old_gennum1),3);
        vcdp->fullBit(oldp+4,((((((((0x24U == (0x7fU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                  >> 4U))) 
                                    | (1U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                               >> 8U)))) 
                                   | (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                   >> 8U)))) 
                                  | (0x20U == (0x7fU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x21U == (0x7fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (0x22U == (0x7fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (0x40U == (0x7fU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                             >> 4U))))));
        vcdp->fullCData(oldp+5,((7U & (~ (0x3ffU & 
                                          (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                           >> 3U))))),3);
        __Vtemp28066[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp28066[1U] = 0U;
        __Vtemp28066[2U] = 0U;
        __Vtemp28066[3U] = 0U;
        __Vtemp28066[4U] = 0U;
        __Vtemp28066[5U] = 0U;
        __Vtemp28066[6U] = 0U;
        __Vtemp28066[7U] = 0U;
        __Vtemp28066[8U] = 0U;
        VL_EXTEND_WW(260,259, __Vtemp28067, __Vtemp28066);
        vcdp->fullCData(oldp+6,((0xfU & __Vtemp28067[0U])),4);
        __Vtemp28070[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28070[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28070[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28070[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28070[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28070[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28070[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28070[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28070[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+7,(__Vtemp28070),260);
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done));
        __Vtemp28073[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28073[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28073[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28073[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28073[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28073[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28073[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28073[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28073[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+17,(__Vtemp28073),260);
    }
}

void VTestHarness::traceFullThis__4913(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37841);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28085[130];
    WData/*287:0*/ __Vtemp28088[9];
    WData/*4159:0*/ __Vtemp28089[130];
    WData/*287:0*/ __Vtemp28092[9];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter_auto_out_d_ready));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28085[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+2,(__Vtemp28085),4160);
        vcdp->fullBit(oldp+132,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty));
        vcdp->fullBit(oldp+133,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->fullBit(oldp+134,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))));
        vcdp->fullBit(oldp+135,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
        vcdp->fullBit(oldp+136,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->fullBit(oldp+137,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        __Vtemp28088[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28088[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28088[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28088[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28088[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28088[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28088[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28088[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28088[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+138,(__Vtemp28088),260);
        vcdp->fullBit(oldp+147,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter_auto_out_d_ready));
        vcdp->fullBit(oldp+148,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28089[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+149,(__Vtemp28089),4160);
        vcdp->fullBit(oldp+279,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        __Vtemp28092[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28092[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28092[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28092[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28092[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28092[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28092[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28092[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28092[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->fullWData(oldp+280,(__Vtemp28092),260);
        vcdp->fullBit(oldp+289,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready));
        vcdp->fullBit(oldp+290,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen));
        vcdp->fullBit(oldp+291,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_1));
        vcdp->fullBit(oldp+292,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_2));
        vcdp->fullBit(oldp+293,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_3));
        vcdp->fullBit(oldp+294,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_4));
        vcdp->fullBit(oldp+295,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)))));
        vcdp->fullBit(oldp+296,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_csr_stall));
        vcdp->fullBit(oldp+297,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld));
        vcdp->fullBit(oldp+298,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception));
        vcdp->fullBit(oldp+299,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_csr_stall)))));
        vcdp->fullCData(oldp+300,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
        vcdp->fullBit(oldp+301,((1U & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0) 
                                         | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1))
                                         ? (3U & ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                                                              [0U] 
                                                              >> 0x20U)))))
                                         : 0U) >> 1U))));
        vcdp->fullBit(oldp+302,((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))));
        vcdp->fullBit(oldp+303,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))
                                  ? 0U : (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1)))));
    }
}

void VTestHarness::traceFullThis__4914(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38145);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))));
        vcdp->fullBit(oldp+1,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))
                                ? 0U : (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1)))));
        vcdp->fullQData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask),64);
        vcdp->fullBit(oldp+4,((0U != (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                              >> 0x20U)))));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_9));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_12));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9));
        vcdp->fullBit(oldp+8,((0xffffffffU == (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                       >> 0x20U)))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9) 
                               & (0xffffffffU == (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                          >> 0x20U))))));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12) 
                                & (0xffffffffU == (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                           >> 0x20U))))));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0));
        vcdp->fullCData(oldp+14,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1))
                                   ? (3U & ((IData)(1U) 
                                            << (1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                                                           [0U] 
                                                           >> 0x20U)))))
                                   : 0U)),2);
        vcdp->fullBit(oldp+15,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))));
        vcdp->fullBit(oldp+16,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                              >> 1U)))));
        vcdp->fullBit(oldp+17,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                              >> 0x20U)))));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))));
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done));
    }
}

void VTestHarness::traceFullThis__4916(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38166);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28093[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28093[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+0,(__Vtemp28093),4160);
        vcdp->fullCData(oldp+130,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1),2);
        vcdp->fullCData(oldp+131,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))
                                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))),2);
        vcdp->fullCData(oldp+132,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1),2);
        vcdp->fullCData(oldp+133,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))
                                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))),2);
        vcdp->fullSData(oldp+134,((0x1fffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                              >> 3U))),13);
        vcdp->fullCData(oldp+135,((3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 0xeU))),2);
        vcdp->fullSData(oldp+136,((0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U))),13);
        vcdp->fullBit(oldp+137,((1U & (((IData)(1U) 
                                        << (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 0xeU))) 
                                       >> 1U))));
        vcdp->fullBit(oldp+138,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0));
        vcdp->fullQData(oldp+139,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask),64);
        vcdp->fullBit(oldp+141,((0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)))));
        vcdp->fullBit(oldp+142,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready));
        vcdp->fullBit(oldp+143,((0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                            >> 8U))))));
        vcdp->fullBit(oldp+144,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1));
        vcdp->fullBit(oldp+145,((0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                            >> 0x10U))))));
        vcdp->fullBit(oldp+146,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2));
        vcdp->fullBit(oldp+147,((0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                            >> 0x18U))))));
        vcdp->fullBit(oldp+148,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3));
        vcdp->fullBit(oldp+149,((0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                            >> 0x20U))))));
        vcdp->fullBit(oldp+150,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4));
        vcdp->fullBit(oldp+151,((0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                            >> 0x28U))))));
        vcdp->fullBit(oldp+152,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5));
    }
}

void VTestHarness::traceFullThis__4918(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38319);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                          >> 0x30U))))));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6));
        vcdp->fullBit(oldp+2,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                          >> 0x38U))))));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7));
        vcdp->fullCData(oldp+4,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 8U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 8U))))),8);
        vcdp->fullCData(oldp+5,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready)
                                           ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                           : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0)))),8);
        vcdp->fullCData(oldp+6,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 0x18U))))),8);
        vcdp->fullCData(oldp+7,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x10U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 0x10U))))),8);
        vcdp->fullCData(oldp+8,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x28U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 0x28U))))),8);
        vcdp->fullCData(oldp+9,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x20U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 0x20U))))),8);
        vcdp->fullCData(oldp+10,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x38U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                       >> 0x38U))))),8);
        vcdp->fullCData(oldp+11,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x30U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                       >> 0x30U))))),8);
    }
}

void VTestHarness::traceFullThis__4920(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38331);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (((IData)(1U) << 
                                      (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 0xeU))) 
                                     >> 2U))));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15));
        vcdp->fullCData(oldp+10,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 8U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 8U))))),8);
        vcdp->fullCData(oldp+11,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8)
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_)))),8);
        vcdp->fullCData(oldp+12,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x18U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 0x18U))))),8);
        vcdp->fullCData(oldp+13,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x10U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 0x10U))))),8);
        vcdp->fullCData(oldp+14,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x28U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 0x28U))))),8);
        vcdp->fullCData(oldp+15,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x20U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 0x20U))))),8);
        vcdp->fullCData(oldp+16,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x38U))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 0x38U))))),8);
    }
}

void VTestHarness::traceFullThis__4922(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38348);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullCData(oldp+0,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x30U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 0x30U))))),8);
        vcdp->fullBit(oldp+1,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask))));
        vcdp->fullBit(oldp+2,((1U & ((IData)(1U) << 
                                     (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 0xeU))))));
        vcdp->fullBit(oldp+3,((0xfU & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                                         & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                        & ((IData)(1U) 
                                           << (3U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 0xeU)))) 
                                       & (0U == (0x7ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))))));
        vcdp->fullBit(oldp+4,((0xfU & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                                          & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 0xeU)))) 
                                        & (0U == (0x7ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)))));
        vcdp->fullBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U))));
        vcdp->fullBit(oldp+6,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U)))));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 1U))));
    }
}

void VTestHarness::traceFullThis__4924(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38358);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 1U)))));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_3));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+9,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+10,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                   & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                   & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceFullThis__4926(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38377);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28095[130];
    WData/*255:0*/ __Vtemp28096[8];
    WData/*255:0*/ __Vtemp28097[8];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask),8);
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28095[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+11,(__Vtemp28095),4160);
        vcdp->fullSData(oldp+141,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U))),9);
        vcdp->fullCData(oldp+142,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U))),8);
        vcdp->fullSData(oldp+143,((0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U))),9);
        __Vtemp28096[0U] = 1U;
        __Vtemp28096[1U] = 0U;
        __Vtemp28096[2U] = 0U;
        __Vtemp28096[3U] = 0U;
        __Vtemp28096[4U] = 0U;
        __Vtemp28096[5U] = 0U;
        __Vtemp28096[6U] = 0U;
        __Vtemp28096[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28097, __Vtemp28096, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+144,((1U & (__Vtemp28097[1U] 
                                       >> 1U))));
    }
}

void VTestHarness::traceFullThis__4928(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38522);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28101[8];
    WData/*255:0*/ __Vtemp28102[8];
    WData/*255:0*/ __Vtemp28103[8];
    WData/*255:0*/ __Vtemp28104[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345));
        vcdp->fullQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1),64);
        vcdp->fullBit(oldp+3,((0x3ffU == (0x3ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U))))));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449));
        vcdp->fullBit(oldp+5,((0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)))));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448));
        __Vtemp28101[0U] = 1U;
        __Vtemp28101[1U] = 0U;
        __Vtemp28101[2U] = 0U;
        __Vtemp28101[3U] = 0U;
        __Vtemp28101[4U] = 0U;
        __Vtemp28101[5U] = 0U;
        __Vtemp28101[6U] = 0U;
        __Vtemp28101[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28102, __Vtemp28101, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+7,((1U & __Vtemp28102[1U])));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631));
        vcdp->fullSData(oldp+10,((0x3ffU & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                    >> 0x20U)))),10);
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
                                & (0x3ffU == (0x3ffU 
                                              & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                         >> 0x20U)))))));
        vcdp->fullBit(oldp+12,((0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)))));
        vcdp->fullBit(oldp+13,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 8U))))));
        vcdp->fullBit(oldp+14,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x10U))))));
        vcdp->fullBit(oldp+15,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x18U))))));
        vcdp->fullBit(oldp+16,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x20U))))));
        vcdp->fullBit(oldp+17,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x28U))))));
        vcdp->fullBit(oldp+18,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x30U))))));
        vcdp->fullBit(oldp+19,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x38U))))));
        __Vtemp28103[0U] = 1U;
        __Vtemp28103[1U] = 0U;
        __Vtemp28103[2U] = 0U;
        __Vtemp28103[3U] = 0U;
        __Vtemp28103[4U] = 0U;
        __Vtemp28103[5U] = 0U;
        __Vtemp28103[6U] = 0U;
        __Vtemp28103[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28104, __Vtemp28103, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+20,((1U & (__Vtemp28104[3U] 
                                      >> 0xeU))));
    }
}

void VTestHarness::traceFullThis__4930(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38543);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28109[8];
    WData/*255:0*/ __Vtemp28110[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28109[0U] = 1U;
        __Vtemp28109[1U] = 0U;
        __Vtemp28109[2U] = 0U;
        __Vtemp28109[3U] = 0U;
        __Vtemp28109[4U] = 0U;
        __Vtemp28109[5U] = 0U;
        __Vtemp28109[6U] = 0U;
        __Vtemp28109[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28110, __Vtemp28109, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+9,((1U & (__Vtemp28110[3U] 
                                     >> 0xaU))));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                                & (0xffU == (0xffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 8U)))))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x10U)))))));
    }
}

void VTestHarness::traceFullThis__4932(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38557);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28113[8];
    WData/*255:0*/ __Vtemp28114[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28113[0U] = 1U;
        __Vtemp28113[1U] = 0U;
        __Vtemp28113[2U] = 0U;
        __Vtemp28113[3U] = 0U;
        __Vtemp28113[4U] = 0U;
        __Vtemp28113[5U] = 0U;
        __Vtemp28113[6U] = 0U;
        __Vtemp28113[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28114, __Vtemp28113, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+5,((1U & (__Vtemp28114[3U] 
                                     >> 0xdU))));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x18U)))))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x20U)))))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x28U)))))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x30U)))))));
    }
}

void VTestHarness::traceFullThis__4934(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38571);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28117[8];
    WData/*255:0*/ __Vtemp28118[8];
    WData/*255:0*/ __Vtemp28119[8];
    WData/*255:0*/ __Vtemp28120[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28117[0U] = 1U;
        __Vtemp28117[1U] = 0U;
        __Vtemp28117[2U] = 0U;
        __Vtemp28117[3U] = 0U;
        __Vtemp28117[4U] = 0U;
        __Vtemp28117[5U] = 0U;
        __Vtemp28117[6U] = 0U;
        __Vtemp28117[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28118, __Vtemp28117, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+1,((1U & (__Vtemp28118[3U] 
                                     >> 9U))));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x38U)))))));
        __Vtemp28119[0U] = 1U;
        __Vtemp28119[1U] = 0U;
        __Vtemp28119[2U] = 0U;
        __Vtemp28119[3U] = 0U;
        __Vtemp28119[4U] = 0U;
        __Vtemp28119[5U] = 0U;
        __Vtemp28119[6U] = 0U;
        __Vtemp28119[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28120, __Vtemp28119, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+11,((1U & (__Vtemp28120[3U] 
                                      >> 0xcU))));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                                & (0xffU == (0xffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
    }
}

void VTestHarness::traceFullThis__4936(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38585);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28125[8];
    WData/*255:0*/ __Vtemp28126[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28125[0U] = 1U;
        __Vtemp28125[1U] = 0U;
        __Vtemp28125[2U] = 0U;
        __Vtemp28125[3U] = 0U;
        __Vtemp28125[4U] = 0U;
        __Vtemp28125[5U] = 0U;
        __Vtemp28125[6U] = 0U;
        __Vtemp28125[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28126, __Vtemp28125, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+7,((1U & (__Vtemp28126[3U] 
                                     >> 0x10U))));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 8U)))))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x10U)))))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x18U)))))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x20U)))))));
    }
}

void VTestHarness::traceFullThis__4938(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38599);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28129[8];
    WData/*255:0*/ __Vtemp28130[8];
    WData/*255:0*/ __Vtemp28131[8];
    WData/*255:0*/ __Vtemp28132[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28129[0U] = 1U;
        __Vtemp28129[1U] = 0U;
        __Vtemp28129[2U] = 0U;
        __Vtemp28129[3U] = 0U;
        __Vtemp28129[4U] = 0U;
        __Vtemp28129[5U] = 0U;
        __Vtemp28129[6U] = 0U;
        __Vtemp28129[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28130, __Vtemp28129, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+3,((1U & (__Vtemp28130[3U] 
                                     >> 8U))));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x28U)))))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x30U)))))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x38U)))))));
        __Vtemp28131[0U] = 1U;
        __Vtemp28131[1U] = 0U;
        __Vtemp28131[2U] = 0U;
        __Vtemp28131[3U] = 0U;
        __Vtemp28131[4U] = 0U;
        __Vtemp28131[5U] = 0U;
        __Vtemp28131[6U] = 0U;
        __Vtemp28131[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28132, __Vtemp28131, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+13,((1U & (__Vtemp28132[3U] 
                                      >> 0xbU))));
    }
}

void VTestHarness::traceFullThis__4940(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38613);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28137[8];
    WData/*255:0*/ __Vtemp28138[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28137[0U] = 1U;
        __Vtemp28137[1U] = 0U;
        __Vtemp28137[2U] = 0U;
        __Vtemp28137[3U] = 0U;
        __Vtemp28137[4U] = 0U;
        __Vtemp28137[5U] = 0U;
        __Vtemp28137[6U] = 0U;
        __Vtemp28137[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28138, __Vtemp28137, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->fullBit(oldp+9,((1U & (__Vtemp28138[3U] 
                                     >> 0xfU))));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                                & (0xffU == (0xffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 8U)))))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                                & (0xffU == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x10U)))))));
    }
}

void VTestHarness::traceFullThis__4942(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38627);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        vcdp->fullBit(oldp+5,((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            & (~ (0x3fU 
                                                  & ((IData)(7U) 
                                                     << 
                                                     (3U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))))))));
        vcdp->fullCData(oldp+6,((7U & (1U | (0xfU & 
                                             ((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))))),3);
        vcdp->fullBit(oldp+7,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                                     >> 2U))));
        vcdp->fullBit(oldp+8,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                     >> 2U))));
        vcdp->fullBit(oldp+9,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                        >> 2U)))));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1));
        vcdp->fullBit(oldp+12,((1U & (((IData)(1U) 
                                       << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                                      >> 1U))));
    }
}

void VTestHarness::traceFullThis__4944(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38640);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                     >> 1U))));
        vcdp->fullBit(oldp+1,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                        >> 1U)))));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5));
        vcdp->fullBit(oldp+10,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+11,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->fullBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
    }
}

void VTestHarness::traceFullThis__4946(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38660);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28141[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask),8);
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28141[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+13,(__Vtemp28141),4160);
        vcdp->fullBit(oldp+143,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm)) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm)))));
        vcdp->fullBit(oldp+144,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq_io_enq_valid));
        vcdp->fullCData(oldp+145,((0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data))),8);
        vcdp->fullBit(oldp+146,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        vcdp->fullBit(oldp+147,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm));
    }
}

void VTestHarness::traceFullThis__4948(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38808);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask),64);
        vcdp->fullBit(oldp+2,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask))));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_wivalid_0));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_wivalid_0) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask))));
        vcdp->fullBit(oldp+5,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                             >> 1U)))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_wivalid_0) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                          >> 1U)))));
        vcdp->fullBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                             >> 0x20U)))));
        vcdp->fullQData(oldp+8,((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm)) 
                                  << 0x21U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                                                                   << 1U) 
                                                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm))))))),34);
        vcdp->fullBit(oldp+10,((0x1ffU == (0x1ffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                                             >> 0x10U))))));
        vcdp->fullBit(oldp+11,((0x1ffU == (0x1ffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                                             >> 0x30U))))));
        vcdp->fullBit(oldp+12,((0xffffU == (0xffffU 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask)))));
        vcdp->fullBit(oldp+13,((0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask)))));
        vcdp->fullBit(oldp+14,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                              >> 0x1fU)))));
        vcdp->fullBit(oldp+15,((0U != (0xffU & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                                        >> 0x20U))))));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_deq));
        vcdp->fullBit(oldp+18,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_5) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->fullBit(oldp+20,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                              >> 0x20U)))));
        vcdp->fullBit(oldp+21,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_5) 
                                & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                           >> 0x20U)))));
    }
}

void VTestHarness::traceFullThis__4950(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38830);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_2) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_2) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                          >> 0x20U)))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_0) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_0) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                          >> 0x20U)))));
        vcdp->fullBit(oldp+4,((1U & ((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                                        & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                       & (((IData)(1U) 
                                           << (3U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                >> 3U))) 
                                          >> 3U)) & 
                                      (0U == (0x1fcU 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 >> 3U)))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask)))));
        vcdp->fullBit(oldp+5,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))));
        vcdp->fullSData(oldp+6,((0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                           >> 3U))),9);
        vcdp->fullSData(oldp+7,((0x1fcU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                           >> 3U))),9);
        vcdp->fullQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask),64);
        vcdp->fullBit(oldp+10,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->fullCData(oldp+11,((3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 3U))),2);
        vcdp->fullBit(oldp+12,((1U & (((IData)(1U) 
                                       << (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 >> 3U))) 
                                      >> 2U))));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_0));
    }
}

void VTestHarness::traceFullThis__4952(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38844);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                             >> 0x20U)))));
        vcdp->fullBit(oldp+1,((1U & (((IData)(1U) << 
                                      (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             >> 3U))) 
                                     >> 1U))));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_2));
        vcdp->fullBit(oldp+3,((1U & (((IData)(1U) << 
                                      (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             >> 3U))) 
                                     >> 3U))));
        vcdp->fullBit(oldp+4,((1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                                       & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                      & (((IData)(1U) 
                                          << (3U & 
                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                               >> 3U))) 
                                         >> 3U)) & 
                                     (0U == (0x1fcU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                >> 3U)))))));
        vcdp->fullBit(oldp+5,((1U & ((IData)(1U) << 
                                     (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            >> 3U))))));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_5));
        vcdp->fullBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U))));
        vcdp->fullBit(oldp+8,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U)))));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+11,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                      >> 1U))));
        vcdp->fullBit(oldp+12,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         >> 1U)))));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_3));
    }
}

void VTestHarness::traceFullThis__4954(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38861);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+4,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+5,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                                & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                                   & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                                & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_4) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                                   & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
    }
}

void VTestHarness::traceFullThis__4956(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38877);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28143[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask),8);
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28143[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+9,(__Vtemp28143),4160);
        vcdp->fullQData(oldp+139,((VL_ULL(0x8000000000000000) 
                                   + (QData)((IData)(
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)
                                                       ? 0xeU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                   >> 0xfU)))
                                                        ? 0xfU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                    >> 0xeU)))
                                                         ? 0xeU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                     >> 0xdU)))
                                                          ? 0xdU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                      >> 0xcU)))
                                                           ? 0xcU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                       >> 0xbU)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                        >> 3U)))
                                                             ? 3U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                         >> 7U)))
                                                              ? 7U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                          >> 9U)))
                                                               ? 9U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                           >> 1U)))
                                                                ? 1U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                            >> 5U)))
                                                                 ? 5U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                             >> 0xaU)))
                                                                  ? 0xaU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                              >> 2U)))
                                                                   ? 2U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                               >> 6U)))
                                                                    ? 6U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 8U)))
                                                                     ? 8U
                                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___which_T_95)))))))))))))))))))),64);
    }
}

void VTestHarness::traceFullThis__4959(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39018);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullCData(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)
                                  ? 0xeU : ((1U & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                           >> 0xfU)))
                                             ? 0xfU
                                             : ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                             >> 0xdU)))
                                                  ? 0xdU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                               >> 0xbU)))
                                                    ? 0xbU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                >> 3U)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                 >> 7U)))
                                                      ? 7U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                  >> 9U)))
                                                       ? 9U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                   >> 1U)))
                                                        ? 1U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                    >> 5U)))
                                                         ? 5U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                     >> 0xaU)))
                                                          ? 0xaU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                      >> 2U)))
                                                           ? 2U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                       >> 6U)))
                                                            ? 6U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                        >> 8U)))
                                                             ? 8U
                                                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___which_T_95))))))))))))))))),4);
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_incremented),4);
        vcdp->fullCData(oldp+2,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx),4);
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index),3);
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented),4);
        vcdp->fullCData(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented) 
                                 ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented) 
                                          >> 1U)))),4);
    }
}

void VTestHarness::traceFullThis__4961(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39024);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28149[130];
    WData/*4159:0*/ __Vtemp28150[130];
    WData/*4159:0*/ __Vtemp28151[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->fullCData(oldp+0,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__index),3);
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source_io_enq_ready));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid));
        vcdp->fullCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_capture_bits_dmiStatus),2);
        vcdp->fullIData(oldp+11,((0x5071U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_capture_bits_dmiStatus) 
                                             << 0xaU))),32);
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_valid)
                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin) 
                                   + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1)))));
        vcdp->fullBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                   + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1)))));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore));
        vcdp->fullSData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler_next),13);
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_fpu_valid));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_interrupt));
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_xcpt));
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd));
        vcdp->fullQData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts),64);
        vcdp->fullQData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts),64);
        vcdp->fullQData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts),64);
        vcdp->fullBit(oldp+27,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___any_T_108) 
                                      | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                 >> 4U))))));
        __Vtemp28149[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28149[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp28150, __Vtemp28149);
        vcdp->fullCData(oldp+28,((0xfU & __Vtemp28150[0U])),4);
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28151[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->fullWData(oldp+29,(__Vtemp28151),4160);
        vcdp->fullIData(oldp+159,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data),32);
        vcdp->fullBit(oldp+160,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                       >> 1U))));
        vcdp->fullBit(oldp+161,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                       >> 0x1fU))));
        vcdp->fullBit(oldp+162,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data)));
    }
}

void VTestHarness::traceFullThis__4970(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39187);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                     >> 2U))));
        vcdp->fullBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                     >> 3U))));
        vcdp->fullBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                     >> 0x1cU))));
        vcdp->fullBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                     >> 0x1eU))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                               & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) 
                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                         >> 2U))) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___GEN_23)))));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset));
        vcdp->fullBit(oldp+6,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)))));
        vcdp->fullBit(oldp+7,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)))));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid));
        vcdp->fullCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT___io_dmi_resp_bits_resp_T),2);
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_d_bits_denied))));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_d_valid));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_d_bits_denied));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass_io_bypass));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->fullCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->fullCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size),2);
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_sink));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_denied));
        vcdp->fullCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid),2);
        vcdp->fullCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_filter),4);
        vcdp->fullCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_unready),4);
        vcdp->fullCData(oldp+25,((3U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2)))),2);
        vcdp->fullBit(oldp+26,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2)))));
        vcdp->fullBit(oldp+27,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2) 
                                         >> 1U)))));
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_0));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_1));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1));
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_a_valid));
    }
}

void VTestHarness::traceFullThis__4975(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39220);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_valid));
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_opcode),3);
        vcdp->fullCData(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
                                  ? 2U : 0U)),2);
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_denied));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_corrupt));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->fullCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->fullCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size),2);
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_sink));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_denied));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall));
        vcdp->fullCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode),3);
        vcdp->fullBit(oldp+15,((1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                       >> 2U) & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                                  >> 1U))))));
        vcdp->fullCData(oldp+16,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                        >> 1U))),4);
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_denied));
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done));
        vcdp->fullCData(oldp+23,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                                   ? 3U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT___io_dmi_resp_bits_resp_T)
                                            : 0U))),2);
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy));
        vcdp->fullBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__nonzeroResp));
        vcdp->fullQData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__captureBits),41);
        vcdp->fullBit(oldp+28,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T_1))));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm_io_dmi_resp_ready));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_a_ready));
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_d_ready));
        vcdp->fullBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_valid));
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_resumereq));
        vcdp->fullBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_ackhavereset));
    }
}

void VTestHarness::traceFullThis__4979(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39256);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_d_ready));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_a_ready));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__latch));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+5,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_23)),4);
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+9,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_23)),4);
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_d_ready));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_a_ready));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3));
        vcdp->fullCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__inc),2);
        vcdp->fullCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3),2);
        vcdp->fullCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight),2);
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+19,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)),4);
        vcdp->fullBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_a_ready));
        vcdp->fullBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready));
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done));
        vcdp->fullBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+25,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_23)),4);
        vcdp->fullBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+27,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)),4);
        vcdp->fullBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented));
        vcdp->fullBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_chainIn_shift));
        vcdp->fullBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_chainIn_capture));
        vcdp->fullBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_chainIn_update));
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_update_valid));
        vcdp->fullBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_shift));
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_capture));
        vcdp->fullBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_update));
        vcdp->fullBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid));
        vcdp->fullBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift));
        vcdp->fullBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture));
        vcdp->fullBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_update));
        vcdp->fullBit(oldp+40,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK));
        vcdp->fullBit(oldp+41,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS));
        vcdp->fullBit(oldp+42,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI));
    }
}

void VTestHarness::traceFullThis__4982(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39299);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TRSTn));
        vcdp->fullIData(oldp+1,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit),32);
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving));
        vcdp->fullIData(oldp+3,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),32);
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending));
        vcdp->fullBit(oldp+5,(((((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 | (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                | (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                               | (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)))));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg));
        vcdp->fullIData(oldp+7,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg),32);
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg));
        vcdp->fullBit(oldp+9,((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))));
        vcdp->fullIData(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                   ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1
                                   : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)),32);
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg));
        vcdp->fullBit(oldp+12,((1U == vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit)));
        vcdp->fullBit(oldp+13,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)))));
        vcdp->fullIData(oldp+14,(vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg),32);
        vcdp->fullIData(oldp+15,(((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
                                   ? 3U : (vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                                           - (IData)(1U)))),32);
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky));
        vcdp->fullCData(oldp+18,(((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? 1U : 4U)),3);
        vcdp->fullQData(oldp+19,(((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                   : VL_ULL(0))),64);
        vcdp->fullCData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]),8);
        vcdp->fullQData(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]),64);
        vcdp->fullBit(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->fullCData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),3);
        vcdp->fullBit(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]));
    }
}

void VTestHarness::traceFullThis__4984(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39326);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp28160[3];
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read),3);
        vcdp->fullCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size),2);
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source),8);
        vcdp->fullQData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->fullIData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd),32);
        vcdp->fullQData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr),64);
        vcdp->fullQData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len),64);
        vcdp->fullIData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0),32);
        vcdp->fullIData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1),32);
        vcdp->fullCData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid),2);
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx));
        vcdp->fullCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state),4);
        vcdp->fullIData(oldp+16,((0x1fffffffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                         >> 3U)))),29);
        vcdp->fullIData(oldp+17,((0xfffffff8U & (((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                             >> 3U))) 
                                                 << 3U))),32);
        vcdp->fullCData(oldp+18,(((((2U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                                     ? 0xfU : 0U) << 4U) 
                                  | ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                                      ? 0xfU : 0U))),8);
        __Vtemp28160[0U] = (0xfffffffcU & ((IData)(
                                                   (VL_ULL(1) 
                                                    + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                           << 2U));
        __Vtemp28160[1U] = ((3U & ((IData)((VL_ULL(1) 
                                            + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                   >> 0x1eU)) | (0xfffffffcU 
                                                 & ((IData)(
                                                            ((VL_ULL(1) 
                                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                             >> 0x20U)) 
                                                    << 2U)));
        __Vtemp28160[2U] = (3U & ((IData)(((VL_ULL(1) 
                                            + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                           >> 0x20U)) 
                                  >> 0x1eU));
        vcdp->fullWData(oldp+19,(__Vtemp28160),66);
        vcdp->fullIData(oldp+22,((0xfffffff8U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                          >> 3U)) 
                                                 << 3U))),32);
        vcdp->fullQData(oldp+23,((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))),64);
        vcdp->fullBit(oldp+25,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)))));
        vcdp->fullBit(oldp+26,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)))));
        vcdp->fullCData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1),3);
        vcdp->fullCData(oldp+28,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                                        - (IData)(1U)))),3);
        vcdp->fullBit(oldp+29,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1))));
        vcdp->fullCData(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4),3);
        vcdp->fullCData(oldp+31,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                                        - (IData)(1U)))),3);
        vcdp->fullBit(oldp+32,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4))));
    }
}

void VTestHarness::traceFullThis__4986(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39359);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullSData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter),9);
        vcdp->fullSData(oldp+1,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->fullBit(oldp+2,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))));
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode),3);
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param),3);
        vcdp->fullCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size),4);
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source));
        vcdp->fullIData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address),32);
        vcdp->fullSData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter),9);
        vcdp->fullSData(oldp+9,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->fullBit(oldp+10,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))));
        vcdp->fullCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1),3);
        vcdp->fullCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1),2);
        vcdp->fullCData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1),4);
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1));
        vcdp->fullCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink),4);
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight));
        vcdp->fullCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->fullCData(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->fullSData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->fullSData(oldp+21,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1) 
                                            - (IData)(1U)))),9);
        vcdp->fullBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->fullSData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->fullSData(oldp+24,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                                            - (IData)(1U)))),9);
        vcdp->fullBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->fullIData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog),32);
        vcdp->fullCData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->fullSData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->fullSData(oldp+29,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2) 
                                            - (IData)(1U)))),9);
        vcdp->fullBit(oldp+30,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->fullCData(oldp+31,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx),3);
        vcdp->fullBit(oldp+32,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked));
        vcdp->fullCData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount),2);
        vcdp->fullBit(oldp+34,((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount))));
        vcdp->fullIData(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0),32);
        vcdp->fullIData(oldp+36,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1),32);
        vcdp->fullIData(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2),32);
        vcdp->fullIData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3),32);
        vcdp->fullCData(oldp+39,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount),2);
    }
}

void VTestHarness::traceFullThis__4988(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39399);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28173[8];
    WData/*255:0*/ __Vtemp28174[8];
    WData/*255:0*/ __Vtemp28177[8];
    WData/*1023:0*/ __Vtemp28180[32];
    WData/*1023:0*/ __Vtemp28183[32];
    WData/*1023:0*/ __Vtemp28184[32];
    // Body
    {
        vcdp->fullBit(oldp+0,((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG));
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1),8);
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0),8);
        vcdp->fullCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3),8);
        vcdp->fullCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2),8);
        vcdp->fullCData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5),8);
        vcdp->fullCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4),8);
        vcdp->fullCData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7),8);
        vcdp->fullCData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6),8);
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter));
        vcdp->fullBit(oldp+12,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+13,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))));
        vcdp->fullCData(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode),3);
        vcdp->fullCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param),3);
        vcdp->fullCData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size),2);
        vcdp->fullCData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source),8);
        vcdp->fullIData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address),29);
        vcdp->fullBit(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter));
        vcdp->fullBit(oldp+20,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+21,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))));
        vcdp->fullCData(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1),3);
        vcdp->fullCData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1),2);
        vcdp->fullCData(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1),8);
        vcdp->fullWData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight),256);
        vcdp->fullWData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes),1024);
        vcdp->fullWData(oldp+65,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes),1024);
        vcdp->fullBit(oldp+97,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1));
        vcdp->fullBit(oldp+98,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+99,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->fullBit(oldp+100,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1));
        vcdp->fullBit(oldp+101,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))));
        vcdp->fullBit(oldp+102,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))));
        __Vtemp28173[0U] = 1U;
        __Vtemp28173[1U] = 0U;
        __Vtemp28173[2U] = 0U;
        __Vtemp28173[3U] = 0U;
        __Vtemp28173[4U] = 0U;
        __Vtemp28173[5U] = 0U;
        __Vtemp28173[6U] = 0U;
        __Vtemp28173[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28174, __Vtemp28173, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp28177[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[0U] : 0U);
        __Vtemp28177[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[1U] : 0U);
        __Vtemp28177[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[2U] : 0U);
        __Vtemp28177[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[3U] : 0U);
        __Vtemp28177[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[4U] : 0U);
        __Vtemp28177[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[5U] : 0U);
        __Vtemp28177[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[6U] : 0U);
        __Vtemp28177[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28174[7U] : 0U);
        vcdp->fullWData(oldp+103,(__Vtemp28177),256);
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp28180, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp28183[0U] = (7U & (__Vtemp28180[0U] 
                                  >> 1U));
        __Vtemp28183[1U] = 0U;
        __Vtemp28183[2U] = 0U;
        __Vtemp28183[3U] = 0U;
        __Vtemp28183[4U] = 0U;
        __Vtemp28183[5U] = 0U;
        __Vtemp28183[6U] = 0U;
        __Vtemp28183[7U] = 0U;
        __Vtemp28183[8U] = 0U;
        __Vtemp28183[9U] = 0U;
        __Vtemp28183[0xaU] = 0U;
        __Vtemp28183[0xbU] = 0U;
        __Vtemp28183[0xcU] = 0U;
        __Vtemp28183[0xdU] = 0U;
        __Vtemp28183[0xeU] = 0U;
        __Vtemp28183[0xfU] = 0U;
        __Vtemp28183[0x10U] = 0U;
        __Vtemp28183[0x11U] = 0U;
        __Vtemp28183[0x12U] = 0U;
        __Vtemp28183[0x13U] = 0U;
        __Vtemp28183[0x14U] = 0U;
        __Vtemp28183[0x15U] = 0U;
        __Vtemp28183[0x16U] = 0U;
        __Vtemp28183[0x17U] = 0U;
        __Vtemp28183[0x18U] = 0U;
        __Vtemp28183[0x19U] = 0U;
        __Vtemp28183[0x1aU] = 0U;
        __Vtemp28183[0x1bU] = 0U;
        __Vtemp28183[0x1cU] = 0U;
        __Vtemp28183[0x1dU] = 0U;
        __Vtemp28183[0x1eU] = 0U;
        __Vtemp28183[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp28184, __Vtemp28183);
        vcdp->fullCData(oldp+111,((0xfU & __Vtemp28184[0U])),4);
    }
}

void VTestHarness::traceFullThis__4989(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39511);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp28187[32];
    WData/*1023:0*/ __Vtemp28190[32];
    WData/*1023:0*/ __Vtemp28191[32];
    // Body
    {
        vcdp->fullIData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog),32);
        vcdp->fullWData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1),256);
        vcdp->fullWData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1),1024);
        vcdp->fullBit(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2));
        vcdp->fullBit(oldp+42,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+43,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2)))));
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp28187, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp28190[0U] = (7U & (__Vtemp28187[0U] 
                                  >> 1U));
        __Vtemp28190[1U] = 0U;
        __Vtemp28190[2U] = 0U;
        __Vtemp28190[3U] = 0U;
        __Vtemp28190[4U] = 0U;
        __Vtemp28190[5U] = 0U;
        __Vtemp28190[6U] = 0U;
        __Vtemp28190[7U] = 0U;
        __Vtemp28190[8U] = 0U;
        __Vtemp28190[9U] = 0U;
        __Vtemp28190[0xaU] = 0U;
        __Vtemp28190[0xbU] = 0U;
        __Vtemp28190[0xcU] = 0U;
        __Vtemp28190[0xdU] = 0U;
        __Vtemp28190[0xeU] = 0U;
        __Vtemp28190[0xfU] = 0U;
        __Vtemp28190[0x10U] = 0U;
        __Vtemp28190[0x11U] = 0U;
        __Vtemp28190[0x12U] = 0U;
        __Vtemp28190[0x13U] = 0U;
        __Vtemp28190[0x14U] = 0U;
        __Vtemp28190[0x15U] = 0U;
        __Vtemp28190[0x16U] = 0U;
        __Vtemp28190[0x17U] = 0U;
        __Vtemp28190[0x18U] = 0U;
        __Vtemp28190[0x19U] = 0U;
        __Vtemp28190[0x1aU] = 0U;
        __Vtemp28190[0x1bU] = 0U;
        __Vtemp28190[0x1cU] = 0U;
        __Vtemp28190[0x1dU] = 0U;
        __Vtemp28190[0x1eU] = 0U;
        __Vtemp28190[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp28191, __Vtemp28190);
        vcdp->fullCData(oldp+44,((0xfU & __Vtemp28191[0U])),4);
        vcdp->fullIData(oldp+45,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1),32);
        vcdp->fullCData(oldp+46,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+47,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+49,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+50,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+51,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+52,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullCData(oldp+53,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram
                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->fullQData(oldp+54,((((QData)((IData)(
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram
                                                     [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                     << 0x18U) 
                                                    | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram
                                                        [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                                        << 0x10U) 
                                                       | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram
                                                           [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                           << 8U) 
                                                          | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram
                                                          [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram
                                                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                 << 0x18U) 
                                                                | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram
                                                                    [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                    << 0x10U) 
                                                                   | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
                                                                       [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                       << 8U) 
                                                                      | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
                                                                      [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]))))))),64);
        vcdp->fullBit(oldp+56,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+57,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),9);
    }
}

void VTestHarness::traceFullThis__4991(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39569);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->fullSData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter));
        vcdp->fullBit(oldp+15,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))));
        vcdp->fullCData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode),3);
        vcdp->fullCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param),3);
        vcdp->fullCData(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size),2);
        vcdp->fullCData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source),8);
        vcdp->fullIData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address),18);
        vcdp->fullBit(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter));
        vcdp->fullBit(oldp+23,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+24,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)))));
        vcdp->fullCData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1),2);
        vcdp->fullCData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1),8);
        vcdp->fullWData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight),256);
        vcdp->fullWData(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes),1024);
        vcdp->fullWData(oldp+67,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes),1024);
        vcdp->fullBit(oldp+99,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1));
        vcdp->fullBit(oldp+100,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))));
        vcdp->fullBit(oldp+101,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->fullBit(oldp+102,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1));
        vcdp->fullBit(oldp+103,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))));
        vcdp->fullBit(oldp+104,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->fullIData(oldp+105,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog),32);
        vcdp->fullCData(oldp+106,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft),3);
        vcdp->fullBit(oldp+107,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))));
        vcdp->fullCData(oldp+108,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask),2);
        vcdp->fullBit(oldp+109,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0));
        vcdp->fullBit(oldp+110,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1));
        vcdp->fullCData(oldp+111,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter),3);
        vcdp->fullCData(oldp+112,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                                         - (IData)(1U)))),3);
    }
}

void VTestHarness::traceFullThis__4993(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39682);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))));
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode),3);
        vcdp->fullCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param),3);
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size),3);
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source),4);
        vcdp->fullIData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address),29);
        vcdp->fullCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter),3);
        vcdp->fullCData(oldp+7,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->fullBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))));
        vcdp->fullCData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->fullCData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1),2);
        vcdp->fullCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1),3);
        vcdp->fullCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1),4);
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied));
        vcdp->fullSData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight),16);
        vcdp->fullQData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes),64);
        vcdp->fullQData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes),64);
        vcdp->fullCData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->fullCData(oldp+21,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                                        - (IData)(1U)))),3);
        vcdp->fullBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->fullCData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->fullCData(oldp+24,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                                        - (IData)(1U)))),3);
        vcdp->fullBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->fullIData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog),32);
        vcdp->fullSData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1),16);
        vcdp->fullQData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1),64);
        vcdp->fullCData(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->fullCData(oldp+31,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                                        - (IData)(1U)))),3);
        vcdp->fullBit(oldp+32,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->fullIData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1),32);
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter));
        vcdp->fullBit(oldp+35,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+36,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))));
        vcdp->fullCData(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->fullCData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->fullCData(oldp+39,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size),2);
        vcdp->fullCData(oldp+40,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source),8);
        vcdp->fullIData(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address),29);
        vcdp->fullBit(oldp+42,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter));
    }
}

void VTestHarness::traceFullThis__4995(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39725);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
        vcdp->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))));
        vcdp->fullCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->fullCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1),2);
        vcdp->fullCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1),8);
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->fullWData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight),256);
        vcdp->fullWData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),1024);
        vcdp->fullWData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes),1024);
        vcdp->fullBit(oldp+80,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1));
        vcdp->fullBit(oldp+81,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+82,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->fullBit(oldp+83,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
        vcdp->fullBit(oldp+84,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->fullBit(oldp+85,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->fullIData(oldp+86,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->fullWData(oldp+87,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1),256);
        vcdp->fullWData(oldp+95,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),1024);
        vcdp->fullBit(oldp+127,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2));
        vcdp->fullBit(oldp+128,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))));
        vcdp->fullBit(oldp+129,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->fullIData(oldp+130,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->fullCData(oldp+131,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->fullCData(oldp+132,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->fullBit(oldp+133,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->fullBit(oldp+134,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->fullCData(oldp+135,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->fullCData(oldp+136,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->fullCData(oldp+137,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),2);
        vcdp->fullCData(oldp+138,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),2);
        vcdp->fullCData(oldp+139,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]),8);
        vcdp->fullCData(oldp+140,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]),8);
        vcdp->fullIData(oldp+141,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),29);
        vcdp->fullIData(oldp+142,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),29);
        vcdp->fullCData(oldp+143,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->fullCData(oldp+144,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->fullQData(oldp+145,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->fullQData(oldp+147,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->fullBit(oldp+149,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->fullBit(oldp+150,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->fullBit(oldp+151,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->fullCData(oldp+152,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->fullCData(oldp+153,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->fullBit(oldp+154,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->fullBit(oldp+155,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->fullCData(oldp+156,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->fullCData(oldp+157,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->fullCData(oldp+158,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),2);
        vcdp->fullCData(oldp+159,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),2);
        vcdp->fullCData(oldp+160,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]),8);
        vcdp->fullCData(oldp+161,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]),8);
        vcdp->fullBit(oldp+162,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]));
        vcdp->fullBit(oldp+163,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]));
        vcdp->fullBit(oldp+164,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->fullBit(oldp+165,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->fullQData(oldp+166,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->fullQData(oldp+168,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->fullBit(oldp+170,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->fullBit(oldp+171,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
    }
}
