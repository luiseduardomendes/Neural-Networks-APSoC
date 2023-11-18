// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_settle__TOP__1216(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1216\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1218(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1218\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1220(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1220\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1224(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1224\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1226(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1226\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1228(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1228\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1232(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1232\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1234(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1234\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1236(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1236\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1240(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1240\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1242(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1242\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1246(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1246\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1248(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1248\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1252(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1252\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1254(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1254\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1259(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1259\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1264(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1264\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1269(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1269\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1272(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1272\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1274(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1274\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1276(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1276\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1285(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1285\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_T_4 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c1, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c1 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c1, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c1 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T))
                                          ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_T_15 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1 
           + ((0xfffffffcU & ((- (IData)((1U & ((((
                                                   (0U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset)) 
                                                   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c2, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                        - (IData)(1U))))) 
                                                  & ((0U 
                                                      != 
                                                      ((1U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c2 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U)))) 
                                                           - (IData)(1U))))) 
                                                     | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                                  ? 1U
                                                  : 0U) 
                                                >> 1U)))) 
                              << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset)) 
                                           & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c2, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                                - (IData)(1U))))) 
                                          & ((0U != 
                                              ((1U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset))
                                                ? 0U
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__c2 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U)))) 
                                                      - (IData)(1U))))) 
                                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___io_out_c_ones_digit_T_1))
                                          ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1288(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1288\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1511[3];
    // Body
    __Vtemp1511[1U] = (IData)((((QData)((IData)((((
                                                   (0xfU 
                                                    < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (0xffU 
                                                    & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[4U] 
                                                        << 8U) 
                                                       | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                          >> 0x18U)))
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0xeU 
                                                       < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                       ? 
                                                      (0xffU 
                                                       & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[4U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                             >> 0x10U)))
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0xdU 
                                                          < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (0xffU 
                                                          & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[4U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                >> 8U)))
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0xcU 
                                                           < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U])
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                ? 
                                                               (0xffU 
                                                                & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                    << 8U) 
                                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                                      >> 0x18U)))
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((0xaU 
                                                                   < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                   ? 
                                                                  (0xffU 
                                                                   & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                                         >> 0x10U)))
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((9U 
                                                                      < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                      ? 
                                                                     (0xffU 
                                                                      & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                          << 0x18U) 
                                                                         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                                            >> 8U)))
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((8U 
                                                                       < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                       ? 
                                                                      (0xffU 
                                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U])
                                                                       : 0U))))))));
    __Vtemp1511[2U] = (IData)(((((QData)((IData)(((
                                                   ((0xfU 
                                                     < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                     ? 
                                                    (0xffU 
                                                     & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[4U] 
                                                         << 8U) 
                                                        | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                           >> 0x18U)))
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((0xeU 
                                                        < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (0xffU 
                                                        & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[4U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                              >> 0x10U)))
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((0xdU 
                                                           < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (0xffU 
                                                           & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[4U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                 >> 8U)))
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0xcU 
                                                            < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (0xffU 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U])
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                 ? 
                                                                (0xffU 
                                                                 & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                     << 8U) 
                                                                    | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                                       >> 0x18U)))
                                                                 : 0U) 
                                                               << 0x18U) 
                                                              | ((((0xaU 
                                                                    < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                    ? 
                                                                   (0xffU 
                                                                    & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                                          >> 0x10U)))
                                                                    : 0U) 
                                                                  << 0x10U) 
                                                                 | ((((9U 
                                                                       < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                       ? 
                                                                      (0xffU 
                                                                       & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[3U] 
                                                                           << 0x18U) 
                                                                          | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                                             >> 8U)))
                                                                       : 0U) 
                                                                     << 8U) 
                                                                    | ((8U 
                                                                        < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                                        ? 
                                                                       (0xffU 
                                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U])
                                                                        : 0U))))))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_455[0U] 
        = ((((3U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
              ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U] 
                           << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[0U] 
                                     >> 0x18U))) : 0U) 
            << 0x18U) | ((((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                            ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U] 
                                         << 0x10U) 
                                        | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[0U] 
                                           >> 0x10U)))
                            : 0U) << 0x10U) | ((((1U 
                                                  < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                  ? 
                                                 (0xffU 
                                                  & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[0U] 
                                                        >> 8U)))
                                                  : 0U) 
                                                << 8U) 
                                               | ((0U 
                                                   < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (0xffU 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[0U])
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_455[1U] 
        = ((((7U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
              ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                           << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U] 
                                     >> 0x18U))) : 0U) 
            << 0x18U) | ((((6U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                            ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                         << 0x10U) 
                                        | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U] 
                                           >> 0x10U)))
                            : 0U) << 0x10U) | ((((5U 
                                                  < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                  ? 
                                                 (0xffU 
                                                  & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[2U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U] 
                                                        >> 8U)))
                                                  : 0U) 
                                                << 8U) 
                                               | ((4U 
                                                   < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_a_unpadded_cols_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (0xffU 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataA_unpadded[1U])
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_455[2U] 
        = __Vtemp1511[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_455[3U] 
        = __Vtemp1511[2U];
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1289(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1289\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1513[3];
    // Body
    __Vtemp1513[1U] = (IData)((((QData)((IData)((((
                                                   (0xfU 
                                                    < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (0xffU 
                                                    & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[4U] 
                                                        << 8U) 
                                                       | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                          >> 0x18U)))
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0xeU 
                                                       < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                       ? 
                                                      (0xffU 
                                                       & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[4U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                             >> 0x10U)))
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0xdU 
                                                          < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (0xffU 
                                                          & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[4U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                >> 8U)))
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0xcU 
                                                           < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U])
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                ? 
                                                               (0xffU 
                                                                & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                    << 8U) 
                                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                                      >> 0x18U)))
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((0xaU 
                                                                   < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                   ? 
                                                                  (0xffU 
                                                                   & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                                         >> 0x10U)))
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((9U 
                                                                      < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                      ? 
                                                                     (0xffU 
                                                                      & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                          << 0x18U) 
                                                                         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                                            >> 8U)))
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((8U 
                                                                       < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                       ? 
                                                                      (0xffU 
                                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U])
                                                                       : 0U))))))));
    __Vtemp1513[2U] = (IData)(((((QData)((IData)(((
                                                   ((0xfU 
                                                     < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                     ? 
                                                    (0xffU 
                                                     & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[4U] 
                                                         << 8U) 
                                                        | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                           >> 0x18U)))
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((0xeU 
                                                        < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (0xffU 
                                                        & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[4U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                              >> 0x10U)))
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((0xdU 
                                                           < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (0xffU 
                                                           & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[4U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                 >> 8U)))
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0xcU 
                                                            < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (0xffU 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U])
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                 ? 
                                                                (0xffU 
                                                                 & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                     << 8U) 
                                                                    | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                                       >> 0x18U)))
                                                                 : 0U) 
                                                               << 0x18U) 
                                                              | ((((0xaU 
                                                                    < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                    ? 
                                                                   (0xffU 
                                                                    & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                                          >> 0x10U)))
                                                                    : 0U) 
                                                                  << 0x10U) 
                                                                 | ((((9U 
                                                                       < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                       ? 
                                                                      (0xffU 
                                                                       & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[3U] 
                                                                           << 0x18U) 
                                                                          | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                                             >> 8U)))
                                                                       : 0U) 
                                                                     << 8U) 
                                                                    | ((8U 
                                                                        < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                                        ? 
                                                                       (0xffU 
                                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U])
                                                                        : 0U))))))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_504[0U] 
        = ((((3U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
              ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U] 
                           << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[0U] 
                                     >> 0x18U))) : 0U) 
            << 0x18U) | ((((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                            ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U] 
                                         << 0x10U) 
                                        | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[0U] 
                                           >> 0x10U)))
                            : 0U) << 0x10U) | ((((1U 
                                                  < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                  ? 
                                                 (0xffU 
                                                  & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[0U] 
                                                        >> 8U)))
                                                  : 0U) 
                                                << 8U) 
                                               | ((0U 
                                                   < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (0xffU 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[0U])
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_504[1U] 
        = ((((7U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
              ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                           << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U] 
                                     >> 0x18U))) : 0U) 
            << 0x18U) | ((((6U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                            ? (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                         << 0x10U) 
                                        | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U] 
                                           >> 0x10U)))
                            : 0U) << 0x10U) | ((((5U 
                                                  < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                  ? 
                                                 (0xffU 
                                                  & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[2U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U] 
                                                        >> 8U)))
                                                  : 0U) 
                                                << 8U) 
                                               | ((4U 
                                                   < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_b_unpadded_cols_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (0xffU 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__dataB_unpadded[1U])
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_504[2U] 
        = __Vtemp1513[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_504[3U] 
        = __Vtemp1513[2U];
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1305(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1305\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_80 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                          >> 0x11U))) ? 0x2eU : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                             >> 0x10U)))
                                                  ? 0x2fU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                              >> 0xfU)))
                                                   ? 0x30U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                               >> 0xeU)))
                                                    ? 0x31U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                >> 0xdU)))
                                                     ? 0x32U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                 >> 0xcU)))
                                                      ? 0x33U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                  >> 0xbU)))
                                                       ? 0x34U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                   >> 0xaU)))
                                                        ? 0x35U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                    >> 9U)))
                                                         ? 0x36U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                     >> 8U)))
                                                          ? 0x37U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                      >> 7U)))
                                                           ? 0x38U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                       >> 6U)))
                                                            ? 0x39U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                        >> 5U)))
                                                             ? 0x3aU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                         >> 4U)))
                                                              ? 0x3bU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                          >> 3U)))
                                                               ? 0x3cU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                           >> 2U)))
                                                                ? 0x3dU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                                                            >> 1U)))
                                                                 ? 0x3eU
                                                                 : 0x3fU)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1307(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1307\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___any_T_108 
        = (1U & ((((((((((((((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0) 
                                               | (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                          >> 0xfU))) 
                                              | (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                         >> 0xeU))) 
                                             | (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                        >> 0xdU))) 
                                            | (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                       >> 0xcU))) 
                                           | (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                      >> 0xbU))) 
                                          | (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                     >> 3U))) 
                                         | (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                    >> 7U))) 
                                        | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                   >> 9U))) 
                                       | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                  >> 1U))) 
                                      | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                 >> 5U))) 
                                     | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                >> 0xaU))) 
                                    | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                               >> 2U))) 
                                   | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                              >> 6U))) 
                                  | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                             >> 8U))) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts)) 
                                | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                           >> 4U))) 
                               | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                          >> 0xfU))) 
                              | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                         >> 0xeU))) 
                             | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                        >> 0xdU))) 
                            | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                       >> 0xcU))) | (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                             >> 0xbU))) 
                          | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                     >> 3U))) | (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                         >> 7U))) 
                        | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                   >> 9U))) | (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                       >> 1U))) 
                      | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                 >> 5U))) | (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                     >> 0xaU))) 
                    | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                               >> 2U))) | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                   >> 6U))) 
                  | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                             >> 8U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1311(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1311\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_lo_hi 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                            >> ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                       >> 0x1eU)) | 
                                (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                       >> 0x1fU)))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                              >> ((2U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                      >> 0x1dU)) 
                                                  | (1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                        >> 0x1eU)))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                 >> 
                                                 ((2U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                        >> 0x1dU)))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                    >> 
                                                    ((2U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                         >> 0x1bU)) 
                                                     | (1U 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                           >> 0x1cU)))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                       >> 
                                                       ((2U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                            >> 0x1aU)) 
                                                        | (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                              >> 0x1bU)))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                          >> 
                                                          ((2U 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                               >> 0x19U)) 
                                                           | (1U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                                 >> 0x1aU)))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                             >> 
                                                             ((2U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                                  >> 0x18U)) 
                                                              | (1U 
                                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                                    >> 0x19U)))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                                >> 
                                                                ((2U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                                     >> 0x17U)) 
                                                                 | (1U 
                                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                                       >> 0x18U)))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_lo_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_lo_hi_lo))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1312(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1312\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_hi_lo 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                            >> ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                       >> 0x1eU)) | 
                                (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                       >> 0x1fU)))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                              >> ((2U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                      >> 0x1dU)) 
                                                  | (1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                        >> 0x1eU)))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                 >> 
                                                 ((2U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                        >> 0x1dU)))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                    >> 
                                                    ((2U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                         >> 0x1bU)) 
                                                     | (1U 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                           >> 0x1cU)))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                       >> 
                                                       ((2U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                            >> 0x1aU)) 
                                                        | (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                              >> 0x1bU)))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                          >> 
                                                          ((2U 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                               >> 0x19U)) 
                                                           | (1U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                                 >> 0x1aU)))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                             >> 
                                                             ((2U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                                  >> 0x18U)) 
                                                              | (1U 
                                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                                    >> 0x19U)))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                                >> 
                                                                ((2U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                                     >> 0x17U)) 
                                                                 | (1U 
                                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                                       >> 0x18U)))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_hi_lo_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_hi_lo_lo))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1313(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1313\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_hi_hi 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                            >> ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                       >> 0x1eU)) | 
                                (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                       >> 0x1fU)))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                              >> ((2U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                      >> 0x1dU)) 
                                                  | (1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                        >> 0x1eU)))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                 >> 
                                                 ((2U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                        >> 0x1dU)))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                    >> 
                                                    ((2U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                         >> 0x1bU)) 
                                                     | (1U 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                           >> 0x1cU)))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                       >> 
                                                       ((2U 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                            >> 0x1aU)) 
                                                        | (1U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                              >> 0x1bU)))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                          >> 
                                                          ((2U 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                               >> 0x19U)) 
                                                           | (1U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                                 >> 0x1aU)))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                             >> 
                                                             ((2U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                                  >> 0x18U)) 
                                                              | (1U 
                                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                                    >> 0x19U)))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                                >> 
                                                                ((2U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                                     >> 0x17U)) 
                                                                 | (1U 
                                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                                       >> 0x18U)))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_hi_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__logical_hi_hi_lo))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1315(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1315\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1563[3];
    WData/*95:0*/ __Vtemp1564[3];
    WData/*95:0*/ __Vtemp1567[3];
    WData/*95:0*/ __Vtemp1568[3];
    WData/*95:0*/ __Vtemp1571[3];
    WData/*95:0*/ __Vtemp1572[3];
    WData/*95:0*/ __Vtemp1575[3];
    WData/*95:0*/ __Vtemp1576[3];
    WData/*95:0*/ __Vtemp1579[3];
    WData/*95:0*/ __Vtemp1580[3];
    WData/*95:0*/ __Vtemp1583[3];
    WData/*95:0*/ __Vtemp1584[3];
    WData/*95:0*/ __Vtemp1587[3];
    WData/*95:0*/ __Vtemp1588[3];
    WData/*95:0*/ __Vtemp1591[3];
    WData/*95:0*/ __Vtemp1592[3];
    WData/*95:0*/ __Vtemp1595[3];
    WData/*95:0*/ __Vtemp1596[3];
    // Body
    __Vtemp1563[0U] = 0U;
    __Vtemp1563[1U] = 0U;
    __Vtemp1563[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1564, __Vtemp1563, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1567[0U] = 0U;
    __Vtemp1567[1U] = 0U;
    __Vtemp1567[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1568, __Vtemp1567, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1571[0U] = 0U;
    __Vtemp1571[1U] = 0U;
    __Vtemp1571[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1572, __Vtemp1571, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1575[0U] = 0U;
    __Vtemp1575[1U] = 0U;
    __Vtemp1575[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1576, __Vtemp1575, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1579[0U] = 0U;
    __Vtemp1579[1U] = 0U;
    __Vtemp1579[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1580, __Vtemp1579, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1583[0U] = 0U;
    __Vtemp1583[1U] = 0U;
    __Vtemp1583[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1584, __Vtemp1583, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1587[0U] = 0U;
    __Vtemp1587[1U] = 0U;
    __Vtemp1587[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1588, __Vtemp1587, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1591[0U] = 0U;
    __Vtemp1591[1U] = 0U;
    __Vtemp1591[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1592, __Vtemp1591, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp1595[0U] = 0U;
    __Vtemp1595[1U] = 0U;
    __Vtemp1595[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1596, __Vtemp1595, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72 
        = ((0x80U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
            ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                ? 0U : ((4U & (__Vtemp1564[0U] << 2U)) 
                        | ((2U & __Vtemp1568[0U]) | 
                           (1U & (__Vtemp1572[0U] >> 2U)))))
            : (7U | (0x1fffff8U & ((~ ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                        ? (~ (((0x155540U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                               | (0x2aaa80U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                     << 7U))) 
                                              | ((0x20U 
                                                  & (__Vtemp1576[1U] 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (__Vtemp1580[1U] 
                                                        >> 0x17U)) 
                                                    | ((8U 
                                                        & (__Vtemp1584[1U] 
                                                           >> 0x19U)) 
                                                       | ((4U 
                                                           & (__Vtemp1588[1U] 
                                                              >> 0x1bU)) 
                                                          | ((2U 
                                                              & (__Vtemp1592[1U] 
                                                                 >> 0x1dU)) 
                                                             | (1U 
                                                                & (__Vtemp1596[1U] 
                                                                   >> 0x1fU)))))))))
                                        : 0U)) << 3U))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1328(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1328\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_0_is_full 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_0) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_1)) 
                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_2)) 
                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_3)) 
                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_4)) 
                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_5)) 
                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_6)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_7)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_8)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_9)) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_10)) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_11)) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_12)) 
             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_13)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_14)) 
           & (0xfU < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT___write_packets_mask_T_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_1_is_full 
        = ((((((((((((((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_0_1) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_1_1)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_2_1)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_3_1)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_4_1)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_5_1)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_6_1)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_7_1)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_8_1)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_9_1)) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_10_1)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_11_1)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_12_1)) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_13_1)) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_14_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_15_1)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_16_1)) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_17_1)) 
                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_18_1)) 
                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_19_1)) 
                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_20_1)) 
                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_21_1)) 
                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_22_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_23_1)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_24_1)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_25_1)) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_26_1)) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_27_1)) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_28_1)) 
             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_29_1)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_mask_30_1)) 
           & (0x1fU < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT___write_packets_mask_T_257)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1334(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1334\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___mshr_request_T_183 
        = (((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_valid) 
                  & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_set) 
                            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_set) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_a_valid)))) 
                & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_b_valid)))) 
               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_c_valid)))) 
              & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_d_valid)))) 
             & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_e_valid)))) 
            & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_x_valid)))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_dir_valid))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___mshr_request_T_206 
        = (((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_valid) 
                  & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_set) 
                            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_set) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_a_valid)))) 
                & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_b_valid)))) 
               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_c_valid)))) 
              & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_d_valid)))) 
             & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_e_valid)))) 
            & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_x_valid)))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_dir_valid))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1335(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1335\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___mshr_request_T_229 
        = (((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_valid) 
                  & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_set) 
                            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_set) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_a_valid)))) 
                & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_b_valid)))) 
               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_c_valid)))) 
              & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_d_valid)))) 
             & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_e_valid)))) 
            & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_x_valid)))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_dir_valid))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_request_lo 
        = (((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_valid) 
                    & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_set) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_set) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                   & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_a_valid)))) 
                  & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_b_valid)))) 
                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_c_valid)))) 
                & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_d_valid)))) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_e_valid)))) 
              & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_x_valid)))) 
             & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_dir_valid)))) 
            << 5U) | (((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_valid) 
                               & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_set) 
                                         == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_set) 
                                           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                              & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_a_valid)))) 
                             & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_b_valid)))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_c_valid)))) 
                           & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_d_valid)))) 
                          & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_e_valid)))) 
                         & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_x_valid)))) 
                        & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
                           | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_dir_valid)))) 
                       << 4U) | (((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_valid) 
                                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_set) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_set) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                                            | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_a_valid)))) 
                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                                           | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_b_valid)))) 
                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_c_valid)))) 
                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                                         | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_d_valid)))) 
                                     & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                                        | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_e_valid)))) 
                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_x_valid)))) 
                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_dir_valid)))) 
                                  << 3U) | ((((((((
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_valid) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_set) 
                                                             == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_set) 
                                                               == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_a_valid)))) 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_b_valid)))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_c_valid)))) 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                                                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_d_valid)))) 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_e_valid)))) 
                                               & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_x_valid)))) 
                                              & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
                                                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_dir_valid)))) 
                                             << 2U) 
                                            | (((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_valid) 
                                                        & (~ 
                                                           (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_set) 
                                                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_set) 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_a_valid)))) 
                                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                                                         | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_b_valid)))) 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                                                        | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_c_valid)))) 
                                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_d_valid)))) 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_e_valid)))) 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_x_valid)))) 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
                                                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_dir_valid)))) 
                                                << 1U) 
                                               | (((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_valid) 
                                                         & (~ 
                                                            (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_set) 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set))) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid) 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_set) 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)))))) 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)) 
                                                           | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_a_valid)))) 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__remain)) 
                                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_b_valid)))) 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
                                                         | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_c_valid)))) 
                                                     & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                                                        | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_d_valid)))) 
                                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__full)) 
                                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_e_valid)))) 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_x_valid)))) 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__maybe_full)) 
                                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_dir_valid)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1345(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1345\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                  >> 0x15U)))) ? (0x7fffffffU 
                                                  & ((IData)(0xffU) 
                                                     << 
                                                     (8U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 7U))))
                  : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1346(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1346\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source 
        = ((0xf0U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                          >> 0xaU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle)
                                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r))) 
                                                   << 3U)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
        = (0x1fffffffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                            ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address
                            : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                             >> 0xaU))) 
                          | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1) 
                                                 << 3U) 
                                                | (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                               | (7U 
                                                  & (~ 
                                                     (0x3ffU 
                                                      & ((IData)(7U) 
                                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
        = (0x3ffffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address
                         : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                          >> 0xaU))) 
                       | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1) 
                                              << 3U) 
                                             | (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)))) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source 
        = ((0xf0U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source)
                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                          >> 0xaU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle)
                                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r))) 
                                                   << 3U)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1350(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1350\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___state_reg_T_64 
        = (0x7fU & ((8U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                     ? ((0x40U & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                      >> 2U)) << 6U)) 
                        | ((0x38U & (((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                       ? ((4U & ((~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((2U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 ? 
                                                (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 : 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 0xbU)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0xaU)
                                                    : 
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))
                                       : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 0xaU)) 
                                     << 3U)) | (7U 
                                                & ((4U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 7U)
                                                    : 
                                                   ((4U 
                                                     & ((~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                          >> 1U)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((2U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                             ? 
                                                            (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                             : 
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 8U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((2U 
                                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                              ? 
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                              >> 7U)
                                                              : 
                                                             (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))))))
                     : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                        >> 7U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1351(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1351\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___state_reg_T_89 
        = (0x7fU & ((8U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg
                     : ((0x40U & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                      >> 2U)) << 6U)) 
                        | ((0x38U & (((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                       ? ((4U & ((~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((2U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 ? 
                                                (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 : 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 4U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 3U)
                                                    : 
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))
                                       : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 3U)) << 3U)) 
                           | (7U & ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg
                                     : ((4U & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                   >> 1U)) 
                                               << 2U)) 
                                        | ((2U & ((
                                                   (2U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((2U 
                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg
                                                : (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1356(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1356\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                  >> 0x15U)))) ? ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                      >> 0xaU)))
                  : 0U)));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__1367(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1367\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__after 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_state))
            ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_clients)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_state))
                                   ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_clients)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__final_meta_writeback_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__after 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_state))
            ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_clients)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_state))
                                   ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_clients)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__final_meta_writeback_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__after 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_state))
            ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_clients)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_state))
                                   ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_clients)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__final_meta_writeback_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
}
