// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5886(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5886\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex_utilization = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__deq_ptr_value = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex_utilization 
            = (0x1fU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex_utilization) 
                         + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___arb_io_in_1_ready) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output))) 
                        - (3U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5016) 
                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_45)) 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_47) 
                                     >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__issue_id_1))) 
                                 + ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid) 
                                      & (0x10U == (0x30U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))) 
                                     & (0U != (3U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits) 
                                                >> 4U)))) 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_47) 
                                       >> (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits))))))));
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_11) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__head_loop_id 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_44) 
              ^ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__head_loop_id)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__winnerQual_1;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_ex_completed 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_16)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_34) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_loop_id)) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_ex_completed)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_ex_completed 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_15)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_34) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_loop_id))) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_ex_completed)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5887(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5887\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    if (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T_7))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf_replay 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_replay;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh = 1U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_fire) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh 
            = ((6U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh) 
                      << 1U)) | (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh) 
                                       >> 2U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                      ? (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                          & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig 
                                >> 0x16U))) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt))
                      : (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                            & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig 
                                  >> 0x16U))) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN) 
                                                 & (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_sig 
                                                     >> 0x16U)))) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)) 
                         | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN)) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isInf))) 
                            & (~ (IData)((0U != (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__divSqrt__io_b 
                                                            >> 0x1dU))))))))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5888(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5888\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_want_victimize_T_1)) 
                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___probe_bits_T)
                     ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source))));
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_156)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dpc 
            = (0xffffffffffULL & (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1))));
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_29) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dpc 
            = (0xffffffffffULL & (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc))));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_102)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mepc 
            = (0xffffffffffULL & (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1))));
    } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_31)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mepc 
            = (0xffffffffffULL & (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state = 0U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_55) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_cam_sel_match_0))) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state 
            = ((1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
               << 1U);
    } else if ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__full)) 
                 & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft)) 
                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0))) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__winnerQual_0))) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state = 1U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_8) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state = 3U;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_16)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_sepc 
            = (0xffffffffffULL & (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1))));
    } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_30)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_sepc 
            = (0xffffffffffULL & (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5889(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5889\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3 = 3U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__enq_ptr_value = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_3) 
             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_3)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T_21) 
                   | (2U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T_21) 
                            << 1U)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_35) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_27));
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__io_clients_1_resp_miss_REG 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__l0_tlb_hit_1;
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z 
            = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
                      & (~ (IData)((0U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                           >> 0x1dU))))) 
                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isInf)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__ifpu__io_in_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_0;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_latch) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[3U];
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt))
                : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_pool_spad_addr[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_pool_spad_addr[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_pool_spad_addr[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_pool_spad_addr[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_pool_spad_addr[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_pool_spad_addr[2U];
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___T_4) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__j = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___T) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__j 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___next_j_T_4)
                ? 0U : (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___next_j_T_3));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5890(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5890\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h3c6c0c63__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__do_enq) 
                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__do_deq))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__maybe_full 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__do_enq;
    }
    if ((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jal;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_397) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_shift 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT___xactTracker_io_peek_entry_shift;
        __Vtemp_h3c6c0c63__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_bits_spad_row_offset)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_bits_spad_row_offset)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_bits_spad_row_offset)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_bits_spad_row_offset)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_bits_spad_row_offset) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_bits_spad_row_offset) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_bits_spad_row_offset))))))))));
        __Vtemp_h3c6c0c63__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_bits_spad_row_offset) 
                                     << 0x1fU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_bits_spad_row_offset)) 
                                                            << 0x36U) 
                                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_bits_spad_row_offset)) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_bits_spad_row_offset)) 
                                                                  << 0x24U) 
                                                                 | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_bits_spad_row_offset)) 
                                                                     << 0x1bU) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_bits_spad_row_offset) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_bits_spad_row_offset) 
                                                                                << 9U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_bits_spad_row_offset))))))))) 
                                                          >> 0x20U)));
        __Vtemp_h3c6c0c63__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_bits_spad_row_offset) 
                                     << 0x1aU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_bits_spad_row_offset) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_bits_spad_row_offset) 
                                                      << 8U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_bits_spad_row_offset) 
                                                        >> 1U))));
        __Vtemp_h3c6c0c63__0[3U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_spad_row_offset) 
                                     << 0x1eU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_bits_spad_row_offset) 
                                                   << 0x15U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_bits_spad_row_offset) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_bits_spad_row_offset) 
                                                         << 3U) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_bits_spad_row_offset) 
                                                           >> 6U)))));
        __Vtemp_h3c6c0c63__0[4U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_bits_spad_row_offset) 
                                     << 7U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_spad_row_offset) 
                                               >> 2U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_spad_row_offset 
            = ((0x8fU >= (0xffU & ((IData)(9U) * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid))))
                ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                               * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid))))
                               ? 0U : (__Vtemp_h3c6c0c63__0[
                                       (((IData)(8U) 
                                         + (0xffU & 
                                            ((IData)(9U) 
                                             * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(9U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid)))))) 
                             | (__Vtemp_h3c6c0c63__0[
                                (7U & (((IData)(9U) 
                                        * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(9U) 
                                          * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid))))))
                : 0U);
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_dram_addr[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_dram_addr[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_dram_addr[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_dram_addr[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_dram_addr[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_dram_addr[2U];
    }
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
                     & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_26)))
                     ? (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                >> 0x11U)) : ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret) 
                                                  & (~ 
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__ret_prv) 
                                                      >> 1U)))) 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5891(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5891\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_fifoId 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_11)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_fifoId));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_11) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa = 0x800000000094112dULL;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_26)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie 
                = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                 >> 7U)));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
                = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                 >> 3U)));
        } else {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
                = ((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_26)))
                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_31) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie))
                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie 
                = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret) 
                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_26))) 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_31)
                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie)
                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie)));
        }
        if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
              & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_28))) 
             & ((~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc 
                            >> 1U))) | (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                                >> 2U))))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                = ((0x102dULL & (~ ((~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1) 
                                    | ((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                                                      >> 5U)))))) 
                                       << 3U)))) | 
                   (0xffffffffffffefd2ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa));
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5892(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5892\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_ready) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_valid))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_opcode))
                                                ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_size)) 
                                                       >> 3U)))
                                                : 0U)));
        }
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter = 0U;
    }
    if ((1U & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter)))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_d_bits_sink_r 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__select;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__dWHeld_r 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_0;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_4 = 3U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_4) 
                & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_4)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_4 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T_26) 
               | (2U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T_26) 
                        << 1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_11) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T_2) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__j = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__i = 0U;
    } else {
        if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T)) 
                       | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state))) 
                      | (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__next_i)))))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__j 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___next_j_T_5)
                    ? 0U : (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___next_j_T_4));
        }
        if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T)) 
                      | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state)))))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__i 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___next_i_T_4)
                    ? 0U : (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___next_i_T_3));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5893(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5893\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc7830340__0;
    VlWide<5>/*159:0*/ __Vtemp_ha5d54f80__0;
    VlWide<5>/*159:0*/ __Vtemp_ha0fb4e75__0;
    VlWide<5>/*159:0*/ __Vtemp_hc8db6f75__0;
    VlWide<5>/*159:0*/ __Vtemp_ha86188a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h9f17579c__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b03260a__0;
    VlWide<5>/*159:0*/ __Vtemp_hc0b5f4dc__0;
    VlWide<5>/*159:0*/ __Vtemp_h4254e5c7__0;
    // Body
    VL_EXTEND_WI(132,5, __Vtemp_ha5d54f80__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                                                ? (1U 
                                                   | (0x1eU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 5U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_ha0fb4e75__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    __Vtemp_hc8db6f75__0[0U] = (__Vtemp_ha0fb4e75__0[0U] 
                                << 3U);
    __Vtemp_hc8db6f75__0[1U] = ((__Vtemp_ha0fb4e75__0[0U] 
                                 >> 0x1dU) | (__Vtemp_ha0fb4e75__0[1U] 
                                              << 3U));
    __Vtemp_hc8db6f75__0[2U] = ((__Vtemp_ha0fb4e75__0[1U] 
                                 >> 0x1dU) | (__Vtemp_ha0fb4e75__0[2U] 
                                              << 3U));
    __Vtemp_hc8db6f75__0[3U] = ((__Vtemp_ha0fb4e75__0[2U] 
                                 >> 0x1dU) | (__Vtemp_ha0fb4e75__0[3U] 
                                              << 3U));
    __Vtemp_hc8db6f75__0[4U] = ((__Vtemp_ha0fb4e75__0[3U] 
                                 >> 0x1dU) | (__Vtemp_ha0fb4e75__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(132,132,132, __Vtemp_ha86188a5__0, __Vtemp_ha5d54f80__0, __Vtemp_hc8db6f75__0);
    __Vtemp_h9f17579c__0[0U] = 0xffU;
    __Vtemp_h9f17579c__0[1U] = 0U;
    __Vtemp_h9f17579c__0[2U] = 0U;
    __Vtemp_h9f17579c__0[3U] = 0U;
    __Vtemp_h9f17579c__0[4U] = 0U;
    VL_EXTEND_WI(140,4, __Vtemp_h2b03260a__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_hc0b5f4dc__0[0U] = (__Vtemp_h2b03260a__0[0U] 
                                << 3U);
    __Vtemp_hc0b5f4dc__0[1U] = ((__Vtemp_h2b03260a__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__0[1U] 
                                              << 3U));
    __Vtemp_hc0b5f4dc__0[2U] = ((__Vtemp_h2b03260a__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__0[2U] 
                                              << 3U));
    __Vtemp_hc0b5f4dc__0[3U] = ((__Vtemp_h2b03260a__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__0[3U] 
                                              << 3U));
    __Vtemp_hc0b5f4dc__0[4U] = ((__Vtemp_h2b03260a__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_h4254e5c7__0, __Vtemp_h9f17579c__0, __Vtemp_hc0b5f4dc__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
        __Vtemp_hc7830340__0[1U] = 0U;
        __Vtemp_hc7830340__0[2U] = 0U;
        __Vtemp_hc7830340__0[3U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[0U] = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1329) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_1)
                             ? ((4U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                 ? 0U : (~ (((0x1aU 
                                              >= (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U)))
                                              ? (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))))
                                              : 0U) 
                                            >> 4U)))
                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1329) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_1)
                             ? ((4U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                 ? 0U : (~ (((0x1aU 
                                              >= (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U)))
                                              ? (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))))
                                              : 0U) 
                                            >> 4U)))
                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
        __Vtemp_hc7830340__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                                         ? __Vtemp_ha86188a5__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h4254e5c7__0[1U]
                                                     : 0U)));
        __Vtemp_hc7830340__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                                         ? __Vtemp_ha86188a5__0[2U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h4254e5c7__0[2U]
                                                     : 0U)));
        __Vtemp_hc7830340__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                                         ? __Vtemp_ha86188a5__0[3U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h4254e5c7__0[3U]
                                                     : 0U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                    ? __Vtemp_ha86188a5__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1268)
                      ? __Vtemp_h4254e5c7__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[1U] 
        = __Vtemp_hc7830340__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[2U] 
        = __Vtemp_hc7830340__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[3U] 
        = __Vtemp_hc7830340__0[3U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5894(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5894\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7bb6500a__0;
    VlWide<5>/*159:0*/ __Vtemp_ha0fb4e75__0;
    VlWide<5>/*159:0*/ __Vtemp_hc8db5f48__0;
    VlWide<5>/*159:0*/ __Vtemp_h9f447859__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b03260a__0;
    VlWide<5>/*159:0*/ __Vtemp_hc0b5828d__0;
    VlWide<5>/*159:0*/ __Vtemp_h57531ba5__0;
    VlWide<4>/*127:0*/ __Vtemp_h3045f64e__0;
    VlWide<5>/*159:0*/ __Vtemp_h03a18a4b__0;
    VlWide<5>/*159:0*/ __Vtemp_h6ac90680__0;
    VlWide<5>/*159:0*/ __Vtemp_h6ef6de03__0;
    VlWide<5>/*159:0*/ __Vtemp_hb416071f__0;
    VlWide<5>/*159:0*/ __Vtemp_h9f17579c__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b03260a__1;
    VlWide<5>/*159:0*/ __Vtemp_h2b66c08f__0;
    VlWide<5>/*159:0*/ __Vtemp_h8b9bf703__0;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp_h7bb6500a__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         << 1U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_ha0fb4e75__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    __Vtemp_hc8db5f48__0[0U] = (__Vtemp_ha0fb4e75__0[0U] 
                                << 2U);
    __Vtemp_hc8db5f48__0[1U] = ((__Vtemp_ha0fb4e75__0[0U] 
                                 >> 0x1eU) | (__Vtemp_ha0fb4e75__0[1U] 
                                              << 2U));
    __Vtemp_hc8db5f48__0[2U] = ((__Vtemp_ha0fb4e75__0[1U] 
                                 >> 0x1eU) | (__Vtemp_ha0fb4e75__0[2U] 
                                              << 2U));
    __Vtemp_hc8db5f48__0[3U] = ((__Vtemp_ha0fb4e75__0[2U] 
                                 >> 0x1eU) | (__Vtemp_ha0fb4e75__0[3U] 
                                              << 2U));
    __Vtemp_hc8db5f48__0[4U] = ((__Vtemp_ha0fb4e75__0[3U] 
                                 >> 0x1eU) | (__Vtemp_ha0fb4e75__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h9f447859__0, __Vtemp_h7bb6500a__0, __Vtemp_hc8db5f48__0);
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_EXTEND_WI(141,4, __Vtemp_h2b03260a__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_hc0b5828d__0[0U] = (__Vtemp_h2b03260a__0[0U] 
                                << 2U);
    __Vtemp_hc0b5828d__0[1U] = ((__Vtemp_h2b03260a__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[1U] 
                                              << 2U));
    __Vtemp_hc0b5828d__0[2U] = ((__Vtemp_h2b03260a__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[2U] 
                                              << 2U));
    __Vtemp_hc0b5828d__0[3U] = ((__Vtemp_h2b03260a__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[3U] 
                                              << 2U));
    __Vtemp_hc0b5828d__0[4U] = ((__Vtemp_h2b03260a__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_h57531ba5__0, __Vtemp_h7c30b3f9__0, __Vtemp_hc0b5828d__0);
    VL_EXTEND_WI(132,5, __Vtemp_h03a18a4b__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                                                ? (1U 
                                                   | (0x1eU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 5U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_h6ac90680__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    __Vtemp_h6ef6de03__0[0U] = (__Vtemp_h6ac90680__0[0U] 
                                << 3U);
    __Vtemp_h6ef6de03__0[1U] = ((__Vtemp_h6ac90680__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h6ac90680__0[1U] 
                                              << 3U));
    __Vtemp_h6ef6de03__0[2U] = ((__Vtemp_h6ac90680__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h6ac90680__0[2U] 
                                              << 3U));
    __Vtemp_h6ef6de03__0[3U] = ((__Vtemp_h6ac90680__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h6ac90680__0[3U] 
                                              << 3U));
    __Vtemp_h6ef6de03__0[4U] = ((__Vtemp_h6ac90680__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h6ac90680__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(132,132,132, __Vtemp_hb416071f__0, __Vtemp_h03a18a4b__0, __Vtemp_h6ef6de03__0);
    __Vtemp_h9f17579c__0[0U] = 0xffU;
    __Vtemp_h9f17579c__0[1U] = 0U;
    __Vtemp_h9f17579c__0[2U] = 0U;
    __Vtemp_h9f17579c__0[3U] = 0U;
    __Vtemp_h9f17579c__0[4U] = 0U;
    VL_EXTEND_WI(140,4, __Vtemp_h2b03260a__1, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h2b66c08f__0[0U] = (__Vtemp_h2b03260a__1[0U] 
                                << 3U);
    __Vtemp_h2b66c08f__0[1U] = ((__Vtemp_h2b03260a__1[0U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__1[1U] 
                                              << 3U));
    __Vtemp_h2b66c08f__0[2U] = ((__Vtemp_h2b03260a__1[1U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__1[2U] 
                                              << 3U));
    __Vtemp_h2b66c08f__0[3U] = ((__Vtemp_h2b03260a__1[2U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__1[3U] 
                                              << 3U));
    __Vtemp_h2b66c08f__0[4U] = ((__Vtemp_h2b03260a__1[3U] 
                                 >> 0x1dU) | (__Vtemp_h2b03260a__1[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_h8b9bf703__0, __Vtemp_h9f17579c__0, __Vtemp_h2b66c08f__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes = 0ULL;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight = 0U;
        __Vtemp_h3045f64e__0[1U] = 0U;
        __Vtemp_h3045f64e__0[2U] = 0U;
        __Vtemp_h3045f64e__0[3U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                    ? (((QData)((IData)(__Vtemp_h9f447859__0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_h9f447859__0[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1268)
                                    ? (((QData)((IData)(
                                                        __Vtemp_h57531ba5__0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_h57531ba5__0[0U])))
                                    : 0ULL)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1253)
                               ? ((0xfU >= (0xfU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU)))
                                   ? ((IData)(1U) << 
                                      (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1268)
                                                     ? 
                                                    ((0xfU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      : 0U)
                                                     : 0U))));
        __Vtemp_h3045f64e__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_hb416071f__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h8b9bf703__0[1U]
                                                     : 0U)));
        __Vtemp_h3045f64e__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_hb416071f__0[2U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h8b9bf703__0[2U]
                                                     : 0U)));
        __Vtemp_h3045f64e__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_hb416071f__0[3U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h8b9bf703__0[3U]
                                                     : 0U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                    ? __Vtemp_hb416071f__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1268)
                      ? __Vtemp_h8b9bf703__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h3045f64e__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h3045f64e__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h3045f64e__0[3U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5895(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5895\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hc3e10930__0;
    VlWide<5>/*159:0*/ __Vtemp_h6ac90680__0;
    VlWide<5>/*159:0*/ __Vtemp_h6ef6ef74__0;
    VlWide<5>/*159:0*/ __Vtemp_h92b8ea6e__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b03260a__0;
    VlWide<5>/*159:0*/ __Vtemp_hc0b5828d__0;
    VlWide<5>/*159:0*/ __Vtemp_h57531ba5__0;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp_hc3e10930__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         << 1U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_h6ac90680__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    __Vtemp_h6ef6ef74__0[0U] = (__Vtemp_h6ac90680__0[0U] 
                                << 2U);
    __Vtemp_h6ef6ef74__0[1U] = ((__Vtemp_h6ac90680__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h6ac90680__0[1U] 
                                              << 2U));
    __Vtemp_h6ef6ef74__0[2U] = ((__Vtemp_h6ac90680__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h6ac90680__0[2U] 
                                              << 2U));
    __Vtemp_h6ef6ef74__0[3U] = ((__Vtemp_h6ac90680__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h6ac90680__0[3U] 
                                              << 2U));
    __Vtemp_h6ef6ef74__0[4U] = ((__Vtemp_h6ac90680__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h6ac90680__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h92b8ea6e__0, __Vtemp_hc3e10930__0, __Vtemp_h6ef6ef74__0);
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_EXTEND_WI(141,4, __Vtemp_h2b03260a__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_hc0b5828d__0[0U] = (__Vtemp_h2b03260a__0[0U] 
                                << 2U);
    __Vtemp_hc0b5828d__0[1U] = ((__Vtemp_h2b03260a__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[1U] 
                                              << 2U));
    __Vtemp_hc0b5828d__0[2U] = ((__Vtemp_h2b03260a__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[2U] 
                                              << 2U));
    __Vtemp_hc0b5828d__0[3U] = ((__Vtemp_h2b03260a__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[3U] 
                                              << 2U));
    __Vtemp_hc0b5828d__0[4U] = ((__Vtemp_h2b03260a__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h2b03260a__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_h57531ba5__0, __Vtemp_h7c30b3f9__0, __Vtemp_hc0b5828d__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                    ? (((QData)((IData)(__Vtemp_h92b8ea6e__0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_h92b8ea6e__0[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1268)
                                    ? (((QData)((IData)(
                                                        __Vtemp_h57531ba5__0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_h57531ba5__0[0U])))
                                    : 0ULL)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1253)
                               ? ((0xfU >= (0xfU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU)))
                                   ? ((IData)(1U) << 
                                      (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    ((0xfU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      : 0U)
                                                     : 0U))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_a_ready) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT___subsystem_mbus_xbar_auto_out_0_a_valid))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__a_first)
                          ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter) 
                             - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5896(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5896\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_8) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xfU));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_spad_addr[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_spad_addr[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_spad_addr[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_spad_addr[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_spad_addr[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_spad_addr[2U];
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___spad_io_dma_write_resp_valid) 
         & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[8U] 
               >> 0xbU)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left 
            = (0x7fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_0) 
                          - (IData)(1U)));
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_2) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT____Vcellinp__cmd_tracker__io_alloc_bits_bytes_to_read;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___spad_io_dma_write_resp_valid) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[8U] 
            >> 0xbU))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left 
            = (0x7fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_0) 
                          - (IData)(1U)));
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_3) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT____Vcellinp__cmd_tracker__io_alloc_bits_bytes_to_read;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_valid 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__vsm__io_req_valid)
               : ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_fire) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_repeats)))) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_valid))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_hc2b3da4d__0[0U] 
            = (IData)((0x81000000000000ULL | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_enq_bits_size)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (~ 
                                                                      (0x7fffU 
                                                                       & (((IData)(0x7ffU) 
                                                                           << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                          >> 3U)))))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                     << 5U) 
                                                    | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_hc2b3da4d__0[1U] 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                << 0x1eU) | (IData)(((0x81000000000000ULL 
                                      | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_enq_bits_size)) 
                                          << 0x2dU) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (~ 
                                                                 (0x7fffU 
                                                                  & (((IData)(0x7ffU) 
                                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                     >> 3U)))))) 
                                             << 0x25U) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                << 5U) 
                                               | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))))) 
                                     >> 0x20U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_hc2b3da4d__0[2U] 
            = ((0x80U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                             >> 2U)) << 7U)) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                   >> 2U)));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_hc2b3da4d__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_hc2b3da4d__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_hc2b3da4d__0[2U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5897(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5897\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___T_2660) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_1)
                             ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))
                                 ? (~ (((0x1aU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size))
                                         ? (0x7ffffffU 
                                            & ((IData)(0xfffU) 
                                               << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size)))
                                         : 0U) >> 4U))
                                 : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1) 
                                          - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2598) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_1)
                             ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))
                                 ? (~ (((0x1aU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size))
                                         ? (0x7ffffffU 
                                            & ((IData)(0xfffU) 
                                               << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size)))
                                         : 0U) >> 4U))
                                 : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1) 
                                          - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_latch) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_bypass;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_1 
        = (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb_1__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_1_valid)) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_0 
        = (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_0_valid)) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_0)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5898(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5898\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_3 
        = (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb_3__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_3_valid)) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_2 
        = (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb_2__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_2_valid)) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_2)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2 = 3U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_2) 
                & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_2)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T_16) 
               | (2U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T_16) 
                        << 1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_397) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_388) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent 
            = (0x7fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent_next));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_ldb_completed 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_15)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_32) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_loop_id))) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_ldb_completed)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_ldb_completed 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_16)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_32) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_loop_id)) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_ldb_completed)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rocc_blocked 
        = (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__full)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_rocc_cmd_valid_output) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rocc_blocked)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_lda_completed 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_16)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_30) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_loop_id)) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_lda_completed)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_lda_completed 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_15)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_30) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_loop_id))) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_lda_completed)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5899(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5899\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_0 
            = (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_illegal_insn)
                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__inst
                      : (((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_55) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass)))
                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_0)
                          : ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1))
                              ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_0_1)
                                  ? 1U : (2U | (1U 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_0_2)))))
                              : 0U))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt))
                : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_397) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT___xactTracker_io_peek_entry_bytes_to_read;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                 & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid)) 
                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_59)) 
                     | (~ (IData)((0x23U == (0x33U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_973)
                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_complete_on_issue))
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_762) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_utilization 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
            ? 0U : (0xfU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_utilization) 
                             + ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___arb_io_in_2_ready) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_bias_io_cmd_valid)) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___arb_io_in_3_ready) 
                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_weights_io_cmd_valid))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___arb_io_in_4_ready) 
                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_cmd_valid)))) 
                            - (3U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5013) 
                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_39)) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_40) 
                                         >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__issue_id))) 
                                     + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_52) 
                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_40) 
                                           >> (7U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5900(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5900\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                      ? (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                          & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig 
                                        >> 0x33U)))) 
                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt))
                      : (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                            & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig 
                                          >> 0x33U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_sig 
                                            >> 0x33U))))) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)) 
                         | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN)) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isInf))) 
                            & (~ (IData)((0U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                 >> 0x1dU))))))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__maybe_full = 0U;
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT___T_2) 
               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stalling_1) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_0)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_1 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_0) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT____Vcellinp__command_p__io_out_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__valids_1)));
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__do_enq;
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__state 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___T_5) 
              | ((~ ((0ULL == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_dram_addr) 
                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___T_1) 
                         & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__next_i))))) 
                        & (0U == (0xffffU & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__next_i))
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j)
                                              : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___next_j_T_5)
                                                  ? 0U
                                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___next_j_T_4))))))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__state))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5901(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5901\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_1 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT___T_2) 
               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stalling_1) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_0)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_1 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_0) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT____Vcellinp__command_p__io_out_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__valids_1)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT___T_2) 
               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stalling_1) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_0)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_1 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_0) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT____Vcellinp__command_p__io_out_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_1)));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_cmd_rs2 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_cmd_rs2;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_valid 
        = ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) 
               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_393) 
                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_397))) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_399)) 
                  & (0x11U > (0xffU & (((IData)(1U) 
                                        << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_lg_len_req)) 
                                       - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesRead))))))) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_397) 
              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_388)
                  ? ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_391) 
                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_387))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_valid))
                  : ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_387)) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_valid)))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_mask = 3U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__latch) 
                & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_valid)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_mask 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT___readys_mask_T) 
               | (2U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT___readys_mask_T) 
                        << 1U)));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5902(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5902\n"); );
    // Body
    if (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_54))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_msb_1 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_1 
               >> 2U);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex_utilization = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_35) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w 
                = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                 >> 1U)));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r 
                = (1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter 
                = (0xffU & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter))
                             ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))
                                 ? (~ (((0x1aU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size))
                                         ? (0x7ffffffU 
                                            & ((IData)(0xfffU) 
                                               << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size)))
                                         : 0U) >> 4U))
                                 : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter) 
                                          - (IData)(1U))));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex_utilization 
            = (0x1fU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex_utilization) 
                         + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___arb_io_in_1_ready) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ex_io_cmd_valid))) 
                        - (3U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5016) 
                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_45)) 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_46) 
                                     >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__issue_id_1))) 
                                 + ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid) 
                                      & (0x10U == (0x30U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))) 
                                     & (0U != (3U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits) 
                                                >> 4U)))) 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_46) 
                                       >> (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits))))))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__state 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___T_4) 
              | ((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___T) 
                      & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__next_j))))) 
                     & (0U == (0xffffU & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__next_j))
                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__k)
                                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___next_k_T_5)
                                               ? 0U
                                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___next_k_T_4)))))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__state))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5903(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5903\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_acc;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_acc;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_valid_REG 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT___T_2;
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st_utilization = 0U;
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT___T_2) 
               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_1) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_1 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT____Vcellinp__command_p__io_out_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_1)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st_utilization 
            = (7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st_utilization) 
                      + ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT__full)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___st_io_cmd_valid))) 
                     - (3U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5014) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_49)) 
                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_50) 
                                  >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__issue_id_2))) 
                              + ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_59))) 
                                  & (0x20U == (0x30U 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_50) 
                                    >> (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits))))))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_valid_REG 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT___T_2;
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1385) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
            = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))
                              ? 0U : (~ (((0x1aU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))
                                           ? (0x7ffffffU 
                                              & ((IData)(0xfffU) 
                                                 << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))
                                           : 0U) >> 3U)))
                          : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5904(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5904\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_bits_opcode;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__x1_a_bits_address_REG) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__x1_a_bits_address_buf 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___tlb_io_clients_0_resp_paddr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_bits_opcode;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_valid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                 & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid)) 
                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_59)) 
                     | (~ (IData)((0x22U == (0x33U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_972)
                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_complete_on_issue))
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_761) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_valid))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_valid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                 & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid)) 
                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_59)) 
                     | (~ (IData)((0x21U == (0x33U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_971)
                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_complete_on_issue))
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_760) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_valid))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5905(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5905\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_valid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                 & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid)) 
                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_59)) 
                     | (~ (IData)((0x20U == (0x33U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_970)
                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_complete_on_issue))
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_759) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_valid))))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_latch) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_retires 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_retires;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_1 = 0U;
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT___T_2) 
               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stalling_1) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_0)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_1 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_0) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT____Vcellinp__command_p__io_out_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__valids_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_1_cmd_inst_funct 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_inst_funct;
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_cmd_rs1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_rs1;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__io_clients_1_resp_paddr_REG 
        = ((0xfffff000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__last_translated_ppn_1) 
           | (0xfffU & (IData)((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][7U])) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                       [0U][6U])) 
                                                       << 1U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                         [0U][5U])) 
                                                         >> 0x1fU)))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5906(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5906\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___T_3) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___T_1)) 
                         | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__state)))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__next_b);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__next_ich);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_1_cmd_rs1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_rs1;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_883) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_70)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_issued)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_882) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_69)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_issued)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_880) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_67)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_issued)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_879) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_66)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_issued)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_877) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_64)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_issued)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_881) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_68)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_issued)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5907(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5907\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_878) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_65)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_issued)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_876) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_63)) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__deq_ptr_value = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__do_enq;
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T_2) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state = 1U;
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T_1)
                    ? 2U : (1U & (~ (((0U == (0xffffU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___next_k_T_2)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___next_k_T_7)
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__k)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__k)))) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___state_T_1)) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__next_i))))))));
        }
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_valid) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_size 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_size;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__state 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___T_4) 
              | ((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___T) 
                      & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__next_i))))) 
                     & (0U == (0xffffU & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__next_i))
                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__k)
                                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___next_k_T_5)
                                               ? 0U
                                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___next_k_T_4)))))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__state))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5908(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5908\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_spad_addr 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_spad_addr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__io_validout_v) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__io_out_b_data[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT___fma_io_out[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__io_out_b_data[1U] 
            = ((0xefefffffU | (- (IData)((7U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT___fma_io_out[1U] 
                                                 >> 0x1dU))))) 
               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT___fma_io_out[1U]);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__io_out_b_data[2U] 
            = ((1U | (- (IData)((7U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT___fma_io_out[1U] 
                                        >> 0x1dU))))) 
               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT___fma_io_out[2U]);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__state = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___T_3) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__state = 1U;
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___T_1) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__state 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___T_2)
                    ? 2U : (2U & ((~ ((((0U == (0xffffU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___next_och_T_4)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___next_och_T_9)
                                                     ? 0U
                                                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___next_och_T_8)
                                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__och)))) 
                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___state_T_1)) 
                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___state_T_3)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__next_kch)))))) 
                                  << 1U)));
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__do_enq;
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_want_victimize_T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_size = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___probe_bits_T) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_size 
            = (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                       >> 5U));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_106)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtval 
            = (0xffffffffffULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1);
    } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_31)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtval 
            = (0xffffffffffULL & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break)
                                   ? (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc)))
                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_tval));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5909(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5909\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_20)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stval 
            = (0xffffffffffULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1);
    } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_30)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stval 
            = (0xffffffffffULL & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break)
                                   ? (~ (1ULL | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc)))
                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_tval));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_sel_alu2 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_xcpt)
                ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_41)
                    ? 0U : (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_WIRE_1)))
                : ((((0x7fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T)) 
                     | ((0xffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_4)) 
                        | ((0x7fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_6)) 
                           | ((0x1ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_16)) 
                              | ((0x3fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_18)) 
                                 | ((0x7fffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_26)) 
                                    | ((0x1fffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_30)) 
                                       | ((0x7fffU 
                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_32)) 
                                          | ((0xffU 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_44)) 
                                             | ((0x1ffU 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_48)) 
                                                | ((0x3fffU 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_60)) 
                                                   | ((0x7fffU 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_64)) 
                                                      | ((0x7fU 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_76)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_86)) 
                                                            | ((0x7fffU 
                                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_128)) 
                                                               | ((0x7fffU 
                                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_132)) 
                                                                  | ((0x7fffU 
                                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_138)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_144)) 
                                                                        | ((0xffU 
                                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_158)) 
                                                                           | (0x3fffU 
                                                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_178))))))))))))))))))))) 
                    << 1U) | ((0x7fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T)) 
                              | ((0xffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_4)) 
                                 | ((0x7fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_6)) 
                                    | ((0x1ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_16)) 
                                       | ((0x3fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_18)) 
                                          | ((0x3ffU 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_50)) 
                                             | ((0x7fU 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_52)) 
                                                | ((0x7fffU 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_62)) 
                                                   | ((0xffffU 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_66)) 
                                                      | ((0x7fU 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_76)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_86)) 
                                                            | ((0x7fffU 
                                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_128)) 
                                                               | ((0xffffU 
                                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_134)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_148)) 
                                                                     | (0x1ffU 
                                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_162))))))))))))))))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5910(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5910\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
            ? 0U : (0x1ffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__idle) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__full)))
                               ? (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__winnerQual_1) 
                                   & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode) 
                                         >> 2U))) ? 
                                  (~ (0xffffffU & (
                                                   ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                   >> 3U)))
                                   : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft) 
                                            - ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__full)) 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_2_valid))))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__maybe_full) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_read_resp_ready)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__maybe_full) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_read_resp_ready)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__maybe_full) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_read_resp_ready)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__do_enq;
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__io_clients_0_resp_paddr_REG 
        = ((0xfffff000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__last_translated_ppn) 
           | (0xfffU & (IData)((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][7U])) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                       [0U][6U])) 
                                                       << 1U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                         [0U][5U])) 
                                                         >> 0x1fU)))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5911(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5911\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__maybe_full = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__maybe_full) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_read_resp_ready)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__do_enq;
        }
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stalling_7)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_3_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_6_resp_data_3_0;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_1_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_6_resp_data_1_0;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_2_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_6_resp_data_2_0;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_0_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_6_resp_data_0_0;
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_1_cmd_rs2 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_cmd_rs2;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_fpu_dmem_resp_val) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_data 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_io_cpu_resp_bits_data_word_bypass;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_replay 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_kill_mem) 
             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_replay)) 
            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__fpu_kill_mem)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb)));
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_dram_addr[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_dram_addr[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_dram_addr[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_dram_addr[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_dram_addr[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_dram_addr[2U];
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__do_enq) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT___mem_RW0_rdata[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT___mem_RW0_rdata[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT___mem_RW0_rdata[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT___mem_RW0_rdata[3U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q_io_enq_bits_fromDMA_REG;
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__do_enq) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT___mem_RW0_rdata[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT___mem_RW0_rdata[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT___mem_RW0_rdata[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT___mem_RW0_rdata[3U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q_io_enq_bits_fromDMA_REG;
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5912(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5912\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__do_enq) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT___mem_RW0_rdata[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT___mem_RW0_rdata[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT___mem_RW0_rdata[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT___mem_RW0_rdata[3U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q_io_enq_bits_fromDMA_REG;
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__do_enq) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT___mem_RW0_rdata[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT___mem_RW0_rdata[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT___mem_RW0_rdata[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT___mem_RW0_rdata[3U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q_io_enq_bits_fromDMA_REG;
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[2U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[3U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT____Vlvbound_h85cf5b67__0[4U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_1 
            = (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_54)
                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_1)
                      : ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2))
                          ? 0U : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_1_1)
                                   ? 1U : (2U | (1U 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_1_2))))))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_871) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_871) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5913(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5913\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_871) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_871) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_871) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5914(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5914\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__state_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__state_0 = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_0_read_resp_ready)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_1_read_resp_ready)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__do_enq;
        }
        if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__beatsLeft))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__state_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__winnerQual_1;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__state_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__winnerQual_0;
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_enq;
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__maybe_full = 0U;
    }
    if ((1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_valid) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)) 
               | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                     >> 9U))))) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_5) {
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken;
            vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & (((~ (IData)((0x1fffffffffULL 
                                          & ((~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_output) 
                                             >> 2U)))) 
                              ^ (3U & (~ (IData)((0xfffffffULL 
                                                  & ((~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_output) 
                                                     >> 0xbU)))))) 
                             ^ (0x1c0U & (((IData)(0xddU) 
                                           * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                          << 1U))));
        } else {
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 0U;
            vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5915(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5915\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_1_cmd_inst_funct 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_inst_funct;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_1_cmd_rs1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_cmd_rs1;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1354) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 
            = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (((0x1aU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))
                                           ? (0x7ffffffU 
                                              & ((IData)(0xfffU) 
                                                 << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))
                                           : 0U) >> 3U)))
                          : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight 
            = (0xfffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                    : 0U) : 0U)) & 
                           (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                                ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source))
                                    : 0U) : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight 
            = (0xfffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                    : 0U) : 0U)) & 
                           (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                                ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source))
                                    : 0U) : 0U))));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (0xfffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                    : 0U) : 0U)) & 
                           (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                                ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source))
                                    : 0U) : 0U)))) : 0U);
}

extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h26ec0c50_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b6f_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52859b67_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5916(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5916\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hdc9ca768__0;
    VlWide<9>/*287:0*/ __Vtemp_h576db23a__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ef60f48__0;
    VlWide<9>/*287:0*/ __Vtemp_h614ef892__0;
    VlWide<9>/*287:0*/ __Vtemp_h6cadc939__0;
    VlWide<9>/*287:0*/ __Vtemp_heaff43e1__0;
    VlWide<9>/*287:0*/ __Vtemp_h34ac53f1__0;
    VlWide<9>/*287:0*/ __Vtemp_hddcd787a__0;
    VlWide<3>/*95:0*/ __Vtemp_h2cc4a01a__0;
    VlWide<9>/*287:0*/ __Vtemp_h07d384e4__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ef60f48__1;
    VlWide<9>/*287:0*/ __Vtemp_h043fb8fd__0;
    VlWide<9>/*287:0*/ __Vtemp_h9287257f__0;
    VlWide<9>/*287:0*/ __Vtemp_heaff43e1__1;
    VlWide<9>/*287:0*/ __Vtemp_h9a253cd4__0;
    VlWide<9>/*287:0*/ __Vtemp_h922470e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h315aaf15__0;
    VlWide<9>/*287:0*/ __Vtemp_hb7b604f2__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ef60f48__2;
    VlWide<9>/*287:0*/ __Vtemp_hc5f58cf6__0;
    VlWide<9>/*287:0*/ __Vtemp_h16b84a93__0;
    VlWide<9>/*287:0*/ __Vtemp_heaff43e1__2;
    VlWide<9>/*287:0*/ __Vtemp_hf88adc44__0;
    VlWide<9>/*287:0*/ __Vtemp_h406b278b__0;
    // Body
    VL_EXTEND_WI(259,4, __Vtemp_h576db23a__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h2ef60f48__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source));
    __Vtemp_h614ef892__0[0U] = (__Vtemp_h2ef60f48__0[0U] 
                                << 2U);
    __Vtemp_h614ef892__0[1U] = ((__Vtemp_h2ef60f48__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[1U] 
                                              << 2U));
    __Vtemp_h614ef892__0[2U] = ((__Vtemp_h2ef60f48__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[2U] 
                                              << 2U));
    __Vtemp_h614ef892__0[3U] = ((__Vtemp_h2ef60f48__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[3U] 
                                              << 2U));
    __Vtemp_h614ef892__0[4U] = ((__Vtemp_h2ef60f48__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[4U] 
                                              << 2U));
    __Vtemp_h614ef892__0[5U] = ((__Vtemp_h2ef60f48__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[5U] 
                                              << 2U));
    __Vtemp_h614ef892__0[6U] = ((__Vtemp_h2ef60f48__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[6U] 
                                              << 2U));
    __Vtemp_h614ef892__0[7U] = ((__Vtemp_h2ef60f48__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[7U] 
                                              << 2U));
    __Vtemp_h614ef892__0[8U] = ((__Vtemp_h2ef60f48__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(259,259,259, __Vtemp_h6cadc939__0, __Vtemp_h576db23a__0, __Vtemp_h614ef892__0);
    VL_EXTEND_WI(269,5, __Vtemp_heaff43e1__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source));
    __Vtemp_h34ac53f1__0[0U] = (__Vtemp_heaff43e1__0[0U] 
                                << 2U);
    __Vtemp_h34ac53f1__0[1U] = ((__Vtemp_heaff43e1__0[0U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[1U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[2U] = ((__Vtemp_heaff43e1__0[1U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[2U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[3U] = ((__Vtemp_heaff43e1__0[2U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[3U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[4U] = ((__Vtemp_heaff43e1__0[3U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[4U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[5U] = ((__Vtemp_heaff43e1__0[4U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[5U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[6U] = ((__Vtemp_heaff43e1__0[5U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[6U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[7U] = ((__Vtemp_heaff43e1__0[6U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[7U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[8U] = ((__Vtemp_heaff43e1__0[7U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_hddcd787a__0, VTestHarness__ConstPool__CONST_h26ec0c50_0, __Vtemp_h34ac53f1__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        __Vtemp_hdc9ca768__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                         ? (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h6cadc939__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_hddcd787a__0[1U])
                                                     : 0U)));
        __Vtemp_hdc9ca768__0[2U] = (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h6cadc939__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_hddcd787a__0[2U])
                                                    : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                    ? (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h6cadc939__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_hddcd787a__0[0U])
                      : 0U)));
    } else {
        __Vtemp_hdc9ca768__0[1U] = 0U;
        __Vtemp_hdc9ca768__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_hdc9ca768__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_hdc9ca768__0[2U];
    VL_EXTEND_WI(259,4, __Vtemp_h07d384e4__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h2ef60f48__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source));
    __Vtemp_h043fb8fd__0[0U] = (__Vtemp_h2ef60f48__1[0U] 
                                << 2U);
    __Vtemp_h043fb8fd__0[1U] = ((__Vtemp_h2ef60f48__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[1U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[2U] = ((__Vtemp_h2ef60f48__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[2U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[3U] = ((__Vtemp_h2ef60f48__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[3U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[4U] = ((__Vtemp_h2ef60f48__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[4U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[5U] = ((__Vtemp_h2ef60f48__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[5U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[6U] = ((__Vtemp_h2ef60f48__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[6U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[7U] = ((__Vtemp_h2ef60f48__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[7U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[8U] = ((__Vtemp_h2ef60f48__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(259,259,259, __Vtemp_h9287257f__0, __Vtemp_h07d384e4__0, __Vtemp_h043fb8fd__0);
    VL_EXTEND_WI(269,5, __Vtemp_heaff43e1__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source));
    __Vtemp_h9a253cd4__0[0U] = (__Vtemp_heaff43e1__1[0U] 
                                << 2U);
    __Vtemp_h9a253cd4__0[1U] = ((__Vtemp_heaff43e1__1[0U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[1U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[2U] = ((__Vtemp_heaff43e1__1[1U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[2U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[3U] = ((__Vtemp_heaff43e1__1[2U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[3U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[4U] = ((__Vtemp_heaff43e1__1[3U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[4U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[5U] = ((__Vtemp_heaff43e1__1[4U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[5U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[6U] = ((__Vtemp_heaff43e1__1[5U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[6U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[7U] = ((__Vtemp_heaff43e1__1[6U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[7U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[8U] = ((__Vtemp_heaff43e1__1[7U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_h922470e9__0, VTestHarness__ConstPool__CONST_h26ec0c50_0, __Vtemp_h9a253cd4__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        __Vtemp_h2cc4a01a__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                         ? (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h9287257f__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h922470e9__0[1U])
                                                     : 0U)));
        __Vtemp_h2cc4a01a__0[2U] = (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h9287257f__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h922470e9__0[2U])
                                                    : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                    ? (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h9287257f__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h922470e9__0[0U])
                      : 0U)));
    } else {
        __Vtemp_h2cc4a01a__0[1U] = 0U;
        __Vtemp_h2cc4a01a__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h2cc4a01a__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h2cc4a01a__0[2U];
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    VL_EXTEND_WI(259,4, __Vtemp_hb7b604f2__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h2ef60f48__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source));
    __Vtemp_hc5f58cf6__0[0U] = (__Vtemp_h2ef60f48__2[0U] 
                                << 2U);
    __Vtemp_hc5f58cf6__0[1U] = ((__Vtemp_h2ef60f48__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[1U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[2U] = ((__Vtemp_h2ef60f48__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[2U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[3U] = ((__Vtemp_h2ef60f48__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[3U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[4U] = ((__Vtemp_h2ef60f48__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[4U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[5U] = ((__Vtemp_h2ef60f48__2[4U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[5U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[6U] = ((__Vtemp_h2ef60f48__2[5U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[6U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[7U] = ((__Vtemp_h2ef60f48__2[6U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[7U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[8U] = ((__Vtemp_h2ef60f48__2[7U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(259,259,259, __Vtemp_h16b84a93__0, __Vtemp_hb7b604f2__0, __Vtemp_hc5f58cf6__0);
    VL_EXTEND_WI(269,5, __Vtemp_heaff43e1__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source));
    __Vtemp_hf88adc44__0[0U] = (__Vtemp_heaff43e1__2[0U] 
                                << 2U);
    __Vtemp_hf88adc44__0[1U] = ((__Vtemp_heaff43e1__2[0U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[1U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[2U] = ((__Vtemp_heaff43e1__2[1U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[2U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[3U] = ((__Vtemp_heaff43e1__2[2U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[3U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[4U] = ((__Vtemp_heaff43e1__2[3U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[4U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[5U] = ((__Vtemp_heaff43e1__2[4U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[5U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[6U] = ((__Vtemp_heaff43e1__2[5U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[6U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[7U] = ((__Vtemp_heaff43e1__2[6U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[7U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[8U] = ((__Vtemp_heaff43e1__2[7U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_h406b278b__0, VTestHarness__ConstPool__CONST_h26ec0c50_0, __Vtemp_hf88adc44__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        __Vtemp_h315aaf15__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                         ? (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h16b84a93__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h406b278b__0[1U])
                                                     : 0U)));
        __Vtemp_h315aaf15__0[2U] = (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h16b84a93__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h406b278b__0[2U])
                                                    : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                    ? (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h16b84a93__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h406b278b__0[0U])
                      : 0U)));
    } else {
        __Vtemp_h315aaf15__0[1U] = 0U;
        __Vtemp_h315aaf15__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h315aaf15__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h315aaf15__0[2U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5917(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5917\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2038b7fb__0;
    VlWide<9>/*287:0*/ __Vtemp_h26d7e226__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ef60f48__0;
    VlWide<9>/*287:0*/ __Vtemp_h614ef892__0;
    VlWide<9>/*287:0*/ __Vtemp_h897d6a64__0;
    VlWide<9>/*287:0*/ __Vtemp_heaff43e1__0;
    VlWide<9>/*287:0*/ __Vtemp_h34ac53f1__0;
    VlWide<9>/*287:0*/ __Vtemp_hddcd787a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc55ca10c__0;
    VlWide<9>/*287:0*/ __Vtemp_hdc44d288__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ef60f48__1;
    VlWide<9>/*287:0*/ __Vtemp_h043fb8fd__0;
    VlWide<9>/*287:0*/ __Vtemp_h96b74ad8__0;
    VlWide<9>/*287:0*/ __Vtemp_heaff43e1__1;
    VlWide<9>/*287:0*/ __Vtemp_h9a253cd4__0;
    VlWide<9>/*287:0*/ __Vtemp_h922470e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f3ce7ff__0;
    VlWide<9>/*287:0*/ __Vtemp_hf0eb6e66__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ef60f48__2;
    VlWide<9>/*287:0*/ __Vtemp_hc5f58cf6__0;
    VlWide<9>/*287:0*/ __Vtemp_h782d8c37__0;
    VlWide<9>/*287:0*/ __Vtemp_heaff43e1__2;
    VlWide<9>/*287:0*/ __Vtemp_hf88adc44__0;
    VlWide<9>/*287:0*/ __Vtemp_h406b278b__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_36) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a 
            = (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 3U)));
    }
    VL_EXTEND_WI(259,4, __Vtemp_h26d7e226__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h2ef60f48__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source));
    __Vtemp_h614ef892__0[0U] = (__Vtemp_h2ef60f48__0[0U] 
                                << 2U);
    __Vtemp_h614ef892__0[1U] = ((__Vtemp_h2ef60f48__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[1U] 
                                              << 2U));
    __Vtemp_h614ef892__0[2U] = ((__Vtemp_h2ef60f48__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[2U] 
                                              << 2U));
    __Vtemp_h614ef892__0[3U] = ((__Vtemp_h2ef60f48__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[3U] 
                                              << 2U));
    __Vtemp_h614ef892__0[4U] = ((__Vtemp_h2ef60f48__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[4U] 
                                              << 2U));
    __Vtemp_h614ef892__0[5U] = ((__Vtemp_h2ef60f48__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[5U] 
                                              << 2U));
    __Vtemp_h614ef892__0[6U] = ((__Vtemp_h2ef60f48__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[6U] 
                                              << 2U));
    __Vtemp_h614ef892__0[7U] = ((__Vtemp_h2ef60f48__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[7U] 
                                              << 2U));
    __Vtemp_h614ef892__0[8U] = ((__Vtemp_h2ef60f48__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__0[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(259,259,259, __Vtemp_h897d6a64__0, __Vtemp_h26d7e226__0, __Vtemp_h614ef892__0);
    VL_EXTEND_WI(269,5, __Vtemp_heaff43e1__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source));
    __Vtemp_h34ac53f1__0[0U] = (__Vtemp_heaff43e1__0[0U] 
                                << 2U);
    __Vtemp_h34ac53f1__0[1U] = ((__Vtemp_heaff43e1__0[0U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[1U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[2U] = ((__Vtemp_heaff43e1__0[1U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[2U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[3U] = ((__Vtemp_heaff43e1__0[2U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[3U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[4U] = ((__Vtemp_heaff43e1__0[3U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[4U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[5U] = ((__Vtemp_heaff43e1__0[4U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[5U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[6U] = ((__Vtemp_heaff43e1__0[5U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[6U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[7U] = ((__Vtemp_heaff43e1__0[6U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[7U] 
                                              << 2U));
    __Vtemp_h34ac53f1__0[8U] = ((__Vtemp_heaff43e1__0[7U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__0[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_hddcd787a__0, VTestHarness__ConstPool__CONST_h26ec0c50_0, __Vtemp_h34ac53f1__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        __Vtemp_h2038b7fb__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                         ? (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h897d6a64__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_hddcd787a__0[1U])
                                                     : 0U)));
        __Vtemp_h2038b7fb__0[2U] = (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h897d6a64__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_hddcd787a__0[2U])
                                                    : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_722)
                    ? (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h897d6a64__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_737)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_hddcd787a__0[0U])
                      : 0U)));
    } else {
        __Vtemp_h2038b7fb__0[1U] = 0U;
        __Vtemp_h2038b7fb__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h2038b7fb__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h2038b7fb__0[2U];
    VL_EXTEND_WI(259,4, __Vtemp_hdc44d288__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h2ef60f48__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source));
    __Vtemp_h043fb8fd__0[0U] = (__Vtemp_h2ef60f48__1[0U] 
                                << 2U);
    __Vtemp_h043fb8fd__0[1U] = ((__Vtemp_h2ef60f48__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[1U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[2U] = ((__Vtemp_h2ef60f48__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[2U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[3U] = ((__Vtemp_h2ef60f48__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[3U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[4U] = ((__Vtemp_h2ef60f48__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[4U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[5U] = ((__Vtemp_h2ef60f48__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[5U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[6U] = ((__Vtemp_h2ef60f48__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[6U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[7U] = ((__Vtemp_h2ef60f48__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[7U] 
                                              << 2U));
    __Vtemp_h043fb8fd__0[8U] = ((__Vtemp_h2ef60f48__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__1[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(259,259,259, __Vtemp_h96b74ad8__0, __Vtemp_hdc44d288__0, __Vtemp_h043fb8fd__0);
    VL_EXTEND_WI(269,5, __Vtemp_heaff43e1__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source));
    __Vtemp_h9a253cd4__0[0U] = (__Vtemp_heaff43e1__1[0U] 
                                << 2U);
    __Vtemp_h9a253cd4__0[1U] = ((__Vtemp_heaff43e1__1[0U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[1U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[2U] = ((__Vtemp_heaff43e1__1[1U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[2U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[3U] = ((__Vtemp_heaff43e1__1[2U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[3U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[4U] = ((__Vtemp_heaff43e1__1[3U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[4U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[5U] = ((__Vtemp_heaff43e1__1[4U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[5U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[6U] = ((__Vtemp_heaff43e1__1[5U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[6U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[7U] = ((__Vtemp_heaff43e1__1[6U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[7U] 
                                              << 2U));
    __Vtemp_h9a253cd4__0[8U] = ((__Vtemp_heaff43e1__1[7U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__1[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_h922470e9__0, VTestHarness__ConstPool__CONST_h26ec0c50_0, __Vtemp_h9a253cd4__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        __Vtemp_hc55ca10c__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                         ? (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h96b74ad8__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h922470e9__0[1U])
                                                     : 0U)));
        __Vtemp_hc55ca10c__0[2U] = (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h96b74ad8__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h922470e9__0[2U])
                                                    : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_722)
                    ? (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h96b74ad8__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___T_737)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h922470e9__0[0U])
                      : 0U)));
    } else {
        __Vtemp_hc55ca10c__0[1U] = 0U;
        __Vtemp_hc55ca10c__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hc55ca10c__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hc55ca10c__0[2U];
    VL_EXTEND_WI(259,4, __Vtemp_hf0eb6e66__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h2ef60f48__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source));
    __Vtemp_hc5f58cf6__0[0U] = (__Vtemp_h2ef60f48__2[0U] 
                                << 2U);
    __Vtemp_hc5f58cf6__0[1U] = ((__Vtemp_h2ef60f48__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[1U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[2U] = ((__Vtemp_h2ef60f48__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[2U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[3U] = ((__Vtemp_h2ef60f48__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[3U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[4U] = ((__Vtemp_h2ef60f48__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[4U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[5U] = ((__Vtemp_h2ef60f48__2[4U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[5U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[6U] = ((__Vtemp_h2ef60f48__2[5U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[6U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[7U] = ((__Vtemp_h2ef60f48__2[6U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[7U] 
                                              << 2U));
    __Vtemp_hc5f58cf6__0[8U] = ((__Vtemp_h2ef60f48__2[7U] 
                                 >> 0x1eU) | (__Vtemp_h2ef60f48__2[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(259,259,259, __Vtemp_h782d8c37__0, __Vtemp_hf0eb6e66__0, __Vtemp_hc5f58cf6__0);
    VL_EXTEND_WI(269,5, __Vtemp_heaff43e1__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source));
    __Vtemp_hf88adc44__0[0U] = (__Vtemp_heaff43e1__2[0U] 
                                << 2U);
    __Vtemp_hf88adc44__0[1U] = ((__Vtemp_heaff43e1__2[0U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[1U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[2U] = ((__Vtemp_heaff43e1__2[1U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[2U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[3U] = ((__Vtemp_heaff43e1__2[2U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[3U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[4U] = ((__Vtemp_heaff43e1__2[3U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[4U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[5U] = ((__Vtemp_heaff43e1__2[4U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[5U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[6U] = ((__Vtemp_heaff43e1__2[5U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[6U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[7U] = ((__Vtemp_heaff43e1__2[6U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[7U] 
                                              << 2U));
    __Vtemp_hf88adc44__0[8U] = ((__Vtemp_heaff43e1__2[7U] 
                                 >> 0x1eU) | (__Vtemp_heaff43e1__2[8U] 
                                              << 2U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_h406b278b__0, VTestHarness__ConstPool__CONST_h26ec0c50_0, __Vtemp_hf88adc44__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        __Vtemp_h5f3ce7ff__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                         ? (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h782d8c37__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h406b278b__0[1U])
                                                     : 0U)));
        __Vtemp_h5f3ce7ff__0[2U] = (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h782d8c37__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                                                    ? 
                                                   (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h406b278b__0[2U])
                                                    : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_722)
                    ? (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h782d8c37__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_737)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h406b278b__0[0U])
                      : 0U)));
    } else {
        __Vtemp_h5f3ce7ff__0[1U] = 0U;
        __Vtemp_h5f3ce7ff__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h5f3ce7ff__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h5f3ce7ff__0[2U];
}

extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hd0572db1_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5918(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5918\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h58ae8ca2__0;
    VlWide<64>/*2047:0*/ __Vtemp_haeda6cb7__0;
    VlWide<64>/*2047:0*/ __Vtemp_haeda6cb7__1;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_992) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                      ? ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                          ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                  ? (0x1fffU & ((IData)(0x3fU) 
                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                  : 0U) >> 3U)) : 0U)
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                         - (IData)(1U))));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
            = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                         - (IData)(1U)) : ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                                            ? (~ ((
                                                   (0xcU 
                                                    >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                                    ? 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                                    : 0U) 
                                                  >> 3U))
                                            : 0U)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                      ? ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                          ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                  ? (0x1fffU & ((IData)(0x3fU) 
                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                  : 0U) >> 3U)) : 0U)
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                         - (IData)(1U))));
    }
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_haeda6cb7__0, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_slave_named_bootaddressreg_auto_fragmenter_out_a_bits_source));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_haeda6cb7__1, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_slave_named_bootaddressreg_auto_fragmenter_out_a_bits_source));
    __Vtemp_h58ae8ca2__0[1U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[1U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[1U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])))));
    __Vtemp_h58ae8ca2__0[2U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[2U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[2U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])))));
    __Vtemp_h58ae8ca2__0[3U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[3U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[3U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])))));
    __Vtemp_h58ae8ca2__0[4U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[4U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[4U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])))));
    __Vtemp_h58ae8ca2__0[5U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[5U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[5U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])))));
    __Vtemp_h58ae8ca2__0[6U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[6U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[6U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])))));
    __Vtemp_h58ae8ca2__0[7U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[7U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[7U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])))));
    __Vtemp_h58ae8ca2__0[8U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[8U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[8U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])))));
    __Vtemp_h58ae8ca2__0[9U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_haeda6cb7__0[9U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_haeda6cb7__1[9U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])))));
    __Vtemp_h58ae8ca2__0[0xaU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_haeda6cb7__0[0xaU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_haeda6cb7__1[0xaU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])))));
    __Vtemp_h58ae8ca2__0[0xbU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_haeda6cb7__0[0xbU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_haeda6cb7__1[0xbU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])))));
    __Vtemp_h58ae8ca2__0[0xcU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_haeda6cb7__0[0xcU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_haeda6cb7__1[0xcU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])))));
    __Vtemp_h58ae8ca2__0[0xdU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_haeda6cb7__0[0xdU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_haeda6cb7__1[0xdU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])))));
    __Vtemp_h58ae8ca2__0[0xeU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_haeda6cb7__0[0xeU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_haeda6cb7__1[0xeU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])))));
    __Vtemp_h58ae8ca2__0[0xfU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_haeda6cb7__0[0xfU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_haeda6cb7__1[0xfU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])))));
    __Vtemp_h58ae8ca2__0[0x10U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x10U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x10U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])))));
    __Vtemp_h58ae8ca2__0[0x11U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x11U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x11U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x11U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])))));
    __Vtemp_h58ae8ca2__0[0x12U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x12U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x12U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x12U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])))));
    __Vtemp_h58ae8ca2__0[0x13U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x13U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x13U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x13U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])))));
    __Vtemp_h58ae8ca2__0[0x14U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x14U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x14U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x14U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])))));
    __Vtemp_h58ae8ca2__0[0x15U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x15U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x15U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x15U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])))));
    __Vtemp_h58ae8ca2__0[0x16U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x16U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x16U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x16U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])))));
    __Vtemp_h58ae8ca2__0[0x17U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x17U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x17U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x17U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])))));
    __Vtemp_h58ae8ca2__0[0x18U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x18U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x18U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x18U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])))));
    __Vtemp_h58ae8ca2__0[0x19U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x19U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x19U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x19U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])))));
    __Vtemp_h58ae8ca2__0[0x1aU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1aU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x1aU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x1aU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])))));
    __Vtemp_h58ae8ca2__0[0x1bU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1bU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x1bU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x1bU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])))));
    __Vtemp_h58ae8ca2__0[0x1cU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1cU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x1cU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x1cU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])))));
    __Vtemp_h58ae8ca2__0[0x1dU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1dU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x1dU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x1dU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])))));
    __Vtemp_h58ae8ca2__0[0x1eU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1eU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x1eU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])))));
    __Vtemp_h58ae8ca2__0[0x1fU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1fU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x1fU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x1fU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])))));
    __Vtemp_h58ae8ca2__0[0x20U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x20U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_haeda6cb7__0[0x20U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_haeda6cb7__1[0x20U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
               ? VTestHarness__ConstPool__CONST_hd0572db1_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_haeda6cb7__0[0U] : 
                      VTestHarness__ConstPool__CONST_hd0572db1_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_done)
                         ? __Vtemp_haeda6cb7__1[0U]
                         : VTestHarness__ConstPool__CONST_hd0572db1_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h58ae8ca2__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h58ae8ca2__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h58ae8ca2__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h58ae8ca2__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h58ae8ca2__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h58ae8ca2__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h58ae8ca2__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h58ae8ca2__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h58ae8ca2__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h58ae8ca2__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h58ae8ca2__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h58ae8ca2__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h58ae8ca2__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h58ae8ca2__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h58ae8ca2__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h58ae8ca2__0[0x10U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x11U] 
        = __Vtemp_h58ae8ca2__0[0x11U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x12U] 
        = __Vtemp_h58ae8ca2__0[0x12U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x13U] 
        = __Vtemp_h58ae8ca2__0[0x13U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x14U] 
        = __Vtemp_h58ae8ca2__0[0x14U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x15U] 
        = __Vtemp_h58ae8ca2__0[0x15U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x16U] 
        = __Vtemp_h58ae8ca2__0[0x16U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x17U] 
        = __Vtemp_h58ae8ca2__0[0x17U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x18U] 
        = __Vtemp_h58ae8ca2__0[0x18U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x19U] 
        = __Vtemp_h58ae8ca2__0[0x19U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1aU] 
        = __Vtemp_h58ae8ca2__0[0x1aU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1bU] 
        = __Vtemp_h58ae8ca2__0[0x1bU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1cU] 
        = __Vtemp_h58ae8ca2__0[0x1cU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1dU] 
        = __Vtemp_h58ae8ca2__0[0x1dU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1eU] 
        = __Vtemp_h58ae8ca2__0[0x1eU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x1fU] 
        = __Vtemp_h58ae8ca2__0[0x1fU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x20U] 
        = __Vtemp_h58ae8ca2__0[0x20U];
}
