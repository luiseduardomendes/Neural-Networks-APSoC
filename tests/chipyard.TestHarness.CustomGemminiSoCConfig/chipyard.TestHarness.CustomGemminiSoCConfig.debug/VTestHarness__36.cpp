// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3473(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3473\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState))) {
            if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)))) {
                vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState))) {
                if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap) {
                    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState = 2U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState))) {
                    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState 
                        = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_28;
                }
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3474(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3474\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 1U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 8U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3475(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3475\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 2U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x10U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 3U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x18U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 4U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x20U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 5U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x28U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 6U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x30U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3476(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3476\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 7U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x38U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount 
                = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_3)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_7));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_4)
                          ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 0U : (~ (0x3ffffU & 
                                         (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                          >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_4)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3477(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3477\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3478(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3478\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData;
        vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg;
        vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3479(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3479\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T) 
                                             & (3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___GEN_3)));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3480(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3480\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___T) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)))) {
                vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx 
                    = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)
                        ? 1U : 4U);
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? 1U : 4U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                    : 0U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40)
                : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3481(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3481\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vfunc_serial_tick__1__serial_out_ready;
    CData/*0:0*/ __Vfunc_serial_tick__1__serial_in_valid;
    IData/*31:0*/ __Vfunc_serial_tick__1__Vfuncout;
    IData/*31:0*/ __Vfunc_serial_tick__1__serial_in_bits;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U])));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid)))) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit = 0U;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg = 0U;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg = 0U;
    } else {
        vlSymsp->TOP____024unit.__Vdpiimwrap_serial_tick_TOP____024unit(
                                                                        (5U 
                                                                         == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)), __Vfunc_serial_tick__1__serial_out_ready, 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                                                          ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1
                                                                          : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0), __Vfunc_serial_tick__1__serial_in_valid, 
                                                                        ((((0U 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                                           | (1U 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                                                          | (2U 
                                                                             == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                                                         | (6U 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))), __Vfunc_serial_tick__1__serial_in_bits, __Vfunc_serial_tick__1__Vfuncout);
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready 
            = __Vfunc_serial_tick__1__serial_out_ready;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid 
            = __Vfunc_serial_tick__1__serial_in_valid;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits 
            = __Vfunc_serial_tick__1__serial_in_bits;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit 
            = __Vfunc_serial_tick__1__Vfuncout;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg 
            = (1U & vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3482(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3482\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                              >> 0x38U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7)) 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x30U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6)) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                >> 0x28U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5)) 
                                                   << 8U)) 
                                       | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x20U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4)))))))) 
                << 0x20U) | (QData)((IData)(((0xff000000U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                              >> 0x18U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3)) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                      ? (IData)(
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                 >> 0x10U))
                                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                         ? (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                    >> 8U))
                                                         : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata)
                                                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0)))))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3483(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3483\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___GEN_11));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3484(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3484\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 9U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = (0xfU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                        << 0x1eU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                     >> 2U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xeU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])) 
                << 0x36U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U])) 
                                           >> 0xaU)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3485(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3485\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xaU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            >> 0xaU)));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])) 
                << 0x36U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U])) 
                                           >> 0xaU)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address 
            = (0x3ffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3486(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3486\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0x15U))))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (1U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xaU))))
                                                    : 0U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3487(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3487\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                      : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                         >> 9U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3490(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3490\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TCK;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TMS;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TDI;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TRSTn;
    IData/*31:0*/ __Vfunc_jtag_tick__0__Vfuncout;
    // Body
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset))) {
        vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit = 0U;
        vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK 
            = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)));
        vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg = 3U;
        vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky = 0U;
    } else {
        vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
            = (1U & ((~ (IData)(vlTOPp->reset)) | (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky)));
        if ((vlTOPp->TestHarness__DOT__plusarg_reader__DOT__myplus 
             & (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky))) {
            if ((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)) {
                vlSymsp->TOP____024unit.__Vdpiimwrap_jtag_tick_TOP____024unit(__Vfunc_jtag_tick__0__jtag_TCK, __Vfunc_jtag_tick__0__jtag_TMS, __Vfunc_jtag_tick__0__jtag_TDI, __Vfunc_jtag_tick__0__jtag_TRSTn, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg), __Vfunc_jtag_tick__0__Vfuncout);
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK 
                    = __Vfunc_jtag_tick__0__jtag_TCK;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS 
                    = __Vfunc_jtag_tick__0__jtag_TMS;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI 
                    = __Vfunc_jtag_tick__0__jtag_TDI;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TRSTn 
                    = __Vfunc_jtag_tick__0__jtag_TRSTn;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                    = __Vfunc_jtag_tick__0__Vfuncout;
            }
            vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                = vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterNxt;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3491(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3491\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] = 0U;
    }
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState 
        = vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0] = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3492(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3492\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3493(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3493\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[7U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3494(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3494\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_3));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3495(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3495\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3496(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3496\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3497(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3497\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? 1U : 4U);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3498(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3498\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3499(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3499\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask 
            = (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                         << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                         << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3500(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3500\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[7U]);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_3));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_1));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3501(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3501\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3502(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3502\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___watchdog_T_1));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 9U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                      : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x12U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3503(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3503\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_sizes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_T_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1 
                = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_1)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_1)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       >> 4U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3504(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3504\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address 
            = (0x3ffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3505(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3505\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_1)
                          ? ((0x800000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3506(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3506\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address 
            = (0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            >> 0xaU)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3507(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3507\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3508(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3508\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       >> 4U));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((0x800000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3509(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3509\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            >> 0xaU)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___watchdog_T_1));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_2)
                              ? ((0x200000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3510(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3510\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1 
            = (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink 
            = (0xfU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                        << 0x1eU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                     >> 2U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 1U));
    }
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
        = vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky;
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
        = vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x13U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x14U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x15U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x16U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x17U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x18U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x19U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1aU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1bU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1cU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1dU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1eU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1fU];
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_5 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3511(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3511\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_9 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_3 
        = (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_7 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_4 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_4 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
            if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap) {
                vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
                if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_3) 
                     & (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)))) {
                    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState = 2U;
                }
            } else {
                vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState 
                    = ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))
                        ? (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_12)
                        : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_14));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData = 0U;
        }
    } else {
        if ((1U != (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))) {
                    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData 
                        = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___txData_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3512(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3512\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vtask_uart_tick__5__serial_out_ready;
    CData/*0:0*/ __Vtask_uart_tick__5__serial_in_valid;
    CData/*7:0*/ __Vtask_uart_tick__5__serial_in_bits;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartno = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg = 0U;
    } else {
        vlSymsp->TOP____024unit.__Vdpiimwrap_uart_tick_TOP____024unit(
                                                                      (1U 
                                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty))), __Vtask_uart_tick__5__serial_out_ready, 
                                                                      vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram
                                                                      [vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value], __Vtask_uart_tick__5__serial_in_valid, 
                                                                      (1U 
                                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full))), __Vtask_uart_tick__5__serial_in_bits);
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready 
            = __Vtask_uart_tick__5__serial_out_ready;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid 
            = __Vtask_uart_tick__5__serial_in_valid;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits 
            = __Vtask_uart_tick__5__serial_in_bits;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
                = vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___wrap_value_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3513(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3513\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_bits_last)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___GEN_56));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                              ? (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? 0U : 4U) ? 0U : 
                                 (~ (0xffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                                  >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3514(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3514\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size 
        = ((QData)((IData)((0xfffffff8U & (((IData)(1U) 
                                            + (IData)(
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                       >> 3U))) 
                                           << 3U)))) 
           - vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1));
    vlTOPp->io_success = ((IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg) 
                          | (1U == vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23
                : vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg)
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg
                : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24)
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24);
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_48)
            : (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                    | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)
                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___idx_T_1))
                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)));
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:2159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_6) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                           & (1U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                          & (0U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:2162: Assertion failed in %NTestHarness.ram.adapter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 2162, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:2170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_6) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                           & (1U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                          & (0U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Bad TSI command\n    at SerialAdapter.scala:230 assert(false.B, \"Bad TSI command\")\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3515(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3515\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                             >> 3U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1;
        }
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3516(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3516\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 8U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x18U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x10U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x28U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x20U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x38U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x30U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft 
        = ((IData)(vlTOPp->reset) ? 0U : (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch)
                                                 ? 
                                                (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (~ 
                                                    (0x3ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                        >> 3U)))
                                                    : 0U)
                                                   : 0U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
                                                     ? 
                                                    (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                         >> 3U)))
                                                     : 0U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___beatsLeft_T_4))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3517(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3517\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                             >> 3U));
            }
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___GEN_24));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_1)
                              ? ((0x200000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3518(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3518\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 9U));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount 
                = vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___wrap_value_T_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3519(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3519\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
            != (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray_io_q)))) {
        vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_7
                : ((6U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                    ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_6
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                        ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_5
                        : ((4U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                            ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_4
                            : ((3U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                                ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_3
                                : ((2U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                                    ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_2
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                                        ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_1
                                        : vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_0)))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3521(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3521\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3522(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3522\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterNxt 
        = ((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
            ? 3U : (vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset 
        = vlTOPp->reset;
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState 
        = vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[5U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[6U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[7U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[7U];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3523(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3523\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)));
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3524(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3524\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first)
                              ? (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? 0U : 4U) ? 0U : 
                                 (~ (0xffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                                  >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3525(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3525\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram
                            [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0])) 
            << 0x38U) | (((QData)((IData)(((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram
                                            [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                            << 0x18U) 
                                           | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram
                                               [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                               << 0x10U) 
                                              | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram
                                                  [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                  << 8U) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram
                                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                          << 0x18U) | (QData)((IData)(
                                                      ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram
                                                        [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0] 
                                                        << 0x10U) 
                                                       | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
                                                           [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                                                           << 8U) 
                                                          | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
                                                          [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]))))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3526(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3526\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3527(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3527\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                                             & (0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___GEN_0)));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter 
                = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3528(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3528\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first)
                          ? ((0x800000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3529(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3529\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first)
                          ? ((0x800000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89 
        = (((VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                 (0x20000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
            | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3530(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3530\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first)
                              ? ((0x200000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3531(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3531\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_3) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount 
                = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_1)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_3));
        }
    }
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_3;
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3532(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3532\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___GEN_56 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1));
    if (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) {
        vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst)
                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___acknum_T_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                   >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3533(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3533\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___acknum_T_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3534(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3534\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp9035[32];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0;
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1;
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    VL_SHIFTR_WWI(1024,1024,11, __Vtemp9035, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp9035[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp9035[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp9035[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp9035[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp9035[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp9035[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp9035[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp9035[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp9035[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp9035[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp9035[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp9035[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp9035[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp9035[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp9035[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp9035[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp9035[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp9035[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp9035[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp9035[0x13U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp9035[0x14U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp9035[0x15U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp9035[0x16U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp9035[0x17U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp9035[0x18U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp9035[0x19U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp9035[0x1aU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp9035[0x1bU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp9035[0x1cU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp9035[0x1dU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp9035[0x1eU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp9035[0x1fU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3535(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3535\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp9036[8];
    WData/*255:0*/ __Vtemp9037[8];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)));
    __Vtemp9036[0U] = 1U;
    __Vtemp9036[1U] = 0U;
    __Vtemp9036[2U] = 0U;
    __Vtemp9036[3U] = 0U;
    __Vtemp9036[4U] = 0U;
    __Vtemp9036[5U] = 0U;
    __Vtemp9036[6U] = 0U;
    __Vtemp9036[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp9037, __Vtemp9036, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[4U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[5U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[6U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
            ? __Vtemp9037[7U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full))));
    vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
        = vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}
