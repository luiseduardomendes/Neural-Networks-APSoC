// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__365(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__365\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_598 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_674) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                       >> 0xbU)) == (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
           & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source) 
              == (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                           >> 7U))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
               | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output))
            : (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0) 
                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid)) 
               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1) 
                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__366(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__366\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc 
        = ((2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
           | ((2U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (~ (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                    >> 2U))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
           | ((2U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                 >> 2U)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc 
        = ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
           | ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr) 
                    >> 2U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__367(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__367\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1 
        = ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
           | ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr) 
                 >> 2U)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_en) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__368(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__368\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_0 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)
            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx)
            : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid)
                ? 1U : 4U));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__369(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__369\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_0) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_0))))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_valid_output 
        = (1U & (((0x10U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                            << 4U)) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                                       << 1U)) >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_4_ready 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask)))) 
                    & (((IData)((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1))) 
                        << 1U) | (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                                        | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1)))))));
    vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask 
        = ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? ((0xf0U & ((- (IData)((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid) 
                                           >> 1U)))) 
                         << 4U)) | (0xfU & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))))))
            : ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5) 
                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5) 
                    & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))) 
                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5) 
                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr)))) 
                           << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4) 
                                          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))) 
                                      << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr)))) 
                                                 << 4U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3) 
                                                        & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))) 
                                                    << 3U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2) 
                                                              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__370(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__370\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))
            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___T 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_4_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1284 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_4_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__latch 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_799 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__winnerQual_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__winnerQual_1 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_d_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready) 
           & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
               ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys)
               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0)));
    if ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0 
            = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__371(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__371\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready) 
           & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
               ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1208 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1284) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_747 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__x1_d_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_d_ready) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
    if (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied 
            = (1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0x10U));
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_sink 
            = (1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xfU));
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param 
            = (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_sink = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param = 0U;
    }
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source 
        = (0xfU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
                     ? ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                         << 0x15U) | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xbU)) : 0U) 
                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
                       ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                          >> 4U) : 0U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)
             : 0U) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size)
                       : 0U));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode 
        = (7U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
                   ? vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__372(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__372\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_729 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_613 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_747) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__x1_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__x1_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__x1_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                       >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_677 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_799) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_681 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_bits_last_output 
        = (1U & ((0xedU | ((((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4)) 
                             | (0U == ((4U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                        ? 0U : (7U 
                                                & (~ 
                                                   (0x3ffffU 
                                                    & (((IData)(0x3fU) 
                                                        << 
                                                        (0xfU 
                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       >> 3U))))))) 
                            << 4U) | (((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1)) 
                                       | (0U == ((1U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))
                                                  ? 
                                                 (7U 
                                                  & (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size)) 
                                                         >> 3U))))
                                                  : 0U))) 
                                      << 1U))) >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__373(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__373\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_1 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_587 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_729) 
           & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter)))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_605 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_729) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_enq_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T_1 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_enq_ready_output) 
            & (IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___portsAOI_in_0_a_ready_WIRE 
        = (((IData)((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address 
                     >> 0x1cU)) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
           | ((~ (IData)((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address 
                          >> 0x1cU))) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
           & (6U != (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___GEN_1 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_731 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___portsAOI_in_0_a_ready_WIRE) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_662 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_731) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__379(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__379\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___ridx_incremented_T_1)
                : 0U);
    }
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx) 
                                            != (0xcU 
                                                ^ (
                                                   ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__380(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__380\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__381(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__381\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid_reg) 
           & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__382(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__382\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T_1 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving) 
           & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___io_deq_valid_output));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving) 
                      & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___io_deq_valid_output))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T_2 
        = ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT___io_enq_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__383(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__383\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray) 
                                         >> 3U));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray) 
                                               >> 2U)));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray) 
                                               >> 1U)));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__384(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__384\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness___024root___combo__TOP__0(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out 
        = vlSelf->clock;
    vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate__DOT__en_latched) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__396(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__396\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__mem_0_source 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__mem_0_source;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__mem_0_corrupt 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__mem_0_corrupt;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__397(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__397\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__413(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__413\n"); );
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__519(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__519\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_set)) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_clr))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set)
                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set)
                        ? 5U : 0U) : 0U)) & (~ (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr)))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set)
                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set)
                        ? 5U : 0U) : 0U)) & (~ (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done)))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_set) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set)) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set)) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__520(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__520\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set)
                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set)
                        ? 5U : 0U) : 0U)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_846)
                                                 ? 
                                                ((0x1eU 
                                                  >= 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0x7fffffffU 
                                                  & ((IData)(0xfU) 
                                                     << 
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0U)
                                                 : 0U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_set)
                    ? (1U | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode) 
                             << 1U)) : 0U)) & (~ (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_clr)))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set)
                    ? (1U | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode) 
                             << 1U)) : 0U)) & (~ (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr)))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set)) 
              & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_846) 
                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__521(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__521\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask = 3U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set)
                    ? (1U | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode) 
                             << 1U)) : 0U)) & (~ (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done)))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set)
                    ? (1U | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode) 
                             << 1U)) : 0U)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_846)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                     << 2U))
                                                    ? 
                                                   (0x7fffffffU 
                                                    & ((IData)(0xfU) 
                                                       << 
                                                       ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                        << 2U)))
                                                    : 0U)
                                                   : 0U)));
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__latch) 
             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_1)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_2)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_3 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_3)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_4)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_5)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__522(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__522\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_5)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_6)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_6)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_7)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_7 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_7)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_8)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_8 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_8)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_9)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_9 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_9)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_10)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1 = 0U;
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft 
            = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__latch)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft) 
                        - ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___io_dmi_resp_ready_output) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__out_9_valid)))));
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1 
                = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys) 
                    >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_1_a_valid));
        }
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
            = (1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_d_ready))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft) 
                        - ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_d_ready) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid)))));
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__winnerQual_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__523(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__523\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
           | ((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__winnerQual_1)) 
                  & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode)))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle)));
    if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_valid)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg))))) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_11) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_data = 0U;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_op = 0U;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_data 
                = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_33) 
                    << 0x1fU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_32) 
                                  << 0x1eU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_31) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_30) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_29) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_28) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_27) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_26) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_25) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_24) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_23) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_22) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_21) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_20) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_19) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_18) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_17) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_16) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_15) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_14) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_13) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_12) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_11) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_10) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_9) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_7) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_5) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_4) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_3) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_2))))))))))))))))))))))))))))))));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_op 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_bits_op;
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)
            ? 0U : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes) 
                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set)
                             ? 5U : 0U) : 0U)) & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_846)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (4U 
                                                      & ((IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                  >> 0x23U)) 
                                                         << 2U)))
                                                     ? 
                                                    (0x7fffffffU 
                                                     & ((IData)(0xfU) 
                                                        << 
                                                        (4U 
                                                         & ((IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                     >> 0x23U)) 
                                                            << 2U))))
                                                     : 0U)
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__524(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__524\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set)) 
              & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_846) 
                    & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                  >> 0x23U)))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)
            ? 0U : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set)
                         ? (1U | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode) 
                                  << 1U)) : 0U)) & 
                    (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_846)
                         ? ((0x1eU >= (4U & ((IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x23U)) 
                                             << 2U)))
                             ? (0x7fffffffU & ((IData)(0xfU) 
                                               << (4U 
                                                   & ((IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                               >> 0x23U)) 
                                                      << 2U))))
                             : 0U) : 0U))));
    if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_valid)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_11)
                ? 0U : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_40) 
                         << 6U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_39) 
                                    << 5U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_38) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_37) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_36) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_35) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_34))))))));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset) 
         | (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass_reg 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT____Vcellinp__dmiBypass__io_bypass;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__525(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__525\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__526(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__526\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_10 
            = (1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_capture_bits_dmiStatus));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_11 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_capture_bits_dmiStatus) 
                     >> 1U));
    } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_10 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_11;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_11 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_12;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_opcode)) 
                << 0x28U) | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_param)) 
                              << 0x26U) | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_size)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_source)) 
                                               << 0x23U) 
                                              | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_sink)) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_denied)) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_data)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_corrupt)))))))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_12)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_13)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_13 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_13)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_14)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_14 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_14)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_15)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_15 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_15)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_16)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__527(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__527\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_16 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_16)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_17)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_17 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_17)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_18)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_18 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_18)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_19)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_19 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_19)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_20)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_20 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_20)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_21)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_21 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_21)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_22)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_22 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_22)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_23)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_23 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_23)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_24)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_24 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_24)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_25)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_25 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_25)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_26)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_26 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_26)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_27)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_27 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_27)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_28)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__528(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__528\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_28 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_28)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_29)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_29 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_29)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_30)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_30 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_30)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_31)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_31 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___GEN)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_31)
               : ((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                  & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__536(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__536\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_incremented));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__widx_incremented));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__537(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__537\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_valid_output) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_incremented) 
                 != (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__widx_incremented) 
                 != (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState = 0xfU;
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg 
            = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_1)) 
               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___nonzeroResp_T_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg 
            = ((~ (IData)((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)))) 
               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture)
                   ? ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)) 
                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg) 
                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___nonzeroResp_T_1)))
                   : ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_valid)) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg))));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState 
            = (0xfU & (IData)((((((QData)((IData)((
                                                   (((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                      ? 0xfU
                                                      : 0xcU) 
                                                    << 0x1cU) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                         ? 9U
                                                         : 0xaU) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                            ? 7U
                                                            : 0xcU) 
                                                          << 0x14U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                               ? 7U
                                                               : 0xcU) 
                                                             << 0x10U) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                  ? 8U
                                                                  : 0xbU) 
                                                                << 0xcU) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                     ? 9U
                                                                     : 0xaU) 
                                                                   << 8U) 
                                                                  | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                        ? 0xdU
                                                                        : 0xbU) 
                                                                      << 4U) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                         ? 0xdU
                                                                         : 0xaU)))))))))) 
                                  << 0x20U) | ((QData)((IData)(
                                                               (0x400U 
                                                                | ((0x200U 
                                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)) 
                                                                       << 9U)) 
                                                                   | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                         ? 1U
                                                                         : 2U) 
                                                                       << 4U) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                          ? 7U
                                                                          : 0xcU)))))) 
                                               << 0x14U)) 
                                | (QData)((IData)((0xe0000U 
                                                   | (((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS) 
                                                       << 0x10U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                            ? 0U
                                                            : 3U) 
                                                          << 0xcU) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                               ? 1U
                                                               : 2U) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                  ? 5U
                                                                  : 3U) 
                                                                << 4U) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                                                   ? 5U
                                                                   : 2U))))))))) 
                               >> (0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState) 
                                            << 2U)))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__538(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__538\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_1)) 
              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___busy_T_1)) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    if (vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 = 0U;
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg 
            = ((~ ((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)) 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___io_dmi_resp_ready_output) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__out_9_valid)))) 
               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg 
            = ((~ ((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_12))) 
               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_valid) 
                   & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg) 
                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_11)))) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_12)
                   ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                      >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_12)
                   ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                      >> 1U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_12)
                   ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                      >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0)));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__539(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__539\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__540(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__540\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid_reg) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_capture_bits_dmiStatus 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg) 
            << 1U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg) 
                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_850 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
           & (6U != (7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                   >> 0x28U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_gray));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__541(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__541\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ready_reg) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__ridx_gray));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__543(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__543\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__544(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__544\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
           & ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))
               ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_0)
                   : ((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0)
                       : ((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_0)
                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT__reg_0))))
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1604(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1604\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_trans_weight_1203 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_trans_weight_1203;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_trans_output_1203 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_trans_output_1203;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_wrot180 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_wrot180;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_wrot180 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_wrot180;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_trans_output_1203 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_trans_output_1203;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_trans_weight_1203 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_trans_weight_1203;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1605(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1605\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_trans_weight_0132 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_trans_weight_0132;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_trans_weight_0132 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_trans_weight_0132;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1606(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1606\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__next_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__tail_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1607(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1607\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__tail_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__tail_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1611(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1611\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1612(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1612\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__int_rtc_tick_c_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__int_rtc_tick_c_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1613(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1613\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_c_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_c_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_inst_xs2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_inst_xs2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_inst_xs1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_inst_xs1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_inst_xd 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_inst_xd;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_xs2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_xs2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_xs1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_xs1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_xd 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_xd;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_xs1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_xs1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_xd 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_xd;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_xs2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_xs2;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_cmd_inst_xs2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_cmd_inst_xs2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_cmd_inst_xd 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_cmd_inst_xd;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_cmd_inst_xs1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_cmd_inst_xs1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1614(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1614\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_xs1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_xs1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_xd 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_xd;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_xs2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_xs2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_c_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_c_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1615(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1615\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1616(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1616\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_r 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_r;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1619(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1619\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1621(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1621\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_r 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_r;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1622(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1622\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__maybe_full;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1623(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1623\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__snapshot_enable 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__snapshot_enable;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1624(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1624\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1625(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1625\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__waddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__waddr;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__total_bytes_sent 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__total_bytes_sent;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1626(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1626\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__matmul_id 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__matmul_id;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1627(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1627\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__io_beatData_bits_last_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__io_beatData_bits_last_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__pipeline_stall_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__pipeline_stall_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__total_bytes_read 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__total_bytes_read;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1628(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1628\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1629(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1629\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__d_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1630(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1630\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1631(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1631\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U];
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1632(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1632\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__row_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__row_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1633(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1633\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1635(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1635\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1636(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1636\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__state;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1637(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1637\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1638(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1638\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1639(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1639\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mul 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mul;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1640(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1640\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1641(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1641\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1642(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1642\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_configured 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_configured;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1643(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1643\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1644(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1644\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1645(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1645\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1646(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1646\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1647(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1647\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1678(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1678\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h2dd246c8__0;
    VlWide<130>/*4159:0*/ __Vtemp_h287d30ea__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2dd246c8__1;
    VlWide<130>/*4159:0*/ __Vtemp_hb9e75b32__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2dd246c8__2;
    VlWide<130>/*4159:0*/ __Vtemp_h6268330d__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2dd246c8__3;
    VlWide<130>/*4159:0*/ __Vtemp_h03072757__0;
    // Body
    VL_EXTEND_WI(4158,11, __Vtemp_h2dd246c8__0, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h287d30ea__0, __Vtemp_h2dd246c8__0, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_h2dd246c8__1, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_hb9e75b32__0, __Vtemp_h2dd246c8__1, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_h2dd246c8__2, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h6268330d__0, __Vtemp_h2dd246c8__2, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_h2dd246c8__3, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h03072757__0, __Vtemp_h2dd246c8__3, 0U);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1679(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1679\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h2dd246c8__0;
    VlWide<130>/*4159:0*/ __Vtemp_h287d30ea__0;
    // Body
    VL_EXTEND_WI(4158,11, __Vtemp_h2dd246c8__0, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h287d30ea__0, __Vtemp_h2dd246c8__0, 0U);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1710(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1710\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_hc8ab27da__0;
    VlWide<130>/*4159:0*/ __Vtemp_hbe776029__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc8ab27da__1;
    VlWide<130>/*4159:0*/ __Vtemp_h2129fad8__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc8ab27da__2;
    VlWide<130>/*4159:0*/ __Vtemp_hec2fb6f5__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc8ab27da__3;
    VlWide<130>/*4159:0*/ __Vtemp_ha0e90c3c__0;
    // Body
    VL_EXTEND_WI(4158,11, __Vtemp_hc8ab27da__0, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_hbe776029__0, __Vtemp_hc8ab27da__0, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_hc8ab27da__1, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h2129fad8__0, __Vtemp_hc8ab27da__1, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_hc8ab27da__2, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_hec2fb6f5__0, __Vtemp_hc8ab27da__2, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_hc8ab27da__3, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_ha0e90c3c__0, __Vtemp_hc8ab27da__3, 0U);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1711(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1711\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_hc8ab27da__0;
    VlWide<130>/*4159:0*/ __Vtemp_hbe776029__0;
    // Body
    VL_EXTEND_WI(4158,11, __Vtemp_hc8ab27da__0, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_hbe776029__0, __Vtemp_hc8ab27da__0, 0U);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1713(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1713\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1714(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1714\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__len 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__len;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_0;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1715(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1715\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_14 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_14;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_13 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_13;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1716(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1716\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_11 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_11;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__instructions_allocated 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__instructions_allocated;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1717(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1717\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1718(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1718\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1719(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1719\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1721(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1721\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1722(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1722\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1723(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1723\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_repeats 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_repeats;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__control_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__control_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wcol_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wcol_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wrow_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wrow_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1724(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1724\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pocol_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pocol_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__porow_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__porow_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1725(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1725\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1726(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1726\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1727(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1727\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1728(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1728\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1729(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1729\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1730(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1730\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1731(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1731\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__maybe_full;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1732(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1732\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1733(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1733\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1734(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1734\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1735(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1735\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1736(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1736\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_valid;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1737(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1737\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1738(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1738\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1739(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1739\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1740(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1740\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1741(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1741\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__neg_out 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__neg_out;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1742(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1742\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_kill_REG 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_kill_REG;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_zks 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_zks;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_zkn 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_zkn;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_zbk 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_zbk;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1744(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1744\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1745(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1745\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_2;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1746(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1746\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_3;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1747(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1747\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1748(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1748\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__och 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__och;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__count;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__bytesRequested 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__bytesRequested;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_cease_r 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_cease_r;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__new_weights 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__new_weights;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_wfi 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_wfi;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1749(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1749\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1750(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1750\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_toint 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_toint;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_inst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_inst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fromint 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fromint;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fma 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fma;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_div 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_div;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1751(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1751\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1754(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1754\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1755(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1755\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1756(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1756\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__a_fire_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__a_fire_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_repeats 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_repeats;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1757(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1757\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__recent_progress_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__recent_progress_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1758(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1758\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1759(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1759\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1761(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1761\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_pixel_repeats 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_pixel_repeats;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_14 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_14;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_11 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_11;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1762(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1762\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_signed 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_signed;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_tag 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_tag;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1763(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1763\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_count;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1764(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1764\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_sfence 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_sfence;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1787(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1787\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1792(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1792\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__solitary_preload 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__solitary_preload;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1793(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1793\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__output_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__output_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1794(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1794\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_reg_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_reg_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_7 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_7;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_4 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_4;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_6 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_6;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_5 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_5;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__counters__DOT__counterfile__DOT__counters_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__maybe_full;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1797(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1797\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__maybe_full;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1828(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1828\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h697d0e6f__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5865b9bf__0;
    VlWide<130>/*4159:0*/ __Vtemp_h697d0e6f__1;
    VlWide<130>/*4159:0*/ __Vtemp_h3d261864__0;
    VlWide<130>/*4159:0*/ __Vtemp_h697d0e6f__2;
    VlWide<130>/*4159:0*/ __Vtemp_h25053848__0;
    VlWide<130>/*4159:0*/ __Vtemp_h697d0e6f__3;
    VlWide<130>/*4159:0*/ __Vtemp_hd6281c9d__0;
    // Body
    VL_EXTEND_WI(4158,11, __Vtemp_h697d0e6f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_source));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h5865b9bf__0, __Vtemp_h697d0e6f__0, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_h697d0e6f__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_source));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h3d261864__0, __Vtemp_h697d0e6f__1, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_h697d0e6f__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_source));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_h25053848__0, __Vtemp_h697d0e6f__2, 0U);
    VL_EXTEND_WI(4158,11, __Vtemp_h697d0e6f__3, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_source));
    VL_CONCAT_WWI(4160,4158,2, __Vtemp_hd6281c9d__0, __Vtemp_h697d0e6f__3, 0U);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1831(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1831\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__control_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__control_state;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1832(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1832\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__maybe_full;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1833(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1833\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1834(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1834\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_gf_inst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_gf_inst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1835(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1835\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1839(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1839\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__isValid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__isValid;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1840(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1840\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pageValid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pageValid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1932(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1932\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__regs_2_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__regs_2_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__regs_1_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__regs_1_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1933(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1933\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1934(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1934\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1935(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1935\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_4 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_4;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_5 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_5;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_6 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_6;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_3__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_2__DOT__valids_3;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1936(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1936\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p_1__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__ex_read_pipe_p__DOT__valids_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__regs_0_valid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__regs_0_valid;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__cmd_q__DOT__len 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__cmd_q__DOT__len;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1937(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1937\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__total_latency 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__total_latency;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__xactBusy 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__xactBusy;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__raddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__raddr;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1938(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1938\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__beatsLeft;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1939(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1939\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1940(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1940\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__total_rows_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__len 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__len;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_7 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__valids_7;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1941(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1941\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_0;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1942(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1942\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1943(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1943\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1944(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1944\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__total_rows_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__total_rows_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__total_rows_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__total_rows_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2288(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2288\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__in_prop 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__in_prop;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2330(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2330\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2331(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2331\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_size 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_size;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2332(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2332\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2333(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2333\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_dirty;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_dirty 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_dirty;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2748(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2748\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__cmd_q__DOT__waddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__cmd_q__DOT__waddr;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2749(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2749\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__state_reg_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__state_reg_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_2_valid_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_2_valid_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_0_valid_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_0_valid_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_1_valid_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_1_valid_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_3_valid_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__superpage_entries_3_valid_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_3;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT__sectored_entries_0_0_valid_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__req_vaddr 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__req_vaddr;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__bytesSent 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__bytesSent;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3664(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3664\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3665(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3665\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__count;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3666(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3666\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantfirst;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3667(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3667\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_grantack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_grantack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantfirst;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3668(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3668\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grant;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3669(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3669\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_execute;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_execute 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_execute;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3670(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3670\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grant 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grant;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_flush 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_flush;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__fill 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__fill;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_param 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_param;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_opcode 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_opcode;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_corrupt 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_corrupt;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_mask 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_mask;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[0U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[0U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[1U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[1U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[2U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[2U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[3U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data[3U];
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_size 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_size;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3773(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3773\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_releaseack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_releaseack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_releaseack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_releaseack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_releaseack 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_releaseack;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_acquire 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_acquire;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeackfirst;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3774(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3774\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_pprobe 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_pprobe;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_rprobeackfirst 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__head_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__head_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__head_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__head_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_tag 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_tag;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_source 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_source;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4236(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4236\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5675(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5675\n"); );
    // Body
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9843:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization: %2#\n",
                   5,(0x1fU & ((0xfU & ((7U & (((3U 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_valid) 
                                                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_valid)) 
                                                    + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_valid))) 
                                                + (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_valid) 
                                                      + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_valid)))) 
                                               + (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_valid) 
                                                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_valid))))) 
                                        + (7U & (((3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid) 
                                                      + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___utilization_ex_q_T_1))) 
                                                  + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_7)) 
                                                 + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_8))))) 
                               + (0xfU & ((7U & (((3U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_valid) 
                                                       + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_valid)) 
                                                      + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_valid))) 
                                                  + 
                                                  (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_valid) 
                                                      + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_valid)))) 
                                                 + 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_valid) 
                                                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_valid))))) 
                                          + (7U & (
                                                   ((3U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_valid) 
                                                        + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___utilization_ex_q_T_23))) 
                                                    + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17)) 
                                                   + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_18))))))));
    }
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9845:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization ld q (incomplete): %2#\n",
                   5,(0x1fU & ((0xfU & ((7U & (((3U 
                                                 & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_q)))) 
                                                    + 
                                                    (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_issued))) 
                                                     & (0U 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_q))))) 
                                                + (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_q)))))) 
                                               + (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_q))))))) 
                                        + (7U & (((3U 
                                                   & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_issued))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_issued))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_q)))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_q))))) 
                                                  + 
                                                  (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_q)))))) 
                                                 + 
                                                 (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_q))))))))) 
                               + (0xfU & ((7U & (((3U 
                                                   & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_issued))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_issued))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_q)))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_q))))) 
                                                  + 
                                                  (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_issued))) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_q)))))) 
                                                 + 
                                                 (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_issued))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_q))))))) 
                                          + (7U & (
                                                   ((3U 
                                                     & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_issued))) 
                                                          & (0U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_q))) 
                                                         + 
                                                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_issued))) 
                                                          & (0U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_q)))) 
                                                        + 
                                                        (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_issued))) 
                                                         & (0U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_q))))) 
                                                    + 
                                                    (3U 
                                                     & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_issued))) 
                                                         & (0U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_q))) 
                                                        + 
                                                        (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_issued))) 
                                                         & (0U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_q)))))) 
                                                   + 
                                                   (3U 
                                                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_issued))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_issued))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_q))))))))))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5676(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5676\n"); );
    // Body
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9849:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization st q (incomplete): %2#\n",
                   5,(0x1fU & ((0xfU & ((7U & (((3U 
                                                 & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_q)))) 
                                                    + 
                                                    (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_issued))) 
                                                     & (2U 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_q))))) 
                                                + (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_q)))))) 
                                               + (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_q))))))) 
                                        + (7U & (((3U 
                                                   & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_issued))) 
                                                        & (2U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_issued))) 
                                                        & (2U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_q)))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_q))))) 
                                                  + 
                                                  (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_q)))))) 
                                                 + 
                                                 (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_q))))))))) 
                               + (0xfU & ((7U & (((3U 
                                                   & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_issued))) 
                                                        & (2U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_issued))) 
                                                        & (2U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_q)))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_q))))) 
                                                  + 
                                                  (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_issued))) 
                                                       & (2U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_q)))))) 
                                                 + 
                                                 (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_issued))) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_q))))))) 
                                          + (7U & (
                                                   ((3U 
                                                     & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_issued))) 
                                                          & (2U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_q))) 
                                                         + 
                                                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_issued))) 
                                                          & (2U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_q)))) 
                                                        + 
                                                        (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_issued))) 
                                                         & (2U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_q))))) 
                                                    + 
                                                    (3U 
                                                     & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_issued))) 
                                                         & (2U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_q))) 
                                                        + 
                                                        (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_issued))) 
                                                         & (2U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_q)))))) 
                                                   + 
                                                   (3U 
                                                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_issued))) 
                                                        & (2U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_issued))) 
                                                        & (2U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_q))))))))))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5677(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5677\n"); );
    // Body
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9853:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization ex q (incomplete): %2#\n",
                   5,(0x1fU & ((0xfU & ((7U & (((3U 
                                                 & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_q)))) 
                                                    + 
                                                    (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_issued))) 
                                                     & (1U 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_q))))) 
                                                + (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_q)))))) 
                                               + (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_q))))))) 
                                        + (7U & (((3U 
                                                   & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_issued))) 
                                                        & (1U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_issued))) 
                                                        & (1U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_q)))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_q))))) 
                                                  + 
                                                  (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_q)))))) 
                                                 + 
                                                 (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_q))))))))) 
                               + (0xfU & ((7U & (((3U 
                                                   & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_issued))) 
                                                        & (1U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_issued))) 
                                                        & (1U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_q)))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_q))))) 
                                                  + 
                                                  (3U 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_q))) 
                                                      + 
                                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_issued))) 
                                                       & (1U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_q)))))) 
                                                 + 
                                                 (3U 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_q))) 
                                                     + 
                                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_issued))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_q))))))) 
                                          + (7U & (
                                                   ((3U 
                                                     & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_issued))) 
                                                          & (1U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_q))) 
                                                         + 
                                                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_issued))) 
                                                          & (1U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_q)))) 
                                                        + 
                                                        (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_issued))) 
                                                         & (1U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_q))))) 
                                                    + 
                                                    (3U 
                                                     & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_issued))) 
                                                         & (1U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_q))) 
                                                        + 
                                                        (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_issued))) 
                                                         & (1U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_q)))))) 
                                                   + 
                                                   (3U 
                                                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_issued))) 
                                                        & (1U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_q))) 
                                                       + 
                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_issued))) 
                                                        & (1U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_q))))))))))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5678(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5678\n"); );
    // Body
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9857:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization ld q: %2#\n",
                   4,(0xfU & ((7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_valid) 
                                            + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_valid))) 
                                     + (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_valid) 
                                              + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_valid))))) 
                              + (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_valid) 
                                              + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_valid))) 
                                       + (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_valid) 
                                                + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid))))))));
    }
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9859:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization st q: %1#\n",
                   3,(7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17) 
                            + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_18))));
    }
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9861:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Utilization ex q: %2#\n",
                   5,(0x1fU & ((0xfU & ((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___utilization_ex_q_T_1) 
                                               + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_7))) 
                                        + (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_8) 
                                                 + 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_valid) 
                                                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_valid))))))) 
                               + (0xfU & ((7U & ((3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_valid) 
                                                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_valid))) 
                                                 + 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_valid) 
                                                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_valid))))) 
                                          + (7U & (
                                                   (3U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_valid) 
                                                       + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_valid))) 
                                                   + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___utilization_ex_q_T_23))))))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5679(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5679\n"); );
    // Body
    if (VL_UNLIKELY(((
                    // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ReservationStation.sv:9863:13
verbose&&done_reset
                     & (0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_FWRITEF(0x80000002U,"Packed deps: Vec(%9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#, %9#)\n",
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_0)))))))))))))))))))))))))))),
                   28,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_7) 
                        << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_6) 
                                      << 0x1aU) | (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_5) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_4) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_3) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_2) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_1) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_15) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_14) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_13) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_12) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_0)))))))))))))))))))))))))))));
    }
}
