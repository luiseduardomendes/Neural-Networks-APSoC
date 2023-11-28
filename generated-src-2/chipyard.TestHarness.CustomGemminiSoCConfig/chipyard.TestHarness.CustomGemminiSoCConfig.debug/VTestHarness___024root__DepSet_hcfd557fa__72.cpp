// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9098(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9098\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_510 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                  >> 6U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_509)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_509) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__bad_grant)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_1));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_prio_2) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_control));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_553 
        = ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode)) 
           | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_needT 
        = (1U & (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode)) 
                                 & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_param)))) 
                 | (((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode)) 
                     | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode))) 
                    & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_param)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_510 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                  >> 7U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_509)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_509) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__bad_grant)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_1));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9099(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9099\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_prio_2) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_control));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_553 
        = ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode)) 
           | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_needT 
        = (1U & (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode)) 
                                 & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_param)))) 
                 | (((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode)) 
                     | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode))) 
                    & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_param)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_510 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                  >> 8U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_509)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_509) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__bad_grant)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_1));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_prio_2) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_control));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_553 
        = ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode)) 
           | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_needT 
        = (1U & (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode)) 
                                 & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_param)))) 
                 | (((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode)) 
                     | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode))) 
                    & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_param)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9100(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9100\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_510 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                  >> 9U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_509)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_509) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__bad_grant)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_1));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_prio_2) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_control));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_553 
        = ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode)) 
           | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_needT 
        = (1U & (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode)) 
                                 & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_param)))) 
                 | (((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode)) 
                     | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode))) 
                    & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_param)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_510 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                  >> 0xaU) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_509)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_509) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__bad_grant)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_1));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9101(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9101\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_prio_2) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_control));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_553 
        = ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode)) 
           | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_needT 
        = (1U & (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode)) 
                                 & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_param)))) 
                 | (((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode)) 
                     | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode))) 
                    & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_param)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_510 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                  >> 0xbU) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_509)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_509) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__bad_grant)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_1));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_dirty 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_clients 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_state 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_630_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1027_0_dataflow)
            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1024_0
            : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1025_0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_249_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_249_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9102(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9102\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_503_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_504_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_504_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_504_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_504_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_504_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_504_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9103(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9103\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_dataflow_b) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1030_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___mac_unit_io_out_d;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1031_0 
            = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_propagate_b)
                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c1
                            : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c2));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1030_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_31_0;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1031_0 
            = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_propagate_b)
                            ? (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___io_out_c_T_3)
                                ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___io_out_c_T_3)
                                               ? 0x80000U
                                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___io_out_c_T_3))
                            : (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___io_out_c_T_14)
                                ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___io_out_c_T_14)
                                               ? 0x80000U
                                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___io_out_c_T_14))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_302_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_47_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_46_0);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_303_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_303_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_303_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_303_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_303_0);
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9104(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9104\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_317_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_62_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_3_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_3__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_61_0);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_318_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_319_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_319_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_319_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_319_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_319_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_319_0 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_332_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_77_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_76_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_79_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4_io_in_control_0_shift_b)
            : 0U);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9105(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9105\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_335_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_335_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_334_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_347_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_92_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_91_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_95_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_95_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___io_out_c_T)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9106(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9106\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_349_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_350_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_350_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_350_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_350_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_350_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_350_0 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_362_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_107_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_106_0);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9107(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9107\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_110_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_366_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_366_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_365_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_377_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_122_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_121_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_126_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_126_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9108(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9108\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_380_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_381_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_381_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_381_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_381_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_381_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_381_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9109(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9109\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_137_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_136_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_141_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_397_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_397_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_396_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_407_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_152_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_151_0);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9110(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9110\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_157_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_157_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___io_out_c_T_11)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9111(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9111\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_411_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_412_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_412_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_412_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_412_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_412_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_412_0 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_422_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_167_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_166_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_172_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_428_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_428_0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9112(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9112\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_427_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_427_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_427_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_427_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_427_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_437_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_182_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_181_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_188_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_188_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___io_out_c_T)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9113(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9113\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_442_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_443_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_443_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_443_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_443_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_443_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_443_0 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_452_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_197_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_196_0);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9114(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9114\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_203_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_459_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_459_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_458_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_458_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_458_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_458_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_458_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_467_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_212_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_13_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_13__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_211_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_219_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_219_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9115(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9115\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_473_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_474_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_474_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_474_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_474_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_474_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_474_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9116(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9116\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_482_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_227_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_14_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_14__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_226_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_234_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_490_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_490_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_489_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_489_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_489_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_489_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_489_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_0_0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_687)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___WIRE_11[0U]
                         : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_586)
                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___WIRE_7[0U]
                             : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_0))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9117(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9117\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___T_3) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__d_buf_15_0 
            = ((0x20U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___ram_ext_R0_data[1U])
                ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___dataD_WIRE_1[3U] 
                   >> 0x18U) : 0U);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT____Vcellinp__transposer__io_inRow_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_0__DOT__reg_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_1_0__DOT__reg_0)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_1__DOT__reg_0));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9120(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9120\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9121(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9121\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_1_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_2_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9122(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9122\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9123(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9123\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_5_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_6_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9124(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9124\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_7_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_8_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9125(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9125\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_9_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_10_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9126(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9126\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_11_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_12_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9127(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9127\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_13_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_14_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9128(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9128\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
        = (((QData)((IData)((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_15_io_out 
                                >> 0x20U)))) << 0x20U) 
           | (QData)((IData)(((((0x1f800000U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                  + 
                                                  (3U 
                                                   & (((0U 
                                                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                        ? 
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffffffU 
                                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                              >> 2U) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                        & (~ 
                                                           (((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                             ? 
                                                            (1U 
                                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                << 1U))
                                                             : 0U)))
                                                        : 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                            >> 2U) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                                      >> 0x18U))) 
                                                 << 0x17U) 
                                                & (0xdf800000U 
                                                   | (0x20000000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                         << 0x1dU))))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U) 
                                   << 0x17U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U) 
                                                 << 0x17U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                 << 0x16U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9129(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9129\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9130(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9130\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9131(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9131\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9132(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9132\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9133(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9133\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                 >> 2U) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : (0x1ffffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                   >> 2U) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9134(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9134\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1769 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1845) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_needT))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9135(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9135\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_clientBit))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9136(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9136\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_needT))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9137(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9137\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_clientBit))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9138(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9138\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_542 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit)) 
                 | ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_state)) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_needT))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_550 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_needT) 
                | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_state)))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_clients)) 
           & (~ ((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode)) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode))) 
                  | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_clientBit))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_536 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_state)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9139(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9139\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___GEN_3 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___mac_unit_io_out_d 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___mac_unit_io_out_d);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T 
        = (0xffffU & (((0xff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_244_0) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_244_0)) 
                      * ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9140(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9140\n"); );
    // Body
    if ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T_11 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1 
                  >> 0x1fU));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T_11 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2 
                  >> 0x1fU));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___GEN_3 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___mac_unit_io_out_d 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___mac_unit_io_out_d);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T 
        = (0xffffU & (((0xff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_230_0) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_230_0)) 
                      * ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b))));
    if ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T_11 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1 
                  >> 0x1fU));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T_11 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2 
                  >> 0x1fU));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9141(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9141\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___GEN_3 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___mac_unit_io_out_d 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___mac_unit_io_out_d);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T 
        = (0xffffU & (((0xff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_216_0) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_216_0)) 
                      * ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b))));
    if ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T_11 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1 
                  >> 0x1fU));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T_11 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2 
                  >> 0x1fU));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9142(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9142\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___GEN_3 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___mac_unit_io_out_d 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___mac_unit_io_out_d);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T 
        = (0xffffU & (((0xff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_202_0) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_202_0)) 
                      * ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b))));
    if ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T_11 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1 
                  >> 0x1fU));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T_11 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c2 
                  >> 0x1fU));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9143(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9143\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___GEN_3 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___mac_unit_io_out_d 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___mac_unit_io_out_d);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T 
        = (0xffffU & (((0xff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_188_0) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_188_0)) 
                      * ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b))));
    if ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__shift_offset))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___io_out_c_T 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__shift_offset));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___io_out_c_T_11 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__shift_offset));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___io_out_c_T 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c1 
                  >> 0x1fU));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___io_out_c_T_11 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c2 
                  >> 0x1fU));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___GEN_3 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___mac_unit_io_out_d 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___mac_unit_io_out_d);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9144(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9144\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T 
        = (0xffffU & (((0xff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_174_0) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_174_0)) 
                      * ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b))));
    if ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__shift_offset))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___io_out_c_T 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__shift_offset));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___io_out_c_T_11 
            = VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__shift_offset));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___io_out_c_T 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c1 
                  >> 0x1fU));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___io_out_c_T_11 
            = (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c2 
                  >> 0x1fU));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_422_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_421_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_425_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_424_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_429_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_428_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_434_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_433_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_440_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_439_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_447_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_446_0;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9145(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9145\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_455_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_454_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_464_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_463_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_474_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_473_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_485_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_484_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_497_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_496_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_510_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_509_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_524_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_523_0;
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_1_0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_687)
                         ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___WIRE_11[0U] 
                             << 0x18U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___WIRE_11[0U] 
                                          >> 8U)) : 
                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_586)
                          ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___WIRE_7[0U] 
                              << 0x18U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___WIRE_7[0U] 
                                           >> 8U)) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_1))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___transposer_io_outCol_bits_2)
            : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_2_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_2_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_1_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_5_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_4_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_9_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_8_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_14_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_13_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_20_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_19_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_27_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_26_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_35_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_34_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_44_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_43_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_54_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_53_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_65_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_64_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_104_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_103_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_77_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_76_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_90_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_89_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_3_0_shift_r_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_3_0_shift_r;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_4_0_shift_r_2 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_4_0_shift_r_1;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_5_0_shift_r_3 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_5_0_shift_r_2;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_6_0_shift_r_4 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_6_0_shift_r_3;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_7_0_shift_r_5 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_7_0_shift_r_4;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_8_0_shift_r_6 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_8_0_shift_r_5;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9146(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9146\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_9_0_shift_r_7 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_9_0_shift_r_6;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_10_0_shift_r_8 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_10_0_shift_r_7;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_11_0_shift_r_9 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_11_0_shift_r_8;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_12_0_shift_r_10 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_12_0_shift_r_9;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_13_0_shift_r_11 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_13_0_shift_r_10;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_14_0_shift_r_12 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_14_0_shift_r_11;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_shift_r_13 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_shift_r_12;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_525_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__bxVec_5_15_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_527_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_526_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_530_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_529_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_534_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_533_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_539_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_538_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_545_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_544_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_552_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_551_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_560_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_559_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_569_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_568_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_579_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_578_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_590_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_589_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_602_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_601_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_615_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_614_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_629_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_628_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_782_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_781_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_526_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_525_0;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9147(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9147\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9148(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9148\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9149(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9149\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9150(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9150\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9151(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9151\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN 
        = (IData)((0xe0000000ULL == (0xe0000000ULL 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                >> 0x1fU))))) 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out))))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                     >> 0x1fU)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                           >> 0x17U)))
                                       : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9152(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9152\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9153(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9153\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9154(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9154\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_clients))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9155(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9155\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_clients))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9156(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9156\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_clients))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9157(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9157\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_clients))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_7 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_542))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_8 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_6) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_550))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_4 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_control)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit))
                     : (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_536)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_prio_2) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_control)
                     ? (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_clients)))
                     : (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_536) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_clients))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9158(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9158\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0_io_in_control_0_dataflow_b) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1027_0_dataflow = 1U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1024_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___mac_unit_io_out_d;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1025_0 
            = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0_io_in_control_0_propagate_b)
                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT__c1
                            : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT__c2));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1027_0_dataflow = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1024_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_15_0;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1025_0 
            = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0_io_in_control_0_propagate_b)
                            ? (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___io_out_c_T_3)
                                ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___io_out_c_T_3)
                                               ? 0x80000U
                                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___io_out_c_T_3))
                            : (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___io_out_c_T_14)
                                ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___io_out_c_T_14)
                                               ? 0x80000U
                                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_0__DOT__tile_0_0__DOT___io_out_c_T_14))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_248_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_504_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_504_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_503_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___GEN_2;
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_propagate_b)
                    ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_503_0 
                                          >> 0x13U)))) 
                        << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_503_0)
                    : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___GEN_3);
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9159(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9159\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_503_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_dataflow_b) {
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___GEN_2;
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15_io_in_control_0_propagate_b)
                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___GEN_3
                    : (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_503_0 
                                          >> 0x13U)))) 
                        << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_503_0));
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_286_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_31_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_1_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_1__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_30_0);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_287_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_287_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_287_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_287_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_287_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_301_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_46_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_45_0);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_302_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_303_0 = 1U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_dataflow_b 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2_io_in_control_0_dataflow_b;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2_io_in_control_0_propagate_b 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2_io_in_control_0_propagate_b;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_303_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9160(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9160\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_302_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_303_0 
            = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2_io_in_control_0_dataflow_b)
                            ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2_io_in_control_0_propagate_b)
                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT__c1
                                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT__c2)
                            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2_io_in_control_0_propagate_b)
                                ? (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___io_out_c_T_3))
                                : (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT___io_out_c_T_14)))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_316_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_61_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_60_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_63_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_319_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_319_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_318_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___GEN_2;
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_propagate_b)
                    ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_318_0 
                                          >> 0x13U)))) 
                        << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_318_0)
                    : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___GEN_3);
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9161(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9161\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_318_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_dataflow_b) {
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___GEN_2;
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3_io_in_control_0_propagate_b)
                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT___GEN_3
                    : (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_318_0 
                                          >> 0x13U)))) 
                        << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_318_0));
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_331_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_76_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_75_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_79_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_79_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9162(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9162\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_333_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_334_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_334_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_334_0 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_346_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_91_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_90_0);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9163(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9163\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_94_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_350_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_350_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_349_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_349_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_349_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_349_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_349_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_106_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_105_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_110_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_110_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9164(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9164\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_364_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_365_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_365_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_365_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9165(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9165\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_376_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_121_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_120_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_125_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_381_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_381_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_380_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_380_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_380_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_380_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_380_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_391_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_136_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_8_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_8__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_135_0);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9166(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9166\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_141_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_141_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___io_out_c_T_11)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9167(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9167\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_395_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_396_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_396_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_396_0 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_406_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_151_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_150_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_156_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_412_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_412_0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__9168(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__9168\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_411_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_411_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_411_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_411_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_411_0);
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_421_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_166_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10_io_in_control_0_dataflow_b)
                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___mac_unit_io_out_d
                : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_165_0);
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_172_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_172_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___io_out_c_T)));
}
