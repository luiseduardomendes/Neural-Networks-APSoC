// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8808(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8808\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_419_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_419_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_419_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_151_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_150_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_435_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_151_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_150_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_435_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_435_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_real));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8809(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8809\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_161_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_160_0_imag;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_450_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_450_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_161_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_160_0_real;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_450_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_450_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_172_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_171_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT___c2_T_16));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8810(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8810\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_466_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_172_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_171_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_466_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_466_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_184_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_183_0_imag;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_481_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_481_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8811(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8811\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_92_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_91_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_92_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_91_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_79_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_78_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_79_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_78_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_67_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_66_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_67_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_66_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_56_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_55_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_56_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_55_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_46_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_45_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_46_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_45_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_37_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_36_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_37_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_36_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_29_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_28_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_29_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_28_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_22_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_21_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_22_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_21_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_16_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_15_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_16_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_15_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_11_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_10_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_11_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_10_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_7_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_6_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_7_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_6_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_4_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_3_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_4_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_3_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_2_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_1_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_2_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_1_0_imag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8812(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8812\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_2_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_2_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_16_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_16_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_184_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_183_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_imag;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_481_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_481_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8813(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8813\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_0__DOT__tile_0_0__DOT___c2_T_11 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_32_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_0__DOT__tile_0_0__DOT___c2_T_2 
                                                >> 0x10U)))) 
           - VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_32_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_0__DOT__tile_0_0__DOT___c2_T_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_0__DOT__tile_0_0__DOT___c2_T_16 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_32_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_0__DOT__tile_0_0__DOT___c2_T_2))) 
           + VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_32_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_0__DOT__tile_0_0__DOT___c2_T_2 
                                                  >> 0x10U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT___c2_T_11 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_17_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT___c2_T_2 
                                                >> 0x10U)))) 
           - VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_17_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT___c2_T_2))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8814(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8814\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT___c2_T_16 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_17_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT___c2_T_2))) 
           + VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_17_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT___c2_T_2 
                                                  >> 0x10U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT___c2_T_11 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_2_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT___c2_T_2 
                                                >> 0x10U)))) 
           - VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_2_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT___c2_T_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT___c2_T_16 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_2_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT___c2_T_2))) 
           + VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_2_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT___c2_T_2 
                                                  >> 0x10U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8821(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8821\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___GEN_122 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__input_next_row_into_spatial_array)
                     ? ((0U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_total_rows) 
                                         - (IData)(1U))))
                         ? 0U : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter) 
                                  >= (0x1fU & ((IData)(1U) 
                                               + (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_total_rows) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)))))
                                  ? (((IData)(1U) - 
                                      (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_total_rows) 
                                        - (IData)(1U)) 
                                       - (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter))) 
                                     - (IData)(1U))
                                  : (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter)))))
                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8822(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8822\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__last_fire 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__fire_counter) 
            == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_bits_total_rows) 
                         - (IData)(1U)))) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__input_next_row_into_spatial_array));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_264_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_imag));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__pause)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_0_imag 
            = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0U]
                           : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_0_0_imag)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_264_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_264_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_1_0_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_1_0_imag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8823(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8823\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__pause)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_0_real 
            = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0U] 
                                            >> 0x10U))
                           : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_0_0_real)));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_15_2_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_314_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_15_2_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_314_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_14 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_13;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_15_3_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_419_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_14 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_13;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_1_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0_imag)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_279_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_279_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_16_0_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_16_0_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_1_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_279_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8824(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8824\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_279_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_105_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_2_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_295_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_105_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_2_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_295_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8825(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8825\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_295_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_106_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_3_0_imag)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_310_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_310_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_106_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_3_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_310_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_310_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8826(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8826\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_108_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_4_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_326_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_108_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_4_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_326_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_326_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_111_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_5_0_imag)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8827(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8827\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_341_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_341_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_111_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_5_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_341_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_341_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_115_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_6_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_16));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8828(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8828\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_357_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_115_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_6_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_357_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_357_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_120_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_7_0_imag)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_372_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8829(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8829\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_372_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_120_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_7_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_372_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_372_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_126_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_8_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_388_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_imag));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8830(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8830\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_126_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_8_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_388_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_388_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_133_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_9_0_imag)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_403_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_403_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8831(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8831\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_133_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_9_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_403_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_403_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_141_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_10_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_419_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_141_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_10_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c1_imag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8832(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8832\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_419_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_419_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_150_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_11_0_imag)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_150_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_11_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8833(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8833\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_160_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_160_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_450_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8834(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8834\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_450_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_171_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0_imag)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_imag));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_171_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0_real)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8835(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8835\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_183_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_14_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_91_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xfU] 
                          >> 0x10U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_15_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_91_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xfU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_15_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_78_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xfU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_14_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_78_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_14_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_66_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_13_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_66_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_13_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_55_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_12_0_real)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8836(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8836\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_55_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_12_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_45_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_11_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_45_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_11_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_36_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_10_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_36_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_10_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_28_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_9_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_28_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_9_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_21_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_8_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_21_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_8_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_15_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_7_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_15_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_7_0_imag)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8837(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8837\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_10_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_6_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_10_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_6_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_6_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_5_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_6_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_5_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_3_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_4_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_3_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_4_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_1_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_3_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_1_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_3_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_2_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_2_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_1_0_real)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8838(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8838\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_1_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_183_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xfU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_14_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0U] 
                                        >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_0_0_real)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_is_from_transposer)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0U]
                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_0_0_imag)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_481_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_481_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_req_ready 
        = ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__req_valid)) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__last_fire)) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__tagq__DOT__len))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__total_rows_q__DOT__full)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8839(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8839\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_11 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_16_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_2 
                                                >> 0x10U)))) 
           - VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_16_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_16 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_16_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_2))) 
           + VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_16_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_0__DOT__tile_0_0__DOT___c2_T_2 
                                                  >> 0x10U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8840(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8840\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_11 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_2 
                                                >> 0x10U)))) 
           - VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_16 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_2))) 
           + VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_1_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT___c2_T_2 
                                                  >> 0x10U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8847(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8847\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_0__DOT__reg_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_0__DOT__reg_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_3_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_3_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_4_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_4_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_5_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_5_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_6_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_6_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_7_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_7_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_8_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_8_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[9U] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_9_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_9_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xaU] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_10_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_10_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xbU] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_11_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_11_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xcU] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_12_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_12_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xdU] 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_13_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_13_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xeU] 
        = (IData)((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_15_real) 
                                      << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_15_imag)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_14_real) 
                                                  << 0x10U) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_14_imag))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_shifter_in_T_32[0xfU] 
        = (IData)(((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_15_real) 
                                       << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_15_imag)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_14_real) 
                                                   << 0x10U) 
                                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer_io_outCol_bits_14_imag))))) 
                   >> 0x20U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8848(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8848\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_a_ready 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_written)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__input_next_row_into_spatial_array)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_req_ready)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_d_ready 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__d_written)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__input_next_row_into_spatial_array)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_req_ready)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_b_ready 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_written)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__input_next_row_into_spatial_array)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_io_req_ready)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_0_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0U])));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8849(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8849\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_0_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_0_imag));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_0_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[1U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[1U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[1U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0U] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_314_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_313_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_314_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_313_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_13 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_12;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_419_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_418_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_13 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_12;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[1U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[1U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[1U])));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8850(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8850\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[2U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[1U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[2U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[1U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[2U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[1U] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_279_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_279_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_real));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8851(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8851\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_2_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[2U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[2U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[2U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_2_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[3U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[2U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[3U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[2U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[3U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[2U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8852(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8852\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_3_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[3U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[3U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[3U])));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_3_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[4U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[3U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[4U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[3U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[4U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[3U] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT___c2_T_11));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8853(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8853\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_310_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_310_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_4_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[4U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[4U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[4U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8854(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8854\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_4_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[5U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[4U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[5U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[4U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[5U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[4U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_5_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[5U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[5U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[5U])));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___c2_T_16));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8855(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8855\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_5_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[6U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[5U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[6U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[5U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[6U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[5U] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_341_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_341_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_6_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[6U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[6U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[6U])));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8856(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8856\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_6_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[7U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[6U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[7U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[6U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[7U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[6U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8857(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8857\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_7_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[7U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[7U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[7U])));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_7_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[8U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[7U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[8U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[7U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[8U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[7U] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__c2_imag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8858(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8858\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_372_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_372_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_8_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[8U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[8U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[8U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_8_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[9U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[8U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[9U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[8U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[9U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[8U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8859(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8859\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_9_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[9U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[9U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[9U])));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_9_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xaU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[9U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xaU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[9U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xaU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[9U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8860(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8860\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_403_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_403_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_10_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xaU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xaU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xaU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8861(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8861\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_10_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xbU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xaU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xbU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xaU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xbU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xaU] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_11_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xbU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xbU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xbU])));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT___c2_T_16));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8862(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8862\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_11_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xcU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xbU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xcU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xbU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xcU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xbU] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_434_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_434_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xcU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xcU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xcU])));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8863(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8863\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xdU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xcU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xdU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xcU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xdU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xcU] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8864(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8864\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xdU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xdU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xdU])));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_imag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xeU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xdU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xeU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xdU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xeU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xdU] 
                                                >> 0x10U)))));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__c2_imag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8865(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8865\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_465_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_465_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_14_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xeU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xeU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xeU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_15_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xfU] 
                              >> 0x10U) : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                                            ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xfU] 
                                               >> 0x10U)
                                            : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xfU] 
                                               >> 0x10U))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8866(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8866\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_15_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xfU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xfU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xfU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_14_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xfU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xeU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xfU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xeU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xfU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xeU] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_14_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xeU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xeU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xeU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_13_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xeU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xdU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xeU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xdU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xeU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xdU] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8867(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8867\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_13_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xdU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xdU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xdU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_12_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xdU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xcU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xdU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xcU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xdU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xcU] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_12_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xcU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xcU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xcU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_11_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xcU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xbU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xcU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xbU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xcU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xbU] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8868(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8868\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_11_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xbU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xbU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xbU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_10_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xbU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xaU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xbU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xaU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xbU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xaU] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_10_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xaU]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xaU]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xaU])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_9_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0xaU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[9U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0xaU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[9U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0xaU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[9U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8869(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8869\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_9_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[9U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[9U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[9U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_8_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[9U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[8U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[9U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[8U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[9U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[8U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_8_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[8U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[8U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[8U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_7_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[8U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[7U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[8U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[7U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[8U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[7U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8870(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8870\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_7_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[7U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[7U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[7U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_6_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[7U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[6U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[7U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[6U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[7U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[6U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_6_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[6U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[6U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[6U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_5_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[6U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[5U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[6U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[5U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[6U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[5U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8871(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8871\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_5_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[5U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[5U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[5U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_4_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[5U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[4U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[5U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[4U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[5U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[4U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_4_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[4U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[4U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[4U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_3_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[4U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[3U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[4U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[3U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[4U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[3U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8872(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8872\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_3_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[3U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[3U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[3U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_2_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[3U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[2U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[3U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[2U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[3U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[2U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_2_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[2U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[2U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[2U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_1_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[2U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[1U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[2U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[1U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[2U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[1U] 
                                                >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8873(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8873\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_1_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[1U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[1U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[1U])));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___b_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__b_buf_14_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xfU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_1059[0xeU] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xfU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_862[0xeU] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xfU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_568[0xeU] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_0_0_real 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[1U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0U] 
                                            >> 0x10U))
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[1U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0U] 
                                                >> 0x10U))
                               : ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[1U] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0U] 
                                                >> 0x10U)))));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT___a_buf_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__a_buf_0_0_imag 
            = (0xffffU & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_mul_io_deq_bits_MPORT_data))
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_961[0U]
                           : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__empty)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__ram_perform_single_preload_io_deq_bits_MPORT_data))
                               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_764[0U]
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT___T_471[0U])));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8874(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8874\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_11 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_2 
                                                >> 0x10U)))) 
           - VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_16 
        = (VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_real)), 
                       VL_EXTENDS_II(32,16, (0xffffU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_2))) 
           + VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_0_imag)), 
                         VL_EXTENDS_II(32,16, (0xffffU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_0__DOT__tile_0_0__DOT___c2_T_2 
                                                  >> 0x10U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8880(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8880\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_imag));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8881(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8881\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_263_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_real));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_313_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_312_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_313_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_312_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_12 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_11;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_418_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_417_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_12 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_11;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8882(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8882\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_294_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8883(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8883\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_294_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_309_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_309_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_324_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c2_imag));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8884(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8884\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_325_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_324_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_324_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_324_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_324_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_325_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8885(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8885\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_340_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_340_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_355_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_356_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_355_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_355_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_355_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_355_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_356_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8886(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8886\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_371_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_371_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_386_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___c2_T_11));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8887(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8887\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_387_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_386_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_386_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_386_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_386_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_387_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_402_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_402_0_real));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8888(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8888\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_417_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_418_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_417_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_417_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_417_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_417_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_418_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8889(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8889\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_433_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_433_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_448_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_449_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_448_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_448_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_448_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12_io_in_control_0_propagate_b;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8890(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8890\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_448_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_449_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_464_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_464_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_3_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_imag 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_2_0_imag;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8891(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8891\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_480_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_3_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_3_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_480_0_real 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_2_0_real;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_3_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_14_0_dataflow_r_13;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_3_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_14_0_propagate_r_13;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8895(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8895\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_imag));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8896(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8896\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_262_0_real));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_312_0_imag 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_311_0_imag;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_312_0_real 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_311_0_real;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_11 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_dataflow_r_10;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_417_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_r_416_0;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_11 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh_io_in_control_15_0_propagate_r_10;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_result_2_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT___c2_T_16));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_result_1_imag 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_imag) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT___c2_T_16));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_277_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_imag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1__DOT__tile_0_0__DOT__c1_imag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1__DOT__tile_0_0__DOT__c2_imag));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_result_2_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT___c2_T_11));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT___io_out_b_T_25 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c1_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_result_1_real 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_real) 
                      + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT___c2_T_11));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8897(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8897\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT___io_out_b_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_real) 
            << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__c2_imag));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_278_0 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_277_0;
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_277_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_dataflow_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1_io_in_control_0_dataflow_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_277_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1_io_in_control_0_propagate_b 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1_io_in_control_0_propagate_b;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_277_0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_278_0_real 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1_io_in_control_0_propagate_b)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1__DOT__tile_0_0__DOT__c1_real)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1__DOT__tile_0_0__DOT__c2_real));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_result_2_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_imag 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_imag;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_imag 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_result_1_imag)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_imag));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
                if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c1_result_2_real));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_293_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_dataflow_b) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_real 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_real;
                }
            }
        } else {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_real 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2_io_in_control_0_propagate_b)
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__c2_result_1_real)
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_293_0_real));
        }
    }
}
