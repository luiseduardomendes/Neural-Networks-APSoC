// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__22(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__22\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__23(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__23\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__24(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__24\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txm__DOT__sample 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__sample;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txm__DOT__debounce 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__debounce;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txm__DOT__state 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__state;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txm__DOT__prescaler 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__prescaler;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__25(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__25\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid 
        = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__len 
        = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__addr 
        = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U];
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[1U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[1U];
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[2U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[2U];
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[3U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[3U];
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[4U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[4U];
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[5U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[5U];
    vlSelf->__Vdly__TestHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg 
        = vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__26(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__26\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__296(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__296\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__sink 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_587)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__sink));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__denied 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_587)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__denied));
    if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__shifter;
        vlSelf->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value;
    }
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)));
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode 
            = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode;
    }
    if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)))) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__297(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__297\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)))) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__298(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__298\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr;
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode;
    }
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__299(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__299\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog));
        if (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T_2) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
                = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__wrap_wrap)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount))));
        }
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_729))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_674) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_747))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_731) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_799))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog));
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1284) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1357))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog));
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_1) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size;
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___GEN_1) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__300(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__300\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler = 0U;
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1284) 
                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1357))
                ? 0U : ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog));
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1357) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_2)
                              ? ((1U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (((0x1aU >= 
                                          (0xfU & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                          ? (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))))
                                          : 0U) >> 3U))
                                  : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U))));
        }
        if ((0U != (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter))) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler 
                = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__pulse)
                    ? 0x364U : (0xffffU & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler) 
                                           - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT___T_6) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter 
                = (0xfU & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter) 
                           - (IData)(1U)));
        } else if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT___T_5) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter = 0xaU;
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_729) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : (~ ((
                                                   (0xcU 
                                                    >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size))
                                                    ? 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size)))
                                                    : 0U) 
                                                  >> 3U))));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                          | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_set)) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1223) 
                                               & (~ 
                                                  (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__301(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__301\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_799) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__do_enq;
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1357) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_1)
                              ? ((1U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (((0x1aU >= 
                                          (0xfU & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                          ? (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))))
                                          : 0U) >> 3U))
                                  : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_729) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_1)
                          ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size))
                                  ? (0x1fffU & ((IData)(0x3fU) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size)))
                                  : 0U) >> 3U)) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1) 
                                                   - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__302(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__302\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value)));
        }
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_set)
                    ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_set)
                        ? (1U | ((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size) 
                                 << 1U)) : 0U) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1223)
                      ? ((0x1eU >= (8U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 6U))) ? 
                         (0x7fffffffU & ((IData)(0xffU) 
                                         << (8U & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))))
                          : 0U) : 0U)));
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value)));
        }
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_17) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_address 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_address;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_rmw_data;
    }
    if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg;
        vlSelf->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value;
    }
}

extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f9cad_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h9cfc9aaf_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f1ca9_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f9ca1_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__303(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__303\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h46763d58__0;
    VlWide<65>/*2079:0*/ __Vtemp_hab73a1bc__0;
    VlWide<64>/*2047:0*/ __Vtemp_haae330f5__0;
    VlWide<65>/*2079:0*/ __Vtemp_h1588dd64__0;
    VlWide<65>/*2079:0*/ __Vtemp_h8fa03135__0;
    VlWide<65>/*2079:0*/ __Vtemp_ha6a05ca9__0;
    VlWide<65>/*2079:0*/ __Vtemp_h4b97aa1f__0;
    VlWide<65>/*2079:0*/ __Vtemp_h153773cd__0;
    VlWide<65>/*2079:0*/ __Vtemp_h581bd3c5__0;
    VlWide<65>/*2079:0*/ __Vtemp_h2a1e79c9__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha73df806__0;
    VlWide<65>/*2079:0*/ __Vtemp_he167e192__0;
    VlWide<65>/*2079:0*/ __Vtemp_haae4fd03__0;
    VlWide<65>/*2079:0*/ __Vtemp_hdbf06588__0;
    VlWide<65>/*2079:0*/ __Vtemp_h831c6dd8__0;
    VlWide<65>/*2079:0*/ __Vtemp_h9c9f57f7__0;
    VlWide<65>/*2079:0*/ __Vtemp_h4b97aa1f__1;
    VlWide<65>/*2079:0*/ __Vtemp_hba122332__0;
    VlWide<65>/*2079:0*/ __Vtemp_h444da3cb__0;
    VlWide<65>/*2079:0*/ __Vtemp_h811c0857__0;
    // Body
    if (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_17) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_mask;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_source 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source;
    }
    VL_EXTEND_WI(2050,3, __Vtemp_hab73a1bc__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 5U)))
                                                 : 0U));
    VL_EXTEND_WI(2048,8, __Vtemp_haae330f5__0, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 8U)));
    VL_CONCAT_WWI(2050,2048,2, __Vtemp_h1588dd64__0, __Vtemp_haae330f5__0, 0U);
    VL_SHIFTL_WWW(2050,2050,2050, __Vtemp_h8fa03135__0, __Vtemp_hab73a1bc__0, __Vtemp_h1588dd64__0);
    VL_AND_W(65, __Vtemp_ha6a05ca9__0, VTestHarness__ConstPool__CONST_h614f9cad_0, __Vtemp_h8fa03135__0);
    VL_EXTEND_WI(2061,8, __Vtemp_h4b97aa1f__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    VL_CONCAT_WWI(2063,2061,2, __Vtemp_h153773cd__0, __Vtemp_h4b97aa1f__0, 0U);
    VL_SHIFTL_WWW(2063,2063,2063, __Vtemp_h581bd3c5__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, __Vtemp_h153773cd__0);
    VL_AND_W(65, __Vtemp_h2a1e79c9__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h581bd3c5__0);
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
        __Vtemp_h46763d58__0[1U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h46763d58__0[2U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h46763d58__0[3U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h46763d58__0[4U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h46763d58__0[5U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h46763d58__0[6U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h46763d58__0[7U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h46763d58__0[8U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h46763d58__0[9U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h46763d58__0[0xaU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h46763d58__0[0xbU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h46763d58__0[0xcU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h46763d58__0[0xdU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h46763d58__0[0xeU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h46763d58__0[0xfU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h46763d58__0[0x10U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h46763d58__0[0x11U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h46763d58__0[0x12U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h46763d58__0[0x13U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h46763d58__0[0x14U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h46763d58__0[0x15U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h46763d58__0[0x16U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h46763d58__0[0x17U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h46763d58__0[0x18U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h46763d58__0[0x19U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h46763d58__0[0x1aU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h46763d58__0[0x1bU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h46763d58__0[0x1cU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h46763d58__0[0x1dU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h46763d58__0[0x1eU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h46763d58__0[0x1fU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1284) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (((0x1aU 
                                               >= (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << 
                                                     (0xfU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U) 
                                             >> 3U)))
                              : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
        __Vtemp_h46763d58__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[1U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[1U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_h46763d58__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[2U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[2U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_h46763d58__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[3U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[3U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_h46763d58__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[4U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[4U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_h46763d58__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[5U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[5U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_h46763d58__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[6U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[6U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_h46763d58__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[7U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[7U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_h46763d58__0[8U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[8U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[8U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_h46763d58__0[9U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha6a05ca9__0[9U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h2a1e79c9__0[9U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_h46763d58__0[0xaU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_ha6a05ca9__0[0xaU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h2a1e79c9__0[0xaU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_h46763d58__0[0xbU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_ha6a05ca9__0[0xbU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h2a1e79c9__0[0xbU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_h46763d58__0[0xcU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_ha6a05ca9__0[0xcU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h2a1e79c9__0[0xcU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_h46763d58__0[0xdU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_ha6a05ca9__0[0xdU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h2a1e79c9__0[0xdU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_h46763d58__0[0xeU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_ha6a05ca9__0[0xeU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h2a1e79c9__0[0xeU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_h46763d58__0[0xfU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_ha6a05ca9__0[0xfU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h2a1e79c9__0[0xfU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_h46763d58__0[0x10U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x10U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x10U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_h46763d58__0[0x11U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x11U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x11U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_h46763d58__0[0x12U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x12U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x12U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_h46763d58__0[0x13U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x13U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x13U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_h46763d58__0[0x14U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x14U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x14U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x14U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_h46763d58__0[0x15U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x15U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x15U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x15U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_h46763d58__0[0x16U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x16U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x16U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x16U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_h46763d58__0[0x17U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x17U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x17U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x17U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_h46763d58__0[0x18U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x18U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x18U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x18U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_h46763d58__0[0x19U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x19U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x19U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x19U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_h46763d58__0[0x1aU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x1aU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x1aU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_h46763d58__0[0x1bU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x1bU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x1bU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_h46763d58__0[0x1cU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x1cU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x1cU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_h46763d58__0[0x1dU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x1dU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x1dU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_h46763d58__0[0x1eU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x1eU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x1eU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_h46763d58__0[0x1fU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_ha6a05ca9__0[0x1fU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h2a1e79c9__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_ha6a05ca9__0[0U] : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                      ? __Vtemp_h2a1e79c9__0[0U] : 
                     VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h46763d58__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h46763d58__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h46763d58__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h46763d58__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h46763d58__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h46763d58__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h46763d58__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h46763d58__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h46763d58__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h46763d58__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h46763d58__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h46763d58__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_h46763d58__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_h46763d58__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_h46763d58__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_h46763d58__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = __Vtemp_h46763d58__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = __Vtemp_h46763d58__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = __Vtemp_h46763d58__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = __Vtemp_h46763d58__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = __Vtemp_h46763d58__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = __Vtemp_h46763d58__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = __Vtemp_h46763d58__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = __Vtemp_h46763d58__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = __Vtemp_h46763d58__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = __Vtemp_h46763d58__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = __Vtemp_h46763d58__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = __Vtemp_h46763d58__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = __Vtemp_h46763d58__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = __Vtemp_h46763d58__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = __Vtemp_h46763d58__0[0x1fU];
    VL_EXTEND_WI(2051,4, __Vtemp_he167e192__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_haae4fd03__0, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 8U)));
    VL_CONCAT_WWI(2051,2049,2, __Vtemp_hdbf06588__0, __Vtemp_haae4fd03__0, 0U);
    VL_SHIFTL_WWW(2051,2051,2051, __Vtemp_h831c6dd8__0, __Vtemp_he167e192__0, __Vtemp_hdbf06588__0);
    VL_AND_W(65, __Vtemp_h9c9f57f7__0, VTestHarness__ConstPool__CONST_h614f9ca1_0, __Vtemp_h831c6dd8__0);
    VL_EXTEND_WI(2061,8, __Vtemp_h4b97aa1f__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    VL_CONCAT_WWI(2063,2061,2, __Vtemp_hba122332__0, __Vtemp_h4b97aa1f__1, 0U);
    VL_SHIFTL_WWW(2063,2063,2063, __Vtemp_h444da3cb__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, __Vtemp_hba122332__0);
    VL_AND_W(65, __Vtemp_h811c0857__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h444da3cb__0);
    if (vlSelf->reset) {
        __Vtemp_ha73df806__0[1U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_ha73df806__0[2U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_ha73df806__0[3U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_ha73df806__0[4U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_ha73df806__0[5U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_ha73df806__0[6U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_ha73df806__0[7U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_ha73df806__0[8U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_ha73df806__0[9U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_ha73df806__0[0xaU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_ha73df806__0[0xbU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_ha73df806__0[0xcU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_ha73df806__0[0xdU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_ha73df806__0[0xeU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_ha73df806__0[0xfU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_ha73df806__0[0x10U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_ha73df806__0[0x11U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_ha73df806__0[0x12U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_ha73df806__0[0x13U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_ha73df806__0[0x14U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_ha73df806__0[0x15U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_ha73df806__0[0x16U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_ha73df806__0[0x17U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_ha73df806__0[0x18U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_ha73df806__0[0x19U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_ha73df806__0[0x1aU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_ha73df806__0[0x1bU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_ha73df806__0[0x1cU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_ha73df806__0[0x1dU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_ha73df806__0[0x1eU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_ha73df806__0[0x1fU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        __Vtemp_ha73df806__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[1U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[1U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_ha73df806__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[2U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[2U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_ha73df806__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[3U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[3U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_ha73df806__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[4U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[4U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_ha73df806__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[5U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[5U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_ha73df806__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[6U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[6U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_ha73df806__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[7U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[7U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_ha73df806__0[8U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[8U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[8U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_ha73df806__0[9U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h9c9f57f7__0[9U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h811c0857__0[9U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_ha73df806__0[0xaU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h9c9f57f7__0[0xaU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h811c0857__0[0xaU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_ha73df806__0[0xbU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h9c9f57f7__0[0xbU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h811c0857__0[0xbU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_ha73df806__0[0xcU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h9c9f57f7__0[0xcU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h811c0857__0[0xcU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_ha73df806__0[0xdU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h9c9f57f7__0[0xdU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h811c0857__0[0xdU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_ha73df806__0[0xeU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h9c9f57f7__0[0xeU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h811c0857__0[0xeU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_ha73df806__0[0xfU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h9c9f57f7__0[0xfU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_h811c0857__0[0xfU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_ha73df806__0[0x10U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x10U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x10U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_ha73df806__0[0x11U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x11U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x11U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_ha73df806__0[0x12U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x12U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x12U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_ha73df806__0[0x13U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x13U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x13U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_ha73df806__0[0x14U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x14U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x14U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_ha73df806__0[0x15U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x15U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x15U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_ha73df806__0[0x16U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x16U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x16U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_ha73df806__0[0x17U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x17U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x17U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_ha73df806__0[0x18U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x18U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x18U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_ha73df806__0[0x19U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x19U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x19U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_ha73df806__0[0x1aU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x1aU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x1aU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_ha73df806__0[0x1bU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x1bU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x1bU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_ha73df806__0[0x1cU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x1cU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x1cU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_ha73df806__0[0x1dU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x1dU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x1dU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_ha73df806__0[0x1eU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x1eU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x1eU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_ha73df806__0[0x1fU] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h9c9f57f7__0[0x1fU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h811c0857__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_h9c9f57f7__0[0U] : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                      ? __Vtemp_h811c0857__0[0U] : 
                     VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_ha73df806__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_ha73df806__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_ha73df806__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_ha73df806__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_ha73df806__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_ha73df806__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_ha73df806__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_ha73df806__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
        = __Vtemp_ha73df806__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = __Vtemp_ha73df806__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = __Vtemp_ha73df806__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = __Vtemp_ha73df806__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = __Vtemp_ha73df806__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = __Vtemp_ha73df806__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = __Vtemp_ha73df806__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = __Vtemp_ha73df806__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = __Vtemp_ha73df806__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = __Vtemp_ha73df806__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = __Vtemp_ha73df806__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = __Vtemp_ha73df806__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = __Vtemp_ha73df806__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = __Vtemp_ha73df806__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = __Vtemp_ha73df806__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = __Vtemp_ha73df806__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = __Vtemp_ha73df806__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = __Vtemp_ha73df806__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = __Vtemp_ha73df806__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = __Vtemp_ha73df806__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = __Vtemp_ha73df806__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = __Vtemp_ha73df806__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = __Vtemp_ha73df806__0[0x1fU];
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__304(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__304\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h8d51c7f8__0;
    VlWide<8>/*255:0*/ __Vtemp_hab13b6e5__0;
    VlWide<8>/*255:0*/ __Vtemp_h2f0d85ba__0;
    VlWide<8>/*255:0*/ __Vtemp_h4bca4691__0;
    VlWide<8>/*255:0*/ __Vtemp_hfeba3466__0;
    // Body
    VL_EXTEND_WI(256,8, __Vtemp_hab13b6e5__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h2f0d85ba__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hab13b6e5__0);
    VL_EXTEND_WI(256,8, __Vtemp_h4bca4691__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_hfeba3466__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_h4bca4691__0);
    if (vlSelf->reset) {
        __Vtemp_h8d51c7f8__0[1U] = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h8d51c7f8__0[2U] = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h8d51c7f8__0[3U] = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h8d51c7f8__0[4U] = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h8d51c7f8__0[5U] = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h8d51c7f8__0[6U] = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h8d51c7f8__0[7U] = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
    } else {
        __Vtemp_h8d51c7f8__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[1U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[1U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_h8d51c7f8__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[2U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[2U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_h8d51c7f8__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[3U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[3U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_h8d51c7f8__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[4U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[4U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_h8d51c7f8__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[5U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[5U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_h8d51c7f8__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[6U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[6U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_h8d51c7f8__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h2f0d85ba__0[7U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hfeba3466__0[7U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_h2f0d85ba__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_613)
                      ? __Vtemp_hfeba3466__0[0U] : 
                     VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_4_ready) 
             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)))) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 
                = (7U & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4))
                          ? ((4U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffffU & 
                                         (((IData)(0x3fU) 
                                           << (0xfU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))) 
                                          >> 3U))))
                          : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                             - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq;
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h8d51c7f8__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h8d51c7f8__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h8d51c7f8__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h8d51c7f8__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h8d51c7f8__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h8d51c7f8__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h8d51c7f8__0[7U];
    if (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_17) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read;
    }
    if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT___GEN_1) {
        vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txm__DOT__prescaler 
            = (0x1fffU & (((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__restore)
                            ? 0x36U : (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__prescaler)) 
                          - (1U & (~ ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__restore) 
                                      & (4U > (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__sample_count)))))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__305(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__305\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h4f97a167__0;
    VlWide<8>/*255:0*/ __Vtemp_hdc3e84e6__0;
    VlWide<8>/*255:0*/ __Vtemp_h4c2aa750__0;
    VlWide<8>/*255:0*/ __Vtemp_hdc3e84e6__1;
    VlWide<8>/*255:0*/ __Vtemp_h05250df4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h03ecc1e4__0;
    VlWide<65>/*2079:0*/ __Vtemp_h6912c718__0;
    VlWide<65>/*2079:0*/ __Vtemp_hd00e6f04__0;
    VlWide<65>/*2079:0*/ __Vtemp_h9208f277__0;
    VlWide<65>/*2079:0*/ __Vtemp_hae394bd8__0;
    VlWide<65>/*2079:0*/ __Vtemp_he5cbefd5__0;
    VlWide<65>/*2079:0*/ __Vtemp_hd00e6f04__1;
    VlWide<65>/*2079:0*/ __Vtemp_h5bfa10c3__0;
    VlWide<65>/*2079:0*/ __Vtemp_h12a6f2f5__0;
    VlWide<65>/*2079:0*/ __Vtemp_h38705df0__0;
    // Body
    VL_EXTEND_WI(256,8, __Vtemp_hdc3e84e6__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h4c2aa750__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hdc3e84e6__0);
    VL_EXTEND_WI(256,8, __Vtemp_hdc3e84e6__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h05250df4__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hdc3e84e6__1);
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
        __Vtemp_h4f97a167__0[1U] = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h4f97a167__0[2U] = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h4f97a167__0[3U] = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h4f97a167__0[4U] = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h4f97a167__0[5U] = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h4f97a167__0[6U] = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h4f97a167__0[7U] = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        __Vtemp_h4f97a167__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[1U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[1U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_h4f97a167__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[2U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[2U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_h4f97a167__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[3U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[3U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_h4f97a167__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[4U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[4U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_h4f97a167__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[5U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[5U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_h4f97a167__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[6U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[6U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_h4f97a167__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h4c2aa750__0[7U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h05250df4__0[7U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_h4c2aa750__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                      ? __Vtemp_h05250df4__0[0U] : 
                     VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h4f97a167__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h4f97a167__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h4f97a167__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h4f97a167__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h4f97a167__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h4f97a167__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h4f97a167__0[7U];
    VL_EXTEND_WI(2051,4, __Vtemp_h6912c718__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_hd00e6f04__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_CONCAT_WWI(2051,2049,2, __Vtemp_h9208f277__0, __Vtemp_hd00e6f04__0, 0U);
    VL_SHIFTL_WWW(2051,2051,2051, __Vtemp_hae394bd8__0, __Vtemp_h6912c718__0, __Vtemp_h9208f277__0);
    VL_AND_W(65, __Vtemp_he5cbefd5__0, VTestHarness__ConstPool__CONST_h614f9ca1_0, __Vtemp_hae394bd8__0);
    VL_EXTEND_WI(2061,8, __Vtemp_hd00e6f04__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_CONCAT_WWI(2063,2061,2, __Vtemp_h5bfa10c3__0, __Vtemp_hd00e6f04__1, 0U);
    VL_SHIFTL_WWW(2063,2063,2063, __Vtemp_h12a6f2f5__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, __Vtemp_h5bfa10c3__0);
    VL_AND_W(65, __Vtemp_h38705df0__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h12a6f2f5__0);
    if (vlSelf->reset) {
        __Vtemp_h03ecc1e4__0[1U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h03ecc1e4__0[2U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h03ecc1e4__0[3U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h03ecc1e4__0[4U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h03ecc1e4__0[5U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h03ecc1e4__0[6U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h03ecc1e4__0[7U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h03ecc1e4__0[8U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h03ecc1e4__0[9U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h03ecc1e4__0[0xaU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h03ecc1e4__0[0xbU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h03ecc1e4__0[0xcU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h03ecc1e4__0[0xdU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h03ecc1e4__0[0xeU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h03ecc1e4__0[0xfU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h03ecc1e4__0[0x10U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h03ecc1e4__0[0x11U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h03ecc1e4__0[0x12U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h03ecc1e4__0[0x13U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h03ecc1e4__0[0x14U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h03ecc1e4__0[0x15U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h03ecc1e4__0[0x16U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h03ecc1e4__0[0x17U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h03ecc1e4__0[0x18U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h03ecc1e4__0[0x19U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h03ecc1e4__0[0x1aU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h03ecc1e4__0[0x1bU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h03ecc1e4__0[0x1cU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h03ecc1e4__0[0x1dU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h03ecc1e4__0[0x1eU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h03ecc1e4__0[0x1fU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum = 0U;
    } else {
        __Vtemp_h03ecc1e4__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[1U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[1U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_h03ecc1e4__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[2U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[2U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_h03ecc1e4__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[3U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[3U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_h03ecc1e4__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[4U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[4U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_h03ecc1e4__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[5U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[5U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_h03ecc1e4__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[6U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[6U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_h03ecc1e4__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[7U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[7U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_h03ecc1e4__0[8U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[8U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[8U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[8U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_h03ecc1e4__0[9U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[9U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_he5cbefd5__0[9U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h38705df0__0[9U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_h03ecc1e4__0[0xaU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_he5cbefd5__0[0xaU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h38705df0__0[0xaU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_h03ecc1e4__0[0xbU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_he5cbefd5__0[0xbU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h38705df0__0[0xbU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_h03ecc1e4__0[0xcU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_he5cbefd5__0[0xcU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h38705df0__0[0xcU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_h03ecc1e4__0[0xdU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_he5cbefd5__0[0xdU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h38705df0__0[0xdU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_h03ecc1e4__0[0xeU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_he5cbefd5__0[0xeU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h38705df0__0[0xeU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_h03ecc1e4__0[0xfU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_he5cbefd5__0[0xfU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h38705df0__0[0xfU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_h03ecc1e4__0[0x10U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x10U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x10U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_h03ecc1e4__0[0x11U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x11U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x11U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_h03ecc1e4__0[0x12U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x12U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x12U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_h03ecc1e4__0[0x13U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x13U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x13U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_h03ecc1e4__0[0x14U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x14U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x14U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_h03ecc1e4__0[0x15U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x15U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x15U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_h03ecc1e4__0[0x16U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x16U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x16U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_h03ecc1e4__0[0x17U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x17U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x17U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_h03ecc1e4__0[0x18U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x18U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x18U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_h03ecc1e4__0[0x19U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x19U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x19U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_h03ecc1e4__0[0x1aU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x1aU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x1aU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_h03ecc1e4__0[0x1bU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x1bU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x1bU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_h03ecc1e4__0[0x1cU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x1cU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x1cU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_h03ecc1e4__0[0x1dU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x1dU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x1dU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_h03ecc1e4__0[0x1eU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x1eU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x1eU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_h03ecc1e4__0[0x1fU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he5cbefd5__0[0x1fU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h38705df0__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_he5cbefd5__0[0U] : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                      ? __Vtemp_h38705df0__0[0U] : 
                     VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])));
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq;
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst)
                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source)
                          : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum) 
                             - (IData)(1U))));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h03ecc1e4__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h03ecc1e4__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h03ecc1e4__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h03ecc1e4__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_h03ecc1e4__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_h03ecc1e4__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_h03ecc1e4__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_h03ecc1e4__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[9U] 
        = __Vtemp_h03ecc1e4__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = __Vtemp_h03ecc1e4__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = __Vtemp_h03ecc1e4__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = __Vtemp_h03ecc1e4__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = __Vtemp_h03ecc1e4__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = __Vtemp_h03ecc1e4__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = __Vtemp_h03ecc1e4__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = __Vtemp_h03ecc1e4__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = __Vtemp_h03ecc1e4__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = __Vtemp_h03ecc1e4__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = __Vtemp_h03ecc1e4__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = __Vtemp_h03ecc1e4__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = __Vtemp_h03ecc1e4__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = __Vtemp_h03ecc1e4__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = __Vtemp_h03ecc1e4__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = __Vtemp_h03ecc1e4__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = __Vtemp_h03ecc1e4__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = __Vtemp_h03ecc1e4__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = __Vtemp_h03ecc1e4__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = __Vtemp_h03ecc1e4__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = __Vtemp_h03ecc1e4__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = __Vtemp_h03ecc1e4__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = __Vtemp_h03ecc1e4__0[0x1fU];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__306(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__306\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h9e448181__0;
    VlWide<65>/*2079:0*/ __Vtemp_hca511b94__0;
    VlWide<64>/*2047:0*/ __Vtemp_hd02452f6__0;
    VlWide<65>/*2079:0*/ __Vtemp_hd7b0a25f__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf99a7255__0;
    VlWide<65>/*2079:0*/ __Vtemp_h89e55a02__0;
    VlWide<65>/*2079:0*/ __Vtemp_hd00e6f04__0;
    VlWide<65>/*2079:0*/ __Vtemp_h9208f277__0;
    VlWide<65>/*2079:0*/ __Vtemp_h04ede446__0;
    VlWide<65>/*2079:0*/ __Vtemp_h2130843a__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__a_fire) 
                                         | ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_ready)) 
                                            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full))));
    VL_EXTEND_WI(2050,3, __Vtemp_hca511b94__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(2048,8, __Vtemp_hd02452f6__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_CONCAT_WWI(2050,2048,2, __Vtemp_hd7b0a25f__0, __Vtemp_hd02452f6__0, 0U);
    VL_SHIFTL_WWW(2050,2050,2050, __Vtemp_hf99a7255__0, __Vtemp_hca511b94__0, __Vtemp_hd7b0a25f__0);
    VL_AND_W(65, __Vtemp_h89e55a02__0, VTestHarness__ConstPool__CONST_h614f9cad_0, __Vtemp_hf99a7255__0);
    VL_EXTEND_WI(2061,8, __Vtemp_hd00e6f04__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_CONCAT_WWI(2063,2061,2, __Vtemp_h9208f277__0, __Vtemp_hd00e6f04__0, 0U);
    VL_SHIFTL_WWW(2063,2063,2063, __Vtemp_h04ede446__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, __Vtemp_h9208f277__0);
    VL_AND_W(65, __Vtemp_h2130843a__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h04ede446__0);
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
        __Vtemp_h9e448181__0[1U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h9e448181__0[2U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h9e448181__0[3U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h9e448181__0[4U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h9e448181__0[5U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h9e448181__0[6U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h9e448181__0[7U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h9e448181__0[8U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h9e448181__0[9U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h9e448181__0[0xaU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h9e448181__0[0xbU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h9e448181__0[0xcU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h9e448181__0[0xdU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h9e448181__0[0xeU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h9e448181__0[0xfU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h9e448181__0[0x10U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h9e448181__0[0x11U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h9e448181__0[0x12U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h9e448181__0[0x13U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h9e448181__0[0x14U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h9e448181__0[0x15U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h9e448181__0[0x16U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h9e448181__0[0x17U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h9e448181__0[0x18U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h9e448181__0[0x19U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h9e448181__0[0x1aU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h9e448181__0[0x1bU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h9e448181__0[0x1cU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h9e448181__0[0x1dU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h9e448181__0[0x1eU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h9e448181__0[0x1fU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        __Vtemp_h9e448181__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[1U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[1U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_h9e448181__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[2U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[2U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_h9e448181__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[3U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[3U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_h9e448181__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[4U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[4U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_h9e448181__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[5U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[5U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_h9e448181__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[6U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[6U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_h9e448181__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[7U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[7U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_h9e448181__0[8U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[8U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[8U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[8U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_h9e448181__0[9U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[9U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h89e55a02__0[9U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                           ? __Vtemp_h2130843a__0[9U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_h9e448181__0[0xaU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h89e55a02__0[0xaU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h2130843a__0[0xaU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_h9e448181__0[0xbU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h89e55a02__0[0xbU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h2130843a__0[0xbU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_h9e448181__0[0xcU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h89e55a02__0[0xcU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h2130843a__0[0xcU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_h9e448181__0[0xdU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h89e55a02__0[0xdU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h2130843a__0[0xdU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_h9e448181__0[0xeU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h89e55a02__0[0xeU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h2130843a__0[0xeU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_h9e448181__0[0xfU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_h89e55a02__0[0xfU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                             ? __Vtemp_h2130843a__0[0xfU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_h9e448181__0[0x10U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x10U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x10U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_h9e448181__0[0x11U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x11U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x11U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x11U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_h9e448181__0[0x12U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x12U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x12U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x12U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_h9e448181__0[0x13U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x13U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x13U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x13U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_h9e448181__0[0x14U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x14U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x14U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x14U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_h9e448181__0[0x15U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x15U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x15U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x15U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_h9e448181__0[0x16U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x16U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x16U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x16U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_h9e448181__0[0x17U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x17U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x17U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x17U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_h9e448181__0[0x18U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x18U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x18U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x18U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_h9e448181__0[0x19U] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x19U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x19U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x19U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_h9e448181__0[0x1aU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x1aU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x1aU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_h9e448181__0[0x1bU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x1bU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x1bU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_h9e448181__0[0x1cU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x1cU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x1cU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_h9e448181__0[0x1dU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x1dU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x1dU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_h9e448181__0[0x1eU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x1eU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x1eU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_h9e448181__0[0x1fU] = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h89e55a02__0[0x1fU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_h2130843a__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_h89e55a02__0[0U] : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done)
                      ? __Vtemp_h2130843a__0[0U] : 
                     VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])));
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready) 
             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid))) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 
                = (7U & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1))
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                                       - (IData)(1U))));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h9e448181__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h9e448181__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h9e448181__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h9e448181__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h9e448181__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h9e448181__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h9e448181__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h9e448181__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h9e448181__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h9e448181__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h9e448181__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h9e448181__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_h9e448181__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_h9e448181__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_h9e448181__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_h9e448181__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = __Vtemp_h9e448181__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = __Vtemp_h9e448181__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = __Vtemp_h9e448181__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = __Vtemp_h9e448181__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = __Vtemp_h9e448181__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = __Vtemp_h9e448181__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = __Vtemp_h9e448181__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = __Vtemp_h9e448181__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = __Vtemp_h9e448181__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = __Vtemp_h9e448181__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = __Vtemp_h9e448181__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = __Vtemp_h9e448181__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = __Vtemp_h9e448181__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = __Vtemp_h9e448181__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = __Vtemp_h9e448181__0[0x1fU];
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T_2) 
                                             & (5U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount)))) 
                                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T_1) 
                                            | (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__307(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__307\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___T) 
             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)))) {
            vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx 
                = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid)
                    ? 1U : 4U);
        }
        if ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
            vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0 
                = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__winnerQual_0;
            vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1 
                = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__winnerQual_1;
        }
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_17) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_sublane 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_sublane;
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_atomic 
            = vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_atomic;
    }
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_sublane 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__a_fire)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_sublane));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_atomic 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__a_fire)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_atomic));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_respond 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_17)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_respond));
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->reset)) & ((~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__full)) 
                                              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)) 
                                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
                                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T_1) 
                                            | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full))));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_full 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_17) 
                                         | ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_ready)) 
                                            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_full))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__308(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__308\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask = 3U;
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__latch) 
             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid)))) {
            vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask 
                = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T) 
                            << 1U)));
        }
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes 
            = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_set)
                    ? (1U | (((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                               ? 1U : 4U) << 1U)) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1223)
                      ? ((0x1eU >= (4U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 7U))) ? 
                         (0x7fffffffU & ((IData)(0xfU) 
                                         << (4U & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U))))
                          : 0U) : 0U)));
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1284) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   ((7U 
                                                     == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                     ? 0U
                                                     : 4U)
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (((0x1aU 
                                                       >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                       ? 
                                                      (0x7ffffffU 
                                                       & ((IData)(0xfffU) 
                                                          << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                       : 0U) 
                                                     >> 3U)))));
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                              ? (((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? 0U : 4U) ? 0U : 
                                 (~ (((0x1aU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                       ? (0x7ffffffU 
                                          & ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                       : 0U) >> 3U)))
                              : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__309(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__309\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h5271aadd__0;
    VlWide<8>/*255:0*/ __Vtemp_hffaea87a__0;
    VlWide<8>/*255:0*/ __Vtemp_ha0eee9e6__0;
    VlWide<8>/*255:0*/ __Vtemp_hf19c6844__0;
    VlWide<8>/*255:0*/ __Vtemp_h98ae10a8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5527afb5__0;
    VlWide<65>/*2079:0*/ __Vtemp_h68f12e28__0;
    VlWide<65>/*2079:0*/ __Vtemp_hfefe2818__0;
    VlWide<65>/*2079:0*/ __Vtemp_h1c080f9b__0;
    VlWide<65>/*2079:0*/ __Vtemp_h09338c4c__0;
    VlWide<65>/*2079:0*/ __Vtemp_hfb4f6494__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf16d694a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h671f9316__0;
    VlWide<65>/*2079:0*/ __Vtemp_h80606b07__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf06ddd91__0;
    // Body
    if ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle;
    }
    VL_EXTEND_WI(256,8, __Vtemp_hffaea87a__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_ha0eee9e6__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hffaea87a__0);
    VL_EXTEND_WI(256,8, __Vtemp_hf19c6844__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 7U)));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h98ae10a8__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hf19c6844__0);
    if (vlSelf->reset) {
        __Vtemp_h5271aadd__0[1U] = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h5271aadd__0[2U] = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h5271aadd__0[3U] = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h5271aadd__0[4U] = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h5271aadd__0[5U] = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h5271aadd__0[6U] = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h5271aadd__0[7U] = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_h5271aadd__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[1U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[1U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_h5271aadd__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[2U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[2U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_h5271aadd__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[3U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[3U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_h5271aadd__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[4U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[4U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_h5271aadd__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[5U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[5U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_h5271aadd__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[6U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[6U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_h5271aadd__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_ha0eee9e6__0[7U]
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_h98ae10a8__0[7U]
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_ha0eee9e6__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                      ? __Vtemp_h98ae10a8__0[0U] : 
                     VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h5271aadd__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h5271aadd__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h5271aadd__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h5271aadd__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h5271aadd__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h5271aadd__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h5271aadd__0[7U];
    VL_EXTEND_WI(2051,4, __Vtemp_h68f12e28__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_hfefe2818__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_CONCAT_WWI(2051,2049,2, __Vtemp_h1c080f9b__0, __Vtemp_hfefe2818__0, 0U);
    VL_SHIFTL_WWW(2051,2051,2051, __Vtemp_h09338c4c__0, __Vtemp_h68f12e28__0, __Vtemp_h1c080f9b__0);
    VL_AND_W(65, __Vtemp_hfb4f6494__0, VTestHarness__ConstPool__CONST_h614f9ca1_0, __Vtemp_h09338c4c__0);
    VL_EXTEND_WI(2061,8, __Vtemp_hf16d694a__0, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    VL_CONCAT_WWI(2063,2061,2, __Vtemp_h671f9316__0, __Vtemp_hf16d694a__0, 0U);
    VL_SHIFTL_WWW(2063,2063,2063, __Vtemp_h80606b07__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, __Vtemp_h671f9316__0);
    VL_AND_W(65, __Vtemp_hf06ddd91__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h80606b07__0);
    if (vlSelf->reset) {
        __Vtemp_h5527afb5__0[1U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h5527afb5__0[2U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h5527afb5__0[3U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h5527afb5__0[4U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h5527afb5__0[5U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h5527afb5__0[6U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h5527afb5__0[7U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h5527afb5__0[8U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h5527afb5__0[9U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h5527afb5__0[0xaU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h5527afb5__0[0xbU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h5527afb5__0[0xcU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h5527afb5__0[0xdU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h5527afb5__0[0xeU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h5527afb5__0[0xfU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h5527afb5__0[0x10U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h5527afb5__0[0x11U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h5527afb5__0[0x12U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h5527afb5__0[0x13U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h5527afb5__0[0x14U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h5527afb5__0[0x15U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h5527afb5__0[0x16U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h5527afb5__0[0x17U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h5527afb5__0[0x18U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h5527afb5__0[0x19U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h5527afb5__0[0x1aU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h5527afb5__0[0x1bU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h5527afb5__0[0x1cU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h5527afb5__0[0x1dU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h5527afb5__0[0x1eU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h5527afb5__0[0x1fU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        __Vtemp_h5527afb5__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[1U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[1U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_h5527afb5__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[2U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[2U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_h5527afb5__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[3U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[3U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_h5527afb5__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[4U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[4U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_h5527afb5__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[5U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[5U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_h5527afb5__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[6U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[6U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_h5527afb5__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[7U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[7U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_h5527afb5__0[8U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[8U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[8U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_h5527afb5__0[9U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfb4f6494__0[9U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[9U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_h5527afb5__0[0xaU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfb4f6494__0[0xaU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xaU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_h5527afb5__0[0xbU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfb4f6494__0[0xbU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xbU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_h5527afb5__0[0xcU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfb4f6494__0[0xcU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xcU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_h5527afb5__0[0xdU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfb4f6494__0[0xdU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xdU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_h5527afb5__0[0xeU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfb4f6494__0[0xeU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xeU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_h5527afb5__0[0xfU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfb4f6494__0[0xfU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xfU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_h5527afb5__0[0x10U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x10U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x10U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_h5527afb5__0[0x11U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x11U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x11U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_h5527afb5__0[0x12U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x12U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x12U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_h5527afb5__0[0x13U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x13U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x13U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_h5527afb5__0[0x14U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x14U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x14U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_h5527afb5__0[0x15U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x15U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x15U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_h5527afb5__0[0x16U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x16U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x16U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_h5527afb5__0[0x17U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x17U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x17U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_h5527afb5__0[0x18U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x18U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x18U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_h5527afb5__0[0x19U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x19U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x19U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_h5527afb5__0[0x1aU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x1aU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1aU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_h5527afb5__0[0x1bU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x1bU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1bU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_h5527afb5__0[0x1cU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x1cU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1cU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_h5527afb5__0[0x1dU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x1dU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1dU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_h5527afb5__0[0x1eU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x1eU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1eU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_h5527afb5__0[0x1fU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfb4f6494__0[0x1fU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_hfb4f6494__0[0U] : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                      ? __Vtemp_hf06ddd91__0[0U] : 
                     VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])));
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_747) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h5527afb5__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h5527afb5__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h5527afb5__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h5527afb5__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_h5527afb5__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_h5527afb5__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_h5527afb5__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_h5527afb5__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
        = __Vtemp_h5527afb5__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = __Vtemp_h5527afb5__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = __Vtemp_h5527afb5__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = __Vtemp_h5527afb5__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = __Vtemp_h5527afb5__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = __Vtemp_h5527afb5__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = __Vtemp_h5527afb5__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = __Vtemp_h5527afb5__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = __Vtemp_h5527afb5__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = __Vtemp_h5527afb5__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = __Vtemp_h5527afb5__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = __Vtemp_h5527afb5__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = __Vtemp_h5527afb5__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = __Vtemp_h5527afb5__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = __Vtemp_h5527afb5__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = __Vtemp_h5527afb5__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = __Vtemp_h5527afb5__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = __Vtemp_h5527afb5__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = __Vtemp_h5527afb5__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = __Vtemp_h5527afb5__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = __Vtemp_h5527afb5__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = __Vtemp_h5527afb5__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = __Vtemp_h5527afb5__0[0x1fU];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__310(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__310\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h312ffc0c__0;
    VlWide<65>/*2079:0*/ __Vtemp_h675f3ae1__0;
    VlWide<64>/*2047:0*/ __Vtemp_hff13fc0a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h5318cb4c__0;
    VlWide<65>/*2079:0*/ __Vtemp_ha566d01e__0;
    VlWide<65>/*2079:0*/ __Vtemp_hfba6e59f__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf16d694a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h671f9316__0;
    VlWide<65>/*2079:0*/ __Vtemp_h80606b07__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf06ddd91__0;
    // Body
    VL_EXTEND_WI(2050,3, __Vtemp_h675f3ae1__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(2048,8, __Vtemp_hff13fc0a__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_CONCAT_WWI(2050,2048,2, __Vtemp_h5318cb4c__0, __Vtemp_hff13fc0a__0, 0U);
    VL_SHIFTL_WWW(2050,2050,2050, __Vtemp_ha566d01e__0, __Vtemp_h675f3ae1__0, __Vtemp_h5318cb4c__0);
    VL_AND_W(65, __Vtemp_hfba6e59f__0, VTestHarness__ConstPool__CONST_h614f9cad_0, __Vtemp_ha566d01e__0);
    VL_EXTEND_WI(2061,8, __Vtemp_hf16d694a__0, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    VL_CONCAT_WWI(2063,2061,2, __Vtemp_h671f9316__0, __Vtemp_hf16d694a__0, 0U);
    VL_SHIFTL_WWW(2063,2063,2063, __Vtemp_h80606b07__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, __Vtemp_h671f9316__0);
    VL_AND_W(65, __Vtemp_hf06ddd91__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h80606b07__0);
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum = 0U;
        __Vtemp_h312ffc0c__0[1U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h312ffc0c__0[2U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h312ffc0c__0[3U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h312ffc0c__0[4U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h312ffc0c__0[5U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h312ffc0c__0[6U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h312ffc0c__0[7U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h312ffc0c__0[8U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h312ffc0c__0[9U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h312ffc0c__0[0xaU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h312ffc0c__0[0xbU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h312ffc0c__0[0xcU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h312ffc0c__0[0xdU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h312ffc0c__0[0xeU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h312ffc0c__0[0xfU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h312ffc0c__0[0x10U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h312ffc0c__0[0x11U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h312ffc0c__0[0x12U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h312ffc0c__0[0x13U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h312ffc0c__0[0x14U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h312ffc0c__0[0x15U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h312ffc0c__0[0x16U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h312ffc0c__0[0x17U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h312ffc0c__0[0x18U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h312ffc0c__0[0x19U] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h312ffc0c__0[0x1aU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h312ffc0c__0[0x1bU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h312ffc0c__0[0x1cU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h312ffc0c__0[0x1dU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h312ffc0c__0[0x1eU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h312ffc0c__0[0x1fU] = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_747) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst)
                          ? ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                              << 0x19U) | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 7U)) : 
                         ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum) 
                          - (1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   | (3U == (3U & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U))))))));
        }
        __Vtemp_h312ffc0c__0[1U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[1U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[1U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_h312ffc0c__0[2U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[2U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[2U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_h312ffc0c__0[3U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[3U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[3U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_h312ffc0c__0[4U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[4U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[4U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_h312ffc0c__0[5U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[5U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[5U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_h312ffc0c__0[6U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[6U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[6U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_h312ffc0c__0[7U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[7U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[7U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_h312ffc0c__0[8U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[8U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[8U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_h312ffc0c__0[9U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_hfba6e59f__0[9U]
                                         : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                           ? __Vtemp_hf06ddd91__0[9U]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_h312ffc0c__0[0xaU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfba6e59f__0[0xaU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xaU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_h312ffc0c__0[0xbU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfba6e59f__0[0xbU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xbU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_h312ffc0c__0[0xcU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfba6e59f__0[0xcU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xcU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_h312ffc0c__0[0xdU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfba6e59f__0[0xdU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xdU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_h312ffc0c__0[0xeU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfba6e59f__0[0xeU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xeU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_h312ffc0c__0[0xfU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                           ? __Vtemp_hfba6e59f__0[0xfU]
                                           : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                                      & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                             ? __Vtemp_hf06ddd91__0[0xfU]
                                             : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_h312ffc0c__0[0x10U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x10U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x10U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_h312ffc0c__0[0x11U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x11U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x11U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x11U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_h312ffc0c__0[0x12U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x12U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x12U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x12U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_h312ffc0c__0[0x13U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x13U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x13U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x13U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_h312ffc0c__0[0x14U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x14U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x14U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x14U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_h312ffc0c__0[0x15U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x15U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x15U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x15U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_h312ffc0c__0[0x16U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x16U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x16U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x16U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_h312ffc0c__0[0x17U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x17U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x17U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x17U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_h312ffc0c__0[0x18U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x18U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x18U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x18U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_h312ffc0c__0[0x19U] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x19U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x19U]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x19U]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_h312ffc0c__0[0x1aU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x1aU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1aU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_h312ffc0c__0[0x1bU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x1bU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1bU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_h312ffc0c__0[0x1cU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x1cU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1cU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_h312ffc0c__0[0x1dU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x1dU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1dU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_h312ffc0c__0[0x1eU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x1eU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1eU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_h312ffc0c__0[0x1fU] = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_hfba6e59f__0[0x1fU]
                                            : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hf06ddd91__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_hfba6e59f__0[0U] : VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_613)
                      ? __Vtemp_hf06ddd91__0[0U] : 
                     VTestHarness__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h312ffc0c__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h312ffc0c__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h312ffc0c__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h312ffc0c__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h312ffc0c__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h312ffc0c__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h312ffc0c__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h312ffc0c__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h312ffc0c__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h312ffc0c__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h312ffc0c__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h312ffc0c__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_h312ffc0c__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_h312ffc0c__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_h312ffc0c__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_h312ffc0c__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = __Vtemp_h312ffc0c__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = __Vtemp_h312ffc0c__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = __Vtemp_h312ffc0c__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = __Vtemp_h312ffc0c__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = __Vtemp_h312ffc0c__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = __Vtemp_h312ffc0c__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = __Vtemp_h312ffc0c__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = __Vtemp_h312ffc0c__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = __Vtemp_h312ffc0c__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = __Vtemp_h312ffc0c__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = __Vtemp_h312ffc0c__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = __Vtemp_h312ffc0c__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = __Vtemp_h312ffc0c__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = __Vtemp_h312ffc0c__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = __Vtemp_h312ffc0c__0[0x1fU];
}
