// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3536(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3536\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*2079:0*/ __Vtemp9042[65];
    WData/*2079:0*/ __Vtemp9043[65];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    __Vtemp9042[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x40U)) {
        __Vtemp9042[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp9043, __Vtemp9042, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[4U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[5U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[6U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[7U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[8U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[9U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x20U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x20U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x21U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x21U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x22U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x22U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x23U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x23U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x24U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x24U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x25U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x25U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x26U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x26U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x27U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x27U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x28U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x28U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x29U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x29U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x2aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x2bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x2cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x2dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x2eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x2fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x30U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x30U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x31U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x31U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x32U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x32U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x33U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x33U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x34U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x34U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x35U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x35U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x36U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x36U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x37U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x37U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x38U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x38U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x39U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x39U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x3aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x3bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x3cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x3dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x3eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp9043[0x3fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x40U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp9043[0x40U]) : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3537(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3537\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3538(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3538\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3539(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3539\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
            ? 0xffU : (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                 << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
            ? 0xffU : (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                 << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             >> 8U))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3540(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3540\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                              >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                              >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3541(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3541\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                              >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3542(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3542\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3543(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3543\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp9052[32];
    WData/*1023:0*/ __Vtemp9053[32];
    WData/*1023:0*/ __Vtemp9058[32];
    WData/*1023:0*/ __Vtemp9059[32];
    WData/*1023:0*/ __Vtemp9064[32];
    WData/*1023:0*/ __Vtemp9065[32];
    WData/*1023:0*/ __Vtemp9070[32];
    WData/*1023:0*/ __Vtemp9071[32];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_1 
        = (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_3 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value));
    __Vtemp9052[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9052[1U] = 0U;
    __Vtemp9052[2U] = 0U;
    __Vtemp9052[3U] = 0U;
    __Vtemp9052[4U] = 0U;
    __Vtemp9052[5U] = 0U;
    __Vtemp9052[6U] = 0U;
    __Vtemp9052[7U] = 0U;
    __Vtemp9052[8U] = 0U;
    __Vtemp9052[9U] = 0U;
    __Vtemp9052[0xaU] = 0U;
    __Vtemp9052[0xbU] = 0U;
    __Vtemp9052[0xcU] = 0U;
    __Vtemp9052[0xdU] = 0U;
    __Vtemp9052[0xeU] = 0U;
    __Vtemp9052[0xfU] = 0U;
    __Vtemp9052[0x10U] = 0U;
    __Vtemp9052[0x11U] = 0U;
    __Vtemp9052[0x12U] = 0U;
    __Vtemp9052[0x13U] = 0U;
    __Vtemp9052[0x14U] = 0U;
    __Vtemp9052[0x15U] = 0U;
    __Vtemp9052[0x16U] = 0U;
    __Vtemp9052[0x17U] = 0U;
    __Vtemp9052[0x18U] = 0U;
    __Vtemp9052[0x19U] = 0U;
    __Vtemp9052[0x1aU] = 0U;
    __Vtemp9052[0x1bU] = 0U;
    __Vtemp9052[0x1cU] = 0U;
    __Vtemp9052[0x1dU] = 0U;
    __Vtemp9052[0x1eU] = 0U;
    __Vtemp9052[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9053, __Vtemp9052);
    __Vtemp9058[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9058[1U] = 0U;
    __Vtemp9058[2U] = 0U;
    __Vtemp9058[3U] = 0U;
    __Vtemp9058[4U] = 0U;
    __Vtemp9058[5U] = 0U;
    __Vtemp9058[6U] = 0U;
    __Vtemp9058[7U] = 0U;
    __Vtemp9058[8U] = 0U;
    __Vtemp9058[9U] = 0U;
    __Vtemp9058[0xaU] = 0U;
    __Vtemp9058[0xbU] = 0U;
    __Vtemp9058[0xcU] = 0U;
    __Vtemp9058[0xdU] = 0U;
    __Vtemp9058[0xeU] = 0U;
    __Vtemp9058[0xfU] = 0U;
    __Vtemp9058[0x10U] = 0U;
    __Vtemp9058[0x11U] = 0U;
    __Vtemp9058[0x12U] = 0U;
    __Vtemp9058[0x13U] = 0U;
    __Vtemp9058[0x14U] = 0U;
    __Vtemp9058[0x15U] = 0U;
    __Vtemp9058[0x16U] = 0U;
    __Vtemp9058[0x17U] = 0U;
    __Vtemp9058[0x18U] = 0U;
    __Vtemp9058[0x19U] = 0U;
    __Vtemp9058[0x1aU] = 0U;
    __Vtemp9058[0x1bU] = 0U;
    __Vtemp9058[0x1cU] = 0U;
    __Vtemp9058[0x1dU] = 0U;
    __Vtemp9058[0x1eU] = 0U;
    __Vtemp9058[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9059, __Vtemp9058);
    __Vtemp9064[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9064[1U] = 0U;
    __Vtemp9064[2U] = 0U;
    __Vtemp9064[3U] = 0U;
    __Vtemp9064[4U] = 0U;
    __Vtemp9064[5U] = 0U;
    __Vtemp9064[6U] = 0U;
    __Vtemp9064[7U] = 0U;
    __Vtemp9064[8U] = 0U;
    __Vtemp9064[9U] = 0U;
    __Vtemp9064[0xaU] = 0U;
    __Vtemp9064[0xbU] = 0U;
    __Vtemp9064[0xcU] = 0U;
    __Vtemp9064[0xdU] = 0U;
    __Vtemp9064[0xeU] = 0U;
    __Vtemp9064[0xfU] = 0U;
    __Vtemp9064[0x10U] = 0U;
    __Vtemp9064[0x11U] = 0U;
    __Vtemp9064[0x12U] = 0U;
    __Vtemp9064[0x13U] = 0U;
    __Vtemp9064[0x14U] = 0U;
    __Vtemp9064[0x15U] = 0U;
    __Vtemp9064[0x16U] = 0U;
    __Vtemp9064[0x17U] = 0U;
    __Vtemp9064[0x18U] = 0U;
    __Vtemp9064[0x19U] = 0U;
    __Vtemp9064[0x1aU] = 0U;
    __Vtemp9064[0x1bU] = 0U;
    __Vtemp9064[0x1cU] = 0U;
    __Vtemp9064[0x1dU] = 0U;
    __Vtemp9064[0x1eU] = 0U;
    __Vtemp9064[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9065, __Vtemp9064);
    __Vtemp9070[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9070[1U] = 0U;
    __Vtemp9070[2U] = 0U;
    __Vtemp9070[3U] = 0U;
    __Vtemp9070[4U] = 0U;
    __Vtemp9070[5U] = 0U;
    __Vtemp9070[6U] = 0U;
    __Vtemp9070[7U] = 0U;
    __Vtemp9070[8U] = 0U;
    __Vtemp9070[9U] = 0U;
    __Vtemp9070[0xaU] = 0U;
    __Vtemp9070[0xbU] = 0U;
    __Vtemp9070[0xcU] = 0U;
    __Vtemp9070[0xdU] = 0U;
    __Vtemp9070[0xeU] = 0U;
    __Vtemp9070[0xfU] = 0U;
    __Vtemp9070[0x10U] = 0U;
    __Vtemp9070[0x11U] = 0U;
    __Vtemp9070[0x12U] = 0U;
    __Vtemp9070[0x13U] = 0U;
    __Vtemp9070[0x14U] = 0U;
    __Vtemp9070[0x15U] = 0U;
    __Vtemp9070[0x16U] = 0U;
    __Vtemp9070[0x17U] = 0U;
    __Vtemp9070[0x18U] = 0U;
    __Vtemp9070[0x19U] = 0U;
    __Vtemp9070[0x1aU] = 0U;
    __Vtemp9070[0x1bU] = 0U;
    __Vtemp9070[0x1cU] = 0U;
    __Vtemp9070[0x1dU] = 0U;
    __Vtemp9070[0x1eU] = 0U;
    __Vtemp9070[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9071, __Vtemp9070);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp9053[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp9059[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp9065[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp9071[0U]))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3544(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3544\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_d_ready_T) 
                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
                                           ? ((VL_ULL(0) 
                                               == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                                               ? 0U
                                               : 6U)
                                           : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_a_valid_T) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))
                                               ? 8U
                                               : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___io_serial_in_ready_T_3) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                   ? 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                                                    | (VL_ULL(0) 
                                                       == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                                                    ? 7U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3545(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3545\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp9072[32];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___acknum_T_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___GEN_24 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___acknum_T_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum) 
                 - (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   >> 3U))))));
    VL_SHIFTR_WWI(1024,1024,11, __Vtemp9072, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp9072[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp9072[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp9072[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp9072[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp9072[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp9072[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp9072[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp9072[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp9072[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp9072[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp9072[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp9072[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp9072[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp9072[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp9072[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp9072[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp9072[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp9072[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp9072[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp9072[0x13U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp9072[0x14U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp9072[0x15U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp9072[0x16U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp9072[0x17U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp9072[0x18U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp9072[0x19U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp9072[0x1aU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp9072[0x1bU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp9072[0x1cU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp9072[0x1dU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp9072[0x1eU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp9072[0x1fU];
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                               >> 2U))) ? (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                                           >> (0x3cU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 2U)))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1 
        = ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
           & (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3546(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3546\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*2079:0*/ __Vtemp9074[65];
    WData/*2079:0*/ __Vtemp9075[65];
    WData/*2079:0*/ __Vtemp9086[65];
    WData/*2079:0*/ __Vtemp9087[65];
    WData/*255:0*/ __Vtemp9097[8];
    WData/*255:0*/ __Vtemp9098[8];
    WData/*255:0*/ __Vtemp9103[8];
    WData/*255:0*/ __Vtemp9104[8];
    // Body
    VL_EXTEND_WI(2051,4, __Vtemp9074, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(2051,2051,11, __Vtemp9075, __Vtemp9074, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9075[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU]));
    VL_EXTEND_WI(2050,3, __Vtemp9086, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(2050,2050,11, __Vtemp9087, __Vtemp9086, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9087[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU]));
    __Vtemp9097[0U] = 1U;
    __Vtemp9097[1U] = 0U;
    __Vtemp9097[2U] = 0U;
    __Vtemp9097[3U] = 0U;
    __Vtemp9097[4U] = 0U;
    __Vtemp9097[5U] = 0U;
    __Vtemp9097[6U] = 0U;
    __Vtemp9097[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp9098, __Vtemp9097, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp9103[0U] = 1U;
    __Vtemp9103[1U] = 0U;
    __Vtemp9103[2U] = 0U;
    __Vtemp9103[3U] = 0U;
    __Vtemp9103[4U] = 0U;
    __Vtemp9103[5U] = 0U;
    __Vtemp9103[6U] = 0U;
    __Vtemp9103[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp9104, __Vtemp9103, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[2U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[3U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[4U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[4U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[5U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[5U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[6U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[6U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp9098[7U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp9104[7U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3547(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3547\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3548(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3548\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3549(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3549\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3550(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3550\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum) 
                                              - (IData)(1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3551(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3551\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
           & (0U == (0x10000000U & (0x10000000U ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
           & (0U == (0x10000000U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                     << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                  >> 0xaU)))));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3552(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3552\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp9114[32];
    WData/*1023:0*/ __Vtemp9115[32];
    WData/*1023:0*/ __Vtemp9120[32];
    WData/*1023:0*/ __Vtemp9121[32];
    WData/*1023:0*/ __Vtemp9126[32];
    WData/*1023:0*/ __Vtemp9127[32];
    WData/*1023:0*/ __Vtemp9132[32];
    WData/*1023:0*/ __Vtemp9133[32];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx;
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
        = vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen));
    __Vtemp9114[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9114[1U] = 0U;
    __Vtemp9114[2U] = 0U;
    __Vtemp9114[3U] = 0U;
    __Vtemp9114[4U] = 0U;
    __Vtemp9114[5U] = 0U;
    __Vtemp9114[6U] = 0U;
    __Vtemp9114[7U] = 0U;
    __Vtemp9114[8U] = 0U;
    __Vtemp9114[9U] = 0U;
    __Vtemp9114[0xaU] = 0U;
    __Vtemp9114[0xbU] = 0U;
    __Vtemp9114[0xcU] = 0U;
    __Vtemp9114[0xdU] = 0U;
    __Vtemp9114[0xeU] = 0U;
    __Vtemp9114[0xfU] = 0U;
    __Vtemp9114[0x10U] = 0U;
    __Vtemp9114[0x11U] = 0U;
    __Vtemp9114[0x12U] = 0U;
    __Vtemp9114[0x13U] = 0U;
    __Vtemp9114[0x14U] = 0U;
    __Vtemp9114[0x15U] = 0U;
    __Vtemp9114[0x16U] = 0U;
    __Vtemp9114[0x17U] = 0U;
    __Vtemp9114[0x18U] = 0U;
    __Vtemp9114[0x19U] = 0U;
    __Vtemp9114[0x1aU] = 0U;
    __Vtemp9114[0x1bU] = 0U;
    __Vtemp9114[0x1cU] = 0U;
    __Vtemp9114[0x1dU] = 0U;
    __Vtemp9114[0x1eU] = 0U;
    __Vtemp9114[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9115, __Vtemp9114);
    __Vtemp9120[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9120[1U] = 0U;
    __Vtemp9120[2U] = 0U;
    __Vtemp9120[3U] = 0U;
    __Vtemp9120[4U] = 0U;
    __Vtemp9120[5U] = 0U;
    __Vtemp9120[6U] = 0U;
    __Vtemp9120[7U] = 0U;
    __Vtemp9120[8U] = 0U;
    __Vtemp9120[9U] = 0U;
    __Vtemp9120[0xaU] = 0U;
    __Vtemp9120[0xbU] = 0U;
    __Vtemp9120[0xcU] = 0U;
    __Vtemp9120[0xdU] = 0U;
    __Vtemp9120[0xeU] = 0U;
    __Vtemp9120[0xfU] = 0U;
    __Vtemp9120[0x10U] = 0U;
    __Vtemp9120[0x11U] = 0U;
    __Vtemp9120[0x12U] = 0U;
    __Vtemp9120[0x13U] = 0U;
    __Vtemp9120[0x14U] = 0U;
    __Vtemp9120[0x15U] = 0U;
    __Vtemp9120[0x16U] = 0U;
    __Vtemp9120[0x17U] = 0U;
    __Vtemp9120[0x18U] = 0U;
    __Vtemp9120[0x19U] = 0U;
    __Vtemp9120[0x1aU] = 0U;
    __Vtemp9120[0x1bU] = 0U;
    __Vtemp9120[0x1cU] = 0U;
    __Vtemp9120[0x1dU] = 0U;
    __Vtemp9120[0x1eU] = 0U;
    __Vtemp9120[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9121, __Vtemp9120);
    __Vtemp9126[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9126[1U] = 0U;
    __Vtemp9126[2U] = 0U;
    __Vtemp9126[3U] = 0U;
    __Vtemp9126[4U] = 0U;
    __Vtemp9126[5U] = 0U;
    __Vtemp9126[6U] = 0U;
    __Vtemp9126[7U] = 0U;
    __Vtemp9126[8U] = 0U;
    __Vtemp9126[9U] = 0U;
    __Vtemp9126[0xaU] = 0U;
    __Vtemp9126[0xbU] = 0U;
    __Vtemp9126[0xcU] = 0U;
    __Vtemp9126[0xdU] = 0U;
    __Vtemp9126[0xeU] = 0U;
    __Vtemp9126[0xfU] = 0U;
    __Vtemp9126[0x10U] = 0U;
    __Vtemp9126[0x11U] = 0U;
    __Vtemp9126[0x12U] = 0U;
    __Vtemp9126[0x13U] = 0U;
    __Vtemp9126[0x14U] = 0U;
    __Vtemp9126[0x15U] = 0U;
    __Vtemp9126[0x16U] = 0U;
    __Vtemp9126[0x17U] = 0U;
    __Vtemp9126[0x18U] = 0U;
    __Vtemp9126[0x19U] = 0U;
    __Vtemp9126[0x1aU] = 0U;
    __Vtemp9126[0x1bU] = 0U;
    __Vtemp9126[0x1cU] = 0U;
    __Vtemp9126[0x1dU] = 0U;
    __Vtemp9126[0x1eU] = 0U;
    __Vtemp9126[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9127, __Vtemp9126);
    __Vtemp9132[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9132[1U] = 0U;
    __Vtemp9132[2U] = 0U;
    __Vtemp9132[3U] = 0U;
    __Vtemp9132[4U] = 0U;
    __Vtemp9132[5U] = 0U;
    __Vtemp9132[6U] = 0U;
    __Vtemp9132[7U] = 0U;
    __Vtemp9132[8U] = 0U;
    __Vtemp9132[9U] = 0U;
    __Vtemp9132[0xaU] = 0U;
    __Vtemp9132[0xbU] = 0U;
    __Vtemp9132[0xcU] = 0U;
    __Vtemp9132[0xdU] = 0U;
    __Vtemp9132[0xeU] = 0U;
    __Vtemp9132[0xfU] = 0U;
    __Vtemp9132[0x10U] = 0U;
    __Vtemp9132[0x11U] = 0U;
    __Vtemp9132[0x12U] = 0U;
    __Vtemp9132[0x13U] = 0U;
    __Vtemp9132[0x14U] = 0U;
    __Vtemp9132[0x15U] = 0U;
    __Vtemp9132[0x16U] = 0U;
    __Vtemp9132[0x17U] = 0U;
    __Vtemp9132[0x18U] = 0U;
    __Vtemp9132[0x19U] = 0U;
    __Vtemp9132[0x1aU] = 0U;
    __Vtemp9132[0x1bU] = 0U;
    __Vtemp9132[0x1cU] = 0U;
    __Vtemp9132[0x1dU] = 0U;
    __Vtemp9132[0x1eU] = 0U;
    __Vtemp9132[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9133, __Vtemp9132);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp9115[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp9121[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp9127[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp9133[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((VL_ULL(7) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                              >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((VL_ULL(7) 
                                          & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                             >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((VL_ULL(7) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3553(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3553\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3554(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3554\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3557(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3557\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp9135[3];
    WData/*95:0*/ __Vtemp9136[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0xaU))))
            : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_3 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___idx_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)));
    VL_EXTEND_WI(95,32, __Vtemp9135, vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp9136, __Vtemp9135, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   << 5U));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U] 
        = __Vtemp9136[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U] 
        = __Vtemp9136[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U] 
        = (0x7fffffffU & __Vtemp9136[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___io_serial_in_ready_T_3 
        = (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_a_valid_T 
        = (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_d_ready_T 
        = (8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30 
        = ((5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                    ? 1U : 4U)) ? 2U : ((4U == ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                 ? 1U
                                                 : 4U))
                                         ? 1U : ((3U 
                                                  == 
                                                  ((7U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                    ? 1U
                                                    : 4U))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   ((7U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                     ? 1U
                                                     : 4U))
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3558(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3558\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_6 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data)
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
                       >> 0x20U)) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40 
        = (3U & (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                  ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid) 
                     | ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                  : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                      & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                      ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                          ? ((1U == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                              ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30 
        = (1U & (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
                  ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx))
                  : (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
                      ? (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                 >> 2U)) : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                             ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                            >> 2U))
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                                             : (((1U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                 ? 
                                                ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                                                 : 
                                                ((~ 
                                                  ((0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3559(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3559\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           | (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? 1U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U])));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3562(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3562\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp9138[3];
    WData/*95:0*/ __Vtemp9139[3];
    WData/*95:0*/ __Vtemp9141[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_16 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap));
    VL_EXTEND_WI(95,32, __Vtemp9138, (0xfffffff8U & 
                                      (((IData)(1U) 
                                        + (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                   >> 3U))) 
                                       << 3U)));
    VL_EXTEND_WQ(95,64, __Vtemp9139, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr);
    VL_EXTEND_WQ(95,64, __Vtemp9141, (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                       ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp9138[0U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                  ? (__Vtemp9139[0U] 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U])
                                  : __Vtemp9141[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp9138[1U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                  ? (__Vtemp9139[1U] 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U])
                                  : __Vtemp9141[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp9138[2U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                  ? (__Vtemp9139[2U] 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U])
                                  : __Vtemp9141[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? 2U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6))
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3563(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3563\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3564(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3564\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp9150[32];
    WData/*1023:0*/ __Vtemp9151[32];
    WData/*1023:0*/ __Vtemp9156[32];
    WData/*1023:0*/ __Vtemp9157[32];
    WData/*1023:0*/ __Vtemp9162[32];
    WData/*1023:0*/ __Vtemp9163[32];
    WData/*1023:0*/ __Vtemp9168[32];
    WData/*1023:0*/ __Vtemp9169[32];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp9150[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9150[1U] = 0U;
    __Vtemp9150[2U] = 0U;
    __Vtemp9150[3U] = 0U;
    __Vtemp9150[4U] = 0U;
    __Vtemp9150[5U] = 0U;
    __Vtemp9150[6U] = 0U;
    __Vtemp9150[7U] = 0U;
    __Vtemp9150[8U] = 0U;
    __Vtemp9150[9U] = 0U;
    __Vtemp9150[0xaU] = 0U;
    __Vtemp9150[0xbU] = 0U;
    __Vtemp9150[0xcU] = 0U;
    __Vtemp9150[0xdU] = 0U;
    __Vtemp9150[0xeU] = 0U;
    __Vtemp9150[0xfU] = 0U;
    __Vtemp9150[0x10U] = 0U;
    __Vtemp9150[0x11U] = 0U;
    __Vtemp9150[0x12U] = 0U;
    __Vtemp9150[0x13U] = 0U;
    __Vtemp9150[0x14U] = 0U;
    __Vtemp9150[0x15U] = 0U;
    __Vtemp9150[0x16U] = 0U;
    __Vtemp9150[0x17U] = 0U;
    __Vtemp9150[0x18U] = 0U;
    __Vtemp9150[0x19U] = 0U;
    __Vtemp9150[0x1aU] = 0U;
    __Vtemp9150[0x1bU] = 0U;
    __Vtemp9150[0x1cU] = 0U;
    __Vtemp9150[0x1dU] = 0U;
    __Vtemp9150[0x1eU] = 0U;
    __Vtemp9150[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9151, __Vtemp9150);
    __Vtemp9156[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9156[1U] = 0U;
    __Vtemp9156[2U] = 0U;
    __Vtemp9156[3U] = 0U;
    __Vtemp9156[4U] = 0U;
    __Vtemp9156[5U] = 0U;
    __Vtemp9156[6U] = 0U;
    __Vtemp9156[7U] = 0U;
    __Vtemp9156[8U] = 0U;
    __Vtemp9156[9U] = 0U;
    __Vtemp9156[0xaU] = 0U;
    __Vtemp9156[0xbU] = 0U;
    __Vtemp9156[0xcU] = 0U;
    __Vtemp9156[0xdU] = 0U;
    __Vtemp9156[0xeU] = 0U;
    __Vtemp9156[0xfU] = 0U;
    __Vtemp9156[0x10U] = 0U;
    __Vtemp9156[0x11U] = 0U;
    __Vtemp9156[0x12U] = 0U;
    __Vtemp9156[0x13U] = 0U;
    __Vtemp9156[0x14U] = 0U;
    __Vtemp9156[0x15U] = 0U;
    __Vtemp9156[0x16U] = 0U;
    __Vtemp9156[0x17U] = 0U;
    __Vtemp9156[0x18U] = 0U;
    __Vtemp9156[0x19U] = 0U;
    __Vtemp9156[0x1aU] = 0U;
    __Vtemp9156[0x1bU] = 0U;
    __Vtemp9156[0x1cU] = 0U;
    __Vtemp9156[0x1dU] = 0U;
    __Vtemp9156[0x1eU] = 0U;
    __Vtemp9156[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9157, __Vtemp9156);
    __Vtemp9162[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9162[1U] = 0U;
    __Vtemp9162[2U] = 0U;
    __Vtemp9162[3U] = 0U;
    __Vtemp9162[4U] = 0U;
    __Vtemp9162[5U] = 0U;
    __Vtemp9162[6U] = 0U;
    __Vtemp9162[7U] = 0U;
    __Vtemp9162[8U] = 0U;
    __Vtemp9162[9U] = 0U;
    __Vtemp9162[0xaU] = 0U;
    __Vtemp9162[0xbU] = 0U;
    __Vtemp9162[0xcU] = 0U;
    __Vtemp9162[0xdU] = 0U;
    __Vtemp9162[0xeU] = 0U;
    __Vtemp9162[0xfU] = 0U;
    __Vtemp9162[0x10U] = 0U;
    __Vtemp9162[0x11U] = 0U;
    __Vtemp9162[0x12U] = 0U;
    __Vtemp9162[0x13U] = 0U;
    __Vtemp9162[0x14U] = 0U;
    __Vtemp9162[0x15U] = 0U;
    __Vtemp9162[0x16U] = 0U;
    __Vtemp9162[0x17U] = 0U;
    __Vtemp9162[0x18U] = 0U;
    __Vtemp9162[0x19U] = 0U;
    __Vtemp9162[0x1aU] = 0U;
    __Vtemp9162[0x1bU] = 0U;
    __Vtemp9162[0x1cU] = 0U;
    __Vtemp9162[0x1dU] = 0U;
    __Vtemp9162[0x1eU] = 0U;
    __Vtemp9162[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9163, __Vtemp9162);
    __Vtemp9168[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp9168[1U] = 0U;
    __Vtemp9168[2U] = 0U;
    __Vtemp9168[3U] = 0U;
    __Vtemp9168[4U] = 0U;
    __Vtemp9168[5U] = 0U;
    __Vtemp9168[6U] = 0U;
    __Vtemp9168[7U] = 0U;
    __Vtemp9168[8U] = 0U;
    __Vtemp9168[9U] = 0U;
    __Vtemp9168[0xaU] = 0U;
    __Vtemp9168[0xbU] = 0U;
    __Vtemp9168[0xcU] = 0U;
    __Vtemp9168[0xdU] = 0U;
    __Vtemp9168[0xeU] = 0U;
    __Vtemp9168[0xfU] = 0U;
    __Vtemp9168[0x10U] = 0U;
    __Vtemp9168[0x11U] = 0U;
    __Vtemp9168[0x12U] = 0U;
    __Vtemp9168[0x13U] = 0U;
    __Vtemp9168[0x14U] = 0U;
    __Vtemp9168[0x15U] = 0U;
    __Vtemp9168[0x16U] = 0U;
    __Vtemp9168[0x17U] = 0U;
    __Vtemp9168[0x18U] = 0U;
    __Vtemp9168[0x19U] = 0U;
    __Vtemp9168[0x1aU] = 0U;
    __Vtemp9168[0x1bU] = 0U;
    __Vtemp9168[0x1cU] = 0U;
    __Vtemp9168[0x1dU] = 0U;
    __Vtemp9168[0x1eU] = 0U;
    __Vtemp9168[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp9169, __Vtemp9168);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp9151[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp9157[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp9163[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp9169[0U]))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3565(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3565\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((VL_ULL(7) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                              >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((VL_ULL(7) 
                                          & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                             >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((VL_ULL(7) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3566(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3566\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_16) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? 5U : (((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))
                     ? 4U : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                              & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                              ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                  ? ((1U == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                                      ? 6U : ((0U == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                                               ? 3U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11)))
                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? (0x7fffffffU & ((IData)(0xffU) 
                                    << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                        << 3U))) : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                        ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                            ? (1U | (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                       ? 1U : 4U) << 1U))
                            : 0U) : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? (0x7fffffffU 
                                                   & ((IData)(0xfU) 
                                                      << 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                       << 2U)))
                                                : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3567(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3567\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp9170[3];
    WData/*95:0*/ __Vtemp9175[3];
    WData/*95:0*/ __Vtemp9176[3];
    WData/*95:0*/ __Vtemp9178[3];
    WData/*95:0*/ __Vtemp9183[3];
    WData/*95:0*/ __Vtemp9184[3];
    WData/*95:0*/ __Vtemp9186[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_48 
        = ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
           & (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
               & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
               ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                   ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)
                   : ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)));
    VL_EXTEND_WI(95,32, __Vtemp9170, (0xfffffff8U & 
                                      (((IData)(1U) 
                                        + (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                   >> 3U))) 
                                       << 3U)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U]
                : __Vtemp9170[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U]
                : __Vtemp9170[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[2U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U]
                : __Vtemp9170[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U]);
    VL_EXTEND_WQ(95,64, __Vtemp9175, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                      - VL_ULL(1)));
    VL_EXTEND_WQ(95,64, __Vtemp9176, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len);
    VL_EXTEND_WQ(95,64, __Vtemp9178, (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                       ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp9175[0U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                  ? (__Vtemp9176[0U] 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U])
                                  : __Vtemp9178[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp9175[1U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                  ? (__Vtemp9176[1U] 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U])
                                  : __Vtemp9178[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp9175[2U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                  ? (__Vtemp9176[2U] 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U])
                                  : __Vtemp9178[2U]));
    __Vtemp9183[0U] = (0xfffffffcU & ((IData)((VL_ULL(1) 
                                               + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                      << 2U));
    __Vtemp9183[1U] = ((3U & ((IData)((VL_ULL(1) + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                              >> 0x1eU)) | (0xfffffffcU 
                                            & ((IData)(
                                                       ((VL_ULL(1) 
                                                         + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                        >> 0x20U)) 
                                               << 2U)));
    __Vtemp9183[2U] = (3U & ((IData)(((VL_ULL(1) + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                      >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WQ(66,64, __Vtemp9184, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    VL_EXTEND_WQ(66,64, __Vtemp9186, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
        = (VL_LT_W(3, __Vtemp9183, __Vtemp9184) ? (0xfffffffcU 
                                                   & ((IData)(
                                                              (VL_ULL(1) 
                                                               + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                                      << 2U))
            : __Vtemp9186[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
        = (VL_LT_W(3, __Vtemp9183, __Vtemp9184) ? (
                                                   (3U 
                                                    & ((IData)(
                                                               (VL_ULL(1) 
                                                                + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                                       >> 0x1eU)) 
                                                   | (0xfffffffcU 
                                                      & ((IData)(
                                                                 ((VL_ULL(1) 
                                                                   + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                                  >> 0x20U)) 
                                                         << 2U)))
            : __Vtemp9186[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
        = (VL_LT_W(3, __Vtemp9183, __Vtemp9184) ? (3U 
                                                   & ((IData)(
                                                              ((VL_ULL(1) 
                                                                + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                               >> 0x20U)) 
                                                      >> 0x1eU))
            : __Vtemp9186[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3568(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3568\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3569(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3569\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp9189[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx)
            : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)
                ? 1U : 4U));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_28 
        = (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap) 
            & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap))
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq 
        = (((((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
              & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap)) 
             & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                         ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27)))
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27));
    VL_EXTEND_WQ(95,64, __Vtemp9189, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                      - VL_ULL(1)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U]
                : __Vtemp9189[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U]
                : __Vtemp9189[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U]
                : __Vtemp9189[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize 
        = ((0U == (((4U ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                   | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
            ? 2U : ((0U == (((2U ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                             | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                            | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
                     ? 1U : ((0U == (((1U ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                                      | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
                              ? 0U : 3U)));
}
