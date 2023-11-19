// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10365(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10365\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_180_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_331_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_330_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_330_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_330_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_330_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_331_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_5__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_101_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_86_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_85_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_84_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_84_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_84_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_347_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_347_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_347_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10366(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10366\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_346_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_346_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_346_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_346_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_346_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_346_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_86_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_101_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_355_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_100_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_99_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_99_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_99_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10367(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10367\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_166_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10368(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10368\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_166_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_362_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_362_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_71_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_116_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_370_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_115_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_114_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_114_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_114_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_378_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_378_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_378_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10369(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10369\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_377_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_377_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_377_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_377_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_377_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_377_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_56_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_131_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_385_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_130_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_129_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_129_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_129_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10370(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10370\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_152_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10371(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10371\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_152_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_393_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_393_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_41_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_146_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_400_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_145_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_b_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_b_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_b_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_409_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_409_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_409_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10372(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10372\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_408_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_408_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_408_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_408_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_408_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_408_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_26_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_161_0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_10__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_10_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_10_io_in_b_0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10373(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10373\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_138_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10374(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10374\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_138_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_424_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_423_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_423_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_423_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_423_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_424_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_440_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_440_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_440_0));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_439_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_439_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_439_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_439_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_439_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_439_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10375(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10375\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10376(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10376\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_124_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_124_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_455_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_454_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_454_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_454_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_454_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_455_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_471_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_471_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_471_0));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_470_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_470_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_470_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10377(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10377\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_470_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_470_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_470_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10378(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10378\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_110_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10379(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10379\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_110_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_486_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_485_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_485_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_485_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_485_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_486_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_0__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_0__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_0__DOT__tile_0_0__DOT___c2_T_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10380(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10380\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_0__DOT__tile_0_0__DOT___io_out_c_T_15))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10382(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10382\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10383(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10383\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10384(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10384\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10385(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10385\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10386(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10386\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10387(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10387\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10388(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10388\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10389(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10389\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr_near_even))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10390(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10390\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                           >> 0x17U)) >> 8U) & ((0x20U 
                                                 <= 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                             >> 0x17U)))) 
                                                | ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    & ((0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__alignedSig 
                                                                    >> 2U)))) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr_near_even)))
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                 >> 0x17U)))) 
                                                    | ((0x1eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                    >> 0x17U)))) 
                                                       & ((0x3fffffffU 
                                                           == 
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__alignedSig 
                                                                       >> 2U)))) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr_near_even))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10391(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10391\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10392(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10392\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10393(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10393\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10396(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10396\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10397(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10397\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10398(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10398\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10399(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10399\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10400(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10400\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__rawIn___05FisNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                              >> 0x17U)) >> 8U))) & 
           (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                       >> 0x17U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10401(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10401\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__shiftedSig 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(
                                                       ((0x800000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | (0x7fffffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out))))) 
                                       << ((0x100U 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x17U)))
                                            ? (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                          >> 0x17U)))
                                            : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_1__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_1__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_1__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10402(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10402\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_2__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_2__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_2__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT___io_out_c_T_15))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_3__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_3__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_3__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_4__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_4__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_4__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT___io_out_c_T_15))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_5__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_5__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_5__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT___io_out_c_T_15))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT___io_out_c_T_15))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT___c2_T_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10406(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10406\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_b_0 
        = ((0xfff00U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_144_0) 
                                          >> 7U)))) 
                        << 8U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_144_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_10__DOT__tile_0_0__DOT___GEN_23 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_10__DOT__tile_0_0__DOT___c2_T_2) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_10__DOT__tile_0_0__DOT___c2_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___io_out_c_T_15))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10407(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10407\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___io_out_c_T_15))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10408(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10408\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___GEN_1 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14_io_in_control_0_propagate_b)
                        ? (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_4)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_4)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_4))
                        : (VL_LTS_III(1,32,32, 0x7ffffU, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_15)
                            ? 0x7ffffU : (VL_GTS_III(1,32,32, 0xfff80000U, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_15)
                                           ? 0xfff80000U
                                           : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___io_out_c_T_15))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_457_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_456_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_467_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_466_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_478_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_477_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_490_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_489_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_503_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_502_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_517_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_516_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_0__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_160_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_10_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_264_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_9_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_8_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_8_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_8_0));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10409(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10409\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_0__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_0__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_0_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_0_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_0__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_269_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_269_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_269_0));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_268_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_268_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_268_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_268_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_268_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_268_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_0__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_519_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_518_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_8_0 
            = (0xffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                         ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_705[2U]
                         : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_604[2U]
                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_455[2U])));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10410(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10410\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_28_0 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                     ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_16[3U] 
                         << 0x18U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_16[2U] 
                                      >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_9_0)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_37_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_36_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_47_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_46_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_58_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_57_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_70_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_69_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_83_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_82_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_97_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_96_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_553_0 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter) 
            == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_total_rows) 
                         - (IData)(1U)))) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__input_next_row_into_spatial_array));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_562_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_561_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_572_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_571_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_583_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_582_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_595_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_594_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_608_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_607_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_622_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_621_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_775_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_774_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_10_0_shift_r_1 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_10_0_shift_r;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_11_0_shift_r_2 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_11_0_shift_r_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_12_0_shift_r_3 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_12_0_shift_r_2;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_13_0_shift_r_4 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_13_0_shift_r_3;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_14_0_shift_r_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_14_0_shift_r_4;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_shift_r_6 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_shift_r_5;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_15_9__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_bits_9)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_15_10__DOT__reg_));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10411(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10411\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_9_15__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_15__DOT__reg_)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_bits_9));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_14_10__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_15_10__DOT__reg_)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_14_11__DOT__reg_));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_14__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_14__DOT__reg_)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_15__DOT__reg_));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_13_11__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_14_11__DOT__reg_)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_13_12__DOT__reg_));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_13__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_12_13__DOT__reg_)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_14__DOT__reg_));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_inRow_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_12_12__DOT__reg_ 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_13_12__DOT__reg_)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_12_13__DOT__reg_));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10412(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10412\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_1__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_2__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_3__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10413(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10413\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_4__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_5__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10414(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10414\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_8__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_9__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10415(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10415\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_10__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_11__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_12__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10416(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10416\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_13__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_14__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                    >> 0x1eU)))) & 
              (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                          >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__rawIn___05FisNaN)) 
                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                            >> 0x20U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_15__DOT__shiftedSig))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10417(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10417\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_79_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10418(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10418\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_79_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_500_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_499_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_499_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_499_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_499_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_500_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_1__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_145_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_25_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_279_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_24_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_23_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_23_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_23_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10419(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10419\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_193_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_193_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_284_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_283_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_283_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_283_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_283_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_284_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_2__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_130_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_40_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_39_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_38_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_38_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_38_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_2__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_2__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_2_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_2_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_2__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_300_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_300_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_300_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_299_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_299_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_299_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_299_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_299_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_299_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_3__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_115_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_55_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_54_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_53_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_53_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_53_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_179_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_179_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_315_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_314_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_314_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_314_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_314_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_315_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_100_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_70_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_324_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_69_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_68_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_68_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_68_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_331_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_331_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_331_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10424(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10424\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_330_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_330_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_330_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_330_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_330_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_330_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_85_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_85_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_339_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_84_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_83_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_83_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_83_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10425(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10425\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_165_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10426(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10426\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_165_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_346_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_345_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_345_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_345_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_345_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_346_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_70_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_100_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_354_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_99_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_98_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_98_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_98_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_362_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_362_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_362_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10427(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10427\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_361_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_361_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_361_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_361_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_361_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_55_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_115_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_369_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_114_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_113_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_113_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_113_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10428(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10428\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_151_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10429(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10429\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_151_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_377_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_376_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_376_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_376_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_376_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_377_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_40_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_130_0)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_384_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_129_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8_io_in_control_0_propagate_b)
                                ? (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8__DOT__tile_0_0__DOT___io_out_b_T_2) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8__DOT__tile_0_0__DOT___io_out_b_T_2)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8_io_in_b_0)
                                : (((0xf0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8__DOT__tile_0_0__DOT___io_out_b_T_8) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8__DOT__tile_0_0__DOT___io_out_b_T_8)) 
                                   + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8_io_in_b_0))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8_io_in_b_0));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_393_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_393_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_393_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10430(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10430\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_392_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_392_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_392_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_392_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_392_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_25_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_145_0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9__DOT__tile_0_0__DOT___c2_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_9_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9_io_in_b_0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10431(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10431\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___c1_T_8 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___io_out_b_T_8 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_137_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___c2_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___GEN_23 
           + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10432(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10432\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_137_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__c2)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_408_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_407_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_407_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_407_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_407_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_408_0 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_dataflow_b)
                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_propagate_b)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__c1
                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__c2)
                            : ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT___GEN_1 
                                                              >> 0x13U)))) 
                                               << 0x14U)) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10_io_in_control_0_propagate_b))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10_io_in_control_0_shift_b)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT___c1_T_2 
        = ((0xfc000000U & ((- (IData)((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_424_0 
                                             >> 0x13U)))) 
                           << 0x1aU)) | ((0x3f00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_424_0 
                                                            >> 0x13U)))) 
                                             << 0x14U)) 
                                         | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_424_0));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_423_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_423_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_423_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___c1_T_2
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___c1_T_8);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_423_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2 
                        = ((0xfff00000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_423_0 
                                                          >> 0x13U)))) 
                                           << 0x14U)) 
                           | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_423_0);
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___c2_T_5
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___c1_T_2);
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__10433(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__10433\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}
