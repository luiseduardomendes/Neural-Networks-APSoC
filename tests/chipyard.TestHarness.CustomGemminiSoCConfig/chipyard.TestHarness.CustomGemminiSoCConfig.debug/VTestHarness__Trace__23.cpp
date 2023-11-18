// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceChgThis__2380(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+19943);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        vcdp->chgSData(oldp+1,((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        vcdp->chgIData(oldp+2,((0x7fffffU & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                              : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        vcdp->chgBit(oldp+3,(VL_LTES_III(1,4,4, 3U, 
                                         (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U)))));
        vcdp->chgBit(oldp+4,(VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        vcdp->chgBit(oldp+5,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                        >> 2U) : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U)))));
        vcdp->chgBit(oldp+6,((1U & (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                      >> 0x1aU) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 2U)) 
                                    | (0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig))))));
        vcdp->chgBit(oldp+7,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                        >> 0x19U) : 
                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                     >> 0x18U)))));
        vcdp->chgBit(oldp+8,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                   & VL_GTES_III(1,2,2, 0U, 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                     >> 8U)))) 
                                  & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                      ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                 & (~ ((((~ ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x19U)
                                             : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x18U))) 
                                        & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                       & ((0x4000000U 
                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                           ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 2U)
                                           : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 1U))))))));
    }
}

void VTestHarness::traceChgThis__2382(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+19952);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        vcdp->chgBit(oldp+2,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U))))));
        vcdp->chgSData(oldp+3,((((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                  ? 0x40U
                                                  : 0U)))) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U))),9);
        vcdp->chgIData(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                 ? 0x400000U : 0U)),23);
        vcdp->chgSData(oldp+5,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                     & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                >> 0x20U)))) 
                                 << 9U) | (((0x3fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                & (~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                     ? 0x40U
                                                     : 0U)))) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                ? 0x180U
                                                : 0U)) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                               ? 0x1c0U
                                               : 0U)))),10);
        vcdp->chgCData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1) 
                                << 2U)),3);
        vcdp->chgSData(oldp+7,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+8,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+9,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2384(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+19962);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn___05FisNaN));
        vcdp->chgBit(oldp+1,(((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU)))) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x1dU))))));
        vcdp->chgBit(oldp+2,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+4,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgBit(oldp+5,((1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                             >> 0x17U)) 
                                    >> 8U))));
        vcdp->chgCData(oldp+6,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                 >> 0x17U)))),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__magJustBelowOne));
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig),55);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__alignedSig),34);
        vcdp->chgIData(oldp+12,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__alignedSig 
                                         >> 2U))),32);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_inexact));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr_near_even));
        vcdp->chgBit(oldp+15,((1U & ((1U & (((IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x17U)) 
                                             >> 8U) 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__alignedSig 
                                                       >> 1U)))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__magJustBelowOne)))));
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__complUnroundedInt),32);
        vcdp->chgIData(oldp+17,(((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr_near_even) 
                                        ^ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x20U))))
                                  ? ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__complUnroundedInt)
                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__complUnroundedInt)),32);
    }
}

void VTestHarness::traceChgThis__2386(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+19980);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0x1fU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x17U))))));
        vcdp->chgBit(oldp+1,(((0x3fffffffU == (0x3fffffffU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__alignedSig 
                                                          >> 2U)))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr_near_even))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_overflow));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__invalidExc));
        vcdp->chgBit(oldp+4,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__invalidExc)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_overflow))));
        vcdp->chgBit(oldp+5,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__invalidExc)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_overflow))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_inexact))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__excSign));
        vcdp->chgIData(oldp+7,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__excSign)
                                  ? 0x80000000U : 0U) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__excSign)
                                    ? 0U : 0x7fffffffU))),32);
        vcdp->chgCData(oldp+8,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__invalidExc) 
                                 << 1U) | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__common_overflow)))),2);
        vcdp->chgBit(oldp+9,((1U & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU))))));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6_io_in 
                                     >> 0x1fU))));
        vcdp->chgCData(oldp+11,((0x40U | (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist))))),8);
        vcdp->chgQData(oldp+12,((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T))),33);
        vcdp->chgIData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_absIn),32);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist),5);
        vcdp->chgIData(oldp+16,((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T)),32);
        vcdp->chgSData(oldp+17,((0x1ffU & ((IData)(0xc0U) 
                                           + (0x3ffU 
                                              & VL_EXTENDS_II(10,9, 
                                                              (0x40U 
                                                               | (0x1fU 
                                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist))))))))),10);
    }
}

void VTestHarness::traceChgThis__2388(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+19998);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig),27);
        vcdp->chgBit(oldp+1,((0U != (2U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgBit(oldp+2,((0U != (1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        vcdp->chgSData(oldp+4,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & ((IData)(0xc0U) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_EXTENDS_II(10,9, 
                                                                             (0x40U 
                                                                              | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist))))))))) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (3U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                              >> 0x18U)))))),11);
        vcdp->chgSData(oldp+5,((0x1ffU & ((0x7ffU & 
                                           VL_EXTENDS_II(11,10, 
                                                         (0x1ffU 
                                                          & ((IData)(0xc0U) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_EXTENDS_II(10,9, 
                                                                              (0x40U 
                                                                               | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (3U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                 >> 0x18U))))))),9);
    }
}

void VTestHarness::traceChgThis__2390(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20004);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        vcdp->chgSData(oldp+1,((0x1ffU & (((0x7ffU 
                                            & VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                (0x3ffU 
                                                                 & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                           + (0x7ffU 
                                              & VL_EXTENDS_II(11,10, 
                                                              (3U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))))) 
                                          & (~ ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T 
                                                            >> 0x1fU)))
                                                 ? 0U
                                                 : 0x1c0U))))),9);
        vcdp->chgIData(oldp+2,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU)))
                                 ? (0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                 : 0U)),23);
        vcdp->chgSData(oldp+3,(((0x200U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6_io_in 
                                           >> 0x16U)) 
                                | (0x1ffU & (((0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & ((IData)(0xc0U) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                              + (0x7ffU 
                                                 & VL_EXTENDS_II(11,10, 
                                                                 (3U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 0x18U))))) 
                                             & (~ (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T 
                                                               >> 0x1fU)))
                                                    ? 0U
                                                    : 0x1c0U)))))),10);
    }
}

void VTestHarness::traceChgThis__2392(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20008);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0xffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig)),24);
        vcdp->chgIData(oldp+1,((0xffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig)),24);
        vcdp->chgQData(oldp+2,((VL_ULL(0xffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                    >> 1U))))),48);
        vcdp->chgBit(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                               & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig 
                                     >> 0x16U))) | 
                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                               & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig 
                                     >> 0x16U))))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        vcdp->chgBit(oldp+7,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        vcdp->chgBit(oldp+9,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6_io_b 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd));
        vcdp->chgSData(oldp+11,((0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                            - (IData)(0xe5U)) 
                                           - (IData)(0x18U)))),10);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags));
        vcdp->chgCData(oldp+13,((0x1fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        vcdp->chgIData(oldp+14,((0x3ffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                                << 0xfU) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                                  >> 0x11U)))),26);
        vcdp->chgBit(oldp+15,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])));
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult),49);
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_3));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        vcdp->chgBit(oldp+21,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                               | (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                  & ((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 0x19U))) 
                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                        ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                           >> 0x13U)))))));
    }
}

void VTestHarness::traceChgThis__2394(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20030);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig),27);
        vcdp->chgCData(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_3) 
                                  << 4U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U)) 
                                | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                     & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                        | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                             & VL_GTES_III(1,2,2, 0U, 
                                                           (3U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                               >> 8U)))) 
                                            & ((0x4000000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                           & (~ (((
                                                   (~ 
                                                    ((0x4000000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                      ? 
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      >> 2U)
                                                      : 
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      >> 1U))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                       ? 
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x19U)
                                                       : 
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x18U))) 
                                                  & (0U 
                                                     != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                     ? 
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                     >> 2U)
                                                     : 
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                     >> 1U))))))) 
                                    << 1U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+4,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2396(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20035);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25138[3];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        vcdp->chgBit(oldp+1,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+2,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig),25);
        vcdp->chgSData(oldp+4,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6_io_b 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+5,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6_io_b 
                                                   >> 0x1eU))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6_io_b 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+8,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6_io_b 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig),25);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        vcdp->chgSData(oldp+11,((0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                           - (IData)(0xe5U)))),11);
        vcdp->chgSData(oldp+12,((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                           - (IData)(0xe5U)))),10);
        vcdp->chgBit(oldp+13,((((0U == (7U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x1dU)))) 
                                | (0U == (7U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6_io_b 
                                                        >> 0x1dU))))) 
                               | VL_GTS_III(1,11,11, 0U, 
                                            (0x7ffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                                - (IData)(0xe5U)))))));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        vcdp->chgWData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        __Vtemp25138[0U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                          >> 3U));
        __Vtemp25138[1U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                          >> 3U));
        __Vtemp25138[2U] = (0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                      >> 3U));
        vcdp->chgWData(oldp+18,(__Vtemp25138),75);
        vcdp->chgWData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC),76);
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign));
        vcdp->chgWData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        vcdp->chgSData(oldp+28,((0x3ffU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                             - (IData)(0xe5U)) 
                                            - (IData)(0x18U)) 
                                           - ((0x3fcU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags) 
                                                                 >> 1U)))) 
                                                  << 2U)) 
                                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags))))),10);
    }
}

void VTestHarness::traceChgThis__2398(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20064);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                               ? (0U != (0xffffffU 
                                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                  >> 1U)))))
                               : (0U != (0x1ffffffU 
                                         & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                               >> 1U)))))));
        vcdp->chgIData(oldp+3,((0x1fffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                  >> 0x15U)))),29);
        vcdp->chgBit(oldp+4,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
        vcdp->chgBit(oldp+5,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 1U))))));
        vcdp->chgBit(oldp+6,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 5U))))));
        vcdp->chgBit(oldp+7,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 9U))))));
        vcdp->chgBit(oldp+8,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0xdU))))));
        vcdp->chgBit(oldp+9,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0x11U))))));
        vcdp->chgBit(oldp+10,((0U != (7U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 0x15U))))));
        vcdp->chgSData(oldp+11,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                         (7U 
                                                          & (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                              >> 2U)))))),9);
        vcdp->chgBit(oldp+12,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_21))));
        vcdp->chgIData(oldp+13,(((0x7fffffeU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                 << 9U) 
                                                | (0x1feU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                      >> 0x17U)))) 
                                 | (((0U != (7U & (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                      >> 0x15U)))) 
                                     | (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_21))) 
                                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                        ? (0U != (0xffffffU 
                                                  & (~ 
                                                     ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                         >> 1U)))))
                                        : (0U != (0x1ffffffU 
                                                  & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                        >> 1U)))))))),27);
    }
}

void VTestHarness::traceChgThis__2400(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20078);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U))));
        vcdp->chgQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 4U))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 6U))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 8U))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xaU))))));
        vcdp->chgBit(oldp+9,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xcU))))));
        vcdp->chgBit(oldp+10,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0xeU))))));
        vcdp->chgBit(oldp+11,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x10U))))));
        vcdp->chgBit(oldp+12,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x12U))))));
        vcdp->chgBit(oldp+13,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x14U))))));
        vcdp->chgBit(oldp+14,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x16U))))));
        vcdp->chgBit(oldp+15,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x18U))))));
        vcdp->chgBit(oldp+16,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1aU))))));
        vcdp->chgBit(oldp+17,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU))))));
        vcdp->chgBit(oldp+18,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2402(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20097);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x20U))))));
        vcdp->chgBit(oldp+1,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x22U))))));
        vcdp->chgBit(oldp+2,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x24U))))));
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x26U))))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x28U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2aU))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2cU))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2eU))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x30U))))));
        vcdp->chgBit(oldp+9,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x32U)))));
        vcdp->chgCData(oldp+10,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0xaU))))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 8U))))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 6U))))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 4U))))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 2U))))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))),6);
        vcdp->chgSData(oldp+11,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x18U))))) 
                                  << 0xcU) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x16U))))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x14U))))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x12U))))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x10U))))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xeU))))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))) 
                                                                    << 4U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))) 
                                                                       << 3U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))) 
                                                                          << 2U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))) 
                                                                             << 1U) 
                                                                            | (0U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))))))))))))))),13);
    }
}

void VTestHarness::traceChgThis__2404(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20109);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)((0U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x24U))))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x22U))))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x20U))))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x1cU))))) 
                                                     << 1U) 
                                                    | (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x1aU)))))))))),6);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum),26);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        vcdp->chgCData(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                << 1U)),6);
        vcdp->chgSData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+5,((0x1fffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                << 9U) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                  >> 0x17U)))),29);
        vcdp->chgBit(oldp+6,((0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))));
        vcdp->chgBit(oldp+7,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 2U)))));
        vcdp->chgBit(oldp+8,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 4U)))));
        vcdp->chgBit(oldp+9,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 6U)))));
        vcdp->chgBit(oldp+10,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 8U)))));
        vcdp->chgBit(oldp+11,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xaU)))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                     >> 0xcU))));
        vcdp->chgIData(oldp+13,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
        vcdp->chgBit(oldp+14,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21))));
    }
}

void VTestHarness::traceChgThis__2406(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20124);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25144[3];
    WData/*95:0*/ __Vtemp25145[3];
    WData/*95:0*/ __Vtemp25146[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                           >> 0x19U)))));
        vcdp->chgBit(oldp+1,(((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                            >> 0x19U))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                 ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        vcdp->chgBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                    >> 0x1aU))));
        vcdp->chgBit(oldp+4,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 8U)))));
        vcdp->chgCData(oldp+5,((0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),8);
        vcdp->chgBit(oldp+6,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 7U)))));
        vcdp->chgCData(oldp+7,((0x7fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),7);
        vcdp->chgBit(oldp+8,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 6U)))));
        vcdp->chgCData(oldp+9,((0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),6);
        __Vtemp25144[0U] = 0U;
        __Vtemp25144[1U] = 0U;
        __Vtemp25144[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp25145, __Vtemp25144, 
                       (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
        __Vtemp25146[0U] = __Vtemp25145[0U];
        __Vtemp25146[1U] = __Vtemp25145[1U];
        __Vtemp25146[2U] = (1U & __Vtemp25145[2U]);
        vcdp->chgWData(oldp+10,(__Vtemp25146),65);
        vcdp->chgIData(oldp+13,((3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 2U))),27);
        vcdp->chgIData(oldp+14,((1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 1U))),27);
        vcdp->chgIData(oldp+15,(((~ (1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U))) 
                                 & (3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 2U)))),27);
        vcdp->chgBit(oldp+16,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)));
        vcdp->chgBit(oldp+17,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T)));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        vcdp->chgIData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    }
}

void VTestHarness::traceChgThis__2408(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20144);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        vcdp->chgSData(oldp+1,((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        vcdp->chgIData(oldp+2,((0x7fffffU & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                              : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        vcdp->chgBit(oldp+3,(VL_LTES_III(1,4,4, 3U, 
                                         (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U)))));
        vcdp->chgBit(oldp+4,(VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        vcdp->chgBit(oldp+5,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                        >> 2U) : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U)))));
        vcdp->chgBit(oldp+6,((1U & (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                      >> 0x1aU) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 2U)) 
                                    | (0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig))))));
        vcdp->chgBit(oldp+7,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                        >> 0x19U) : 
                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                     >> 0x18U)))));
        vcdp->chgBit(oldp+8,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                   & VL_GTES_III(1,2,2, 0U, 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                     >> 8U)))) 
                                  & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                      ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                 & (~ ((((~ ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x19U)
                                             : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x18U))) 
                                        & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                       & ((0x4000000U 
                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                           ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 2U)
                                           : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 1U))))))));
    }
}

void VTestHarness::traceChgThis__2410(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20153);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                              & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                      & VL_GTES_III(1,2,2, 0U, 
                                                    (3U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                        >> 8U)))) 
                                     & ((0x4000000U 
                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                         ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                            >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                    & (~ ((((~ ((0x4000000U 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                                 : 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                            & ((0x4000000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x19U)
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U))) 
                                           & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                          & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                 >> 1U)))))))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                 & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        vcdp->chgBit(oldp+7,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                                 | (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                >> 0x19U))) 
                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                          ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                             >> 0x13U))))))));
    }
}

void VTestHarness::traceChgThis__2412(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20161);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,((0x1ffU & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                             & (~ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
                                                    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                    ? 0x1c0U
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x40U
                                                   : 0U))) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                               ? 0x180U
                                               : 0U)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                              ? 0x1c0U
                                              : 0U)))),9);
        vcdp->chgIData(oldp+1,((0x7fffffU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero)) 
                                              | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                              ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x400000U
                                                  : 0U)
                                              : ((0x4000000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 1U)
                                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)))),23);
        vcdp->chgSData(oldp+2,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  << 9U) & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                                             << 9U) 
                                            | ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                                << 9U) 
                                               & (((0U 
                                                    != 
                                                    (3U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                        >> 0x19U))) 
                                                   << 9U) 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                                      << 9U) 
                                                     ^ 
                                                     (0x3ffe00U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                         >> 0xaU))))))) 
                                | (0x1ffU & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                & (~ 
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
                                                     | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                     ? 0x1c0U
                                                     : 0U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                    ? 0x40U
                                                    : 0U))) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x180U
                                                  : 0U)) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                 ? 0x1c0U
                                                 : 0U))))),10);
    }
}

void VTestHarness::traceChgThis__2414(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20164);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                  & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                     | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                          & VL_GTES_III(1,2,2, 0U, 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                            >> 8U)))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                        & (~ ((((~ 
                                                 ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                                & ((0x4000000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 0x19U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 0x18U))) 
                                               & (0U 
                                                  != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                              & ((0x4000000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 2U)
                                                  : 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U))))))) 
                                 << 1U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))),2);
        vcdp->chgCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_3) 
                                 << 2U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow))),3);
        vcdp->chgSData(oldp+2,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+3,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
    }
}

void VTestHarness::traceChgThis__2416(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20168);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__rawIn___05FisNaN));
        vcdp->chgBit(oldp+2,(((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU)))) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x1dU))))));
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+4,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgBit(oldp+5,((1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                             >> 0x17U)) 
                                    >> 8U))));
        vcdp->chgCData(oldp+6,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                 >> 0x17U)))),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__magJustBelowOne));
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__shiftedSig),55);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__alignedSig),34);
        vcdp->chgIData(oldp+12,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__alignedSig 
                                         >> 2U))),32);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__common_inexact));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__roundIncr_near_even));
        vcdp->chgBit(oldp+15,((1U & ((1U & (((IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x17U)) 
                                             >> 8U) 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__alignedSig 
                                                       >> 1U)))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__magJustBelowOne)))));
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__complUnroundedInt),32);
        vcdp->chgIData(oldp+17,(((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__roundIncr_near_even) 
                                        ^ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x20U))))
                                  ? ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__complUnroundedInt)
                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__complUnroundedInt)),32);
    }
}

void VTestHarness::traceChgThis__2418(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20186);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0x1fU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x17U))))));
        vcdp->chgBit(oldp+1,(((0x3fffffffU == (0x3fffffffU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__alignedSig 
                                                          >> 2U)))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__roundIncr_near_even))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__common_overflow));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__invalidExc));
        vcdp->chgBit(oldp+4,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__invalidExc)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__common_overflow))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__common_inexact))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__excSign));
        vcdp->chgIData(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__excSign)
                                  ? 0x80000000U : 0U) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__excSign)
                                    ? 0U : 0x7fffffffU))),32);
        vcdp->chgCData(oldp+7,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__invalidExc) 
                                 << 1U) | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_6__DOT__common_overflow)))),2);
        vcdp->chgBit(oldp+8,((1U & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU))))));
        vcdp->chgBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__ram_acc_read_resp_data_7_0_io_deq_bits_MPORT_data 
                                    >> 0x1fU))));
        vcdp->chgCData(oldp+10,((0x40U | (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))),8);
        vcdp->chgQData(oldp+11,((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T))),33);
        vcdp->chgIData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_absIn),32);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist),5);
        vcdp->chgIData(oldp+15,((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T)),32);
        vcdp->chgSData(oldp+16,((0x1ffU & ((IData)(0xc0U) 
                                           + (0x3ffU 
                                              & VL_EXTENDS_II(10,9, 
                                                              (0x40U 
                                                               | (0x1fU 
                                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))))))),10);
    }
}

void VTestHarness::traceChgThis__2420(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20203);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig),27);
        vcdp->chgBit(oldp+1,((0U != (2U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgBit(oldp+2,((0U != (1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        vcdp->chgSData(oldp+4,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & ((IData)(0xc0U) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_EXTENDS_II(10,9, 
                                                                             (0x40U 
                                                                              | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))))))) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (3U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                              >> 0x18U)))))),11);
        vcdp->chgSData(oldp+5,((0x1ffU & ((0x7ffU & 
                                           VL_EXTENDS_II(11,10, 
                                                         (0x1ffU 
                                                          & ((IData)(0xc0U) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_EXTENDS_II(10,9, 
                                                                              (0x40U 
                                                                               | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (3U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                 >> 0x18U))))))),9);
    }
}

void VTestHarness::traceChgThis__2422(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20209);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        vcdp->chgSData(oldp+1,((0x1ffU & (((0x7ffU 
                                            & VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                (0x3ffU 
                                                                 & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                           + (0x7ffU 
                                              & VL_EXTENDS_II(11,10, 
                                                              (3U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))))) 
                                          & (~ ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                            >> 0x1fU)))
                                                 ? 0U
                                                 : 0x1c0U))))),9);
        vcdp->chgIData(oldp+2,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU)))
                                 ? (0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                 : 0U)),23);
        vcdp->chgSData(oldp+3,(((0x200U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__ram_acc_read_resp_data_7_0_io_deq_bits_MPORT_data 
                                           >> 0x16U)) 
                                | (0x1ffU & (((0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & ((IData)(0xc0U) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                              + (0x7ffU 
                                                 & VL_EXTENDS_II(11,10, 
                                                                 (3U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 0x18U))))) 
                                             & (~ (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                               >> 0x1fU)))
                                                    ? 0U
                                                    : 0x1c0U)))))),10);
    }
}

void VTestHarness::traceChgThis__2424(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20213);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out)))),24);
        vcdp->chgQData(oldp+1,((VL_ULL(0xffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                    >> 1U))))),48);
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x16U))))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        vcdp->chgBit(oldp+6,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+8,((0x3ffU & ((IData)(0x32eU) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                         >> 0x17U)))))))),10);
        vcdp->chgIData(oldp+9,((0x3ffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                               << 0xfU) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                                 >> 0x11U)))),26);
        vcdp->chgBit(oldp+10,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])));
        vcdp->chgQData(oldp+11,((VL_ULL(0xffffffffffff) 
                                 & (((QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                     >> 1U))))),49);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                          >> 0x20U)))));
        vcdp->chgSData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig),27);
        vcdp->chgCData(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1) 
                                 << 4U)),5);
        vcdp->chgSData(oldp+18,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x17U)))),9);
        vcdp->chgBit(oldp+19,((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU))))));
        vcdp->chgSData(oldp+20,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x17U)))),10);
    }
}

void VTestHarness::traceChgThis__2426(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20234);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25153[3];
    WData/*95:0*/ __Vtemp25154[3];
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgSData(oldp+1,((0x7ffU & ((IData)(0x746U) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                      >> 0x17U))))))),11);
        vcdp->chgSData(oldp+2,((0x3ffU & ((IData)(0x346U) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                         >> 0x17U)))))))),10);
        vcdp->chgWData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5),78);
        __Vtemp25153[0U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[1U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[0U] 
                                          >> 3U));
        __Vtemp25153[1U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[2U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[1U] 
                                          >> 3U));
        __Vtemp25153[2U] = (0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[2U] 
                                      >> 3U));
        vcdp->chgWData(oldp+6,(__Vtemp25153),75);
        vcdp->chgWData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC),76);
        vcdp->chgWData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        vcdp->chgSData(oldp+15,((0x3ffU & (((IData)(0x32eU) 
                                            + (0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                           >> 0x17U)))))) 
                                           - (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                            >> 0x20U)))))),10);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        vcdp->chgBit(oldp+18,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                              >> 0x20U)))
                                ? (0U != (0xffffffU 
                                          & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                   >> 1U)))))
                                : (0U != (0x1ffffffU 
                                          & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                >> 1U)))))));
        VL_EXTEND_WQ(81,50, __Vtemp25154, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        vcdp->chgIData(oldp+19,((0x1fffffffU & ((__Vtemp25154[1U] 
                                                 << 0xbU) 
                                                | (__Vtemp25154[0U] 
                                                   >> 0x15U)))),29);
        vcdp->chgBit(oldp+20,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
    }
}

void VTestHarness::traceChgThis__2428(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20255);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25157[3];
    WData/*95:0*/ __Vtemp25158[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 1U))))));
        vcdp->chgBit(oldp+1,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 5U))))));
        vcdp->chgBit(oldp+2,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 9U))))));
        vcdp->chgBit(oldp+3,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0xdU))))));
        vcdp->chgBit(oldp+4,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0x11U))))));
        vcdp->chgBit(oldp+5,((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                   >> 0x15U))))));
        vcdp->chgBit(oldp+6,((0U != (0x3fU & (((IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                    >> 0x15U))))) 
                                               << 6U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                       >> 0x11U))))) 
                                                  << 5U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                          >> 0xdU))))) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                             >> 9U))))) 
                                                        << 3U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 5U))))) 
                                                           << 2U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 1U))))) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))))))))));
        VL_EXTEND_WQ(81,50, __Vtemp25157, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        VL_EXTEND_WQ(81,50, __Vtemp25158, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        vcdp->chgIData(oldp+7,(((0x7fffffeU & ((__Vtemp25157[1U] 
                                                << 9U) 
                                               | (0x1feU 
                                                  & (__Vtemp25157[0U] 
                                                     >> 0x17U)))) 
                                | (((0U != (7U & ((
                                                   __Vtemp25158[1U] 
                                                   << 0xbU) 
                                                  | (__Vtemp25158[0U] 
                                                     >> 0x15U)))) 
                                    | (0U != (0x3fU 
                                              & (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                       >> 0x15U))))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                          >> 0x11U))))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                             >> 0xdU))))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 9U))))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 5U))))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 1U))))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))))))))) 
                                   | ((1U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                     >> 0x20U)))
                                       ? (0U != (0xffffffU 
                                                 & (~ 
                                                    ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                        >> 1U)))))
                                       : (0U != (0x1ffffffU 
                                                 & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                       >> 1U)))))))),27);
    }
}

void VTestHarness::traceChgThis__2430(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20263);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U))));
        vcdp->chgQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 4U))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 6U))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 8U))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xaU))))));
        vcdp->chgBit(oldp+9,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xcU))))));
        vcdp->chgBit(oldp+10,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0xeU))))));
        vcdp->chgBit(oldp+11,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x10U))))));
        vcdp->chgBit(oldp+12,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x12U))))));
        vcdp->chgBit(oldp+13,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x14U))))));
        vcdp->chgBit(oldp+14,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x16U))))));
        vcdp->chgBit(oldp+15,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x18U))))));
        vcdp->chgBit(oldp+16,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1aU))))));
        vcdp->chgBit(oldp+17,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU))))));
        vcdp->chgBit(oldp+18,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2432(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20282);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x20U))))));
        vcdp->chgBit(oldp+1,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x22U))))));
        vcdp->chgBit(oldp+2,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x24U))))));
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x26U))))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x28U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2aU))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2cU))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2eU))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x30U))))));
        vcdp->chgBit(oldp+9,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x32U)))));
        vcdp->chgCData(oldp+10,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0xaU))))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 8U))))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 6U))))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 4U))))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 2U))))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))),6);
        vcdp->chgSData(oldp+11,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x18U))))) 
                                  << 0xcU) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x16U))))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x14U))))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x12U))))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x10U))))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xeU))))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))) 
                                                                    << 4U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))) 
                                                                       << 3U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))) 
                                                                          << 2U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))) 
                                                                             << 1U) 
                                                                            | (0U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))))))))))))))),13);
    }
}

void VTestHarness::traceChgThis__2434(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20294);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)((0U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x24U))))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x22U))))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x20U))))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x1cU))))) 
                                                     << 1U) 
                                                    | (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x1aU)))))))))),6);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum),26);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        vcdp->chgCData(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                << 1U)),6);
        vcdp->chgSData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+5,((0x1fffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                << 9U) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                  >> 0x17U)))),29);
        vcdp->chgBit(oldp+6,((0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))));
        vcdp->chgBit(oldp+7,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 2U)))));
        vcdp->chgBit(oldp+8,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 4U)))));
        vcdp->chgBit(oldp+9,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 6U)))));
        vcdp->chgBit(oldp+10,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 8U)))));
        vcdp->chgBit(oldp+11,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xaU)))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                     >> 0xcU))));
        vcdp->chgIData(oldp+13,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
        vcdp->chgBit(oldp+14,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21))));
    }
}

void VTestHarness::traceChgThis__2436(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20309);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25164[3];
    WData/*95:0*/ __Vtemp25165[3];
    WData/*95:0*/ __Vtemp25166[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                           >> 0x19U)))));
        vcdp->chgBit(oldp+1,(((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                            >> 0x19U))) 
                              & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                          >> 0x20U)) 
                                 ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U)))));
        vcdp->chgBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                    >> 0x1aU))));
        vcdp->chgBit(oldp+3,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 8U)))));
        vcdp->chgCData(oldp+4,((0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),8);
        vcdp->chgBit(oldp+5,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 7U)))));
        vcdp->chgCData(oldp+6,((0x7fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),7);
        vcdp->chgBit(oldp+7,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 6U)))));
        vcdp->chgCData(oldp+8,((0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),6);
        __Vtemp25164[0U] = 0U;
        __Vtemp25164[1U] = 0U;
        __Vtemp25164[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp25165, __Vtemp25164, 
                       (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
        __Vtemp25166[0U] = __Vtemp25165[0U];
        __Vtemp25166[1U] = __Vtemp25165[1U];
        __Vtemp25166[2U] = (1U & __Vtemp25165[2U]);
        vcdp->chgWData(oldp+9,(__Vtemp25166),65);
        vcdp->chgIData(oldp+12,((3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 2U))),27);
        vcdp->chgIData(oldp+13,((1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 1U))),27);
        vcdp->chgIData(oldp+14,(((~ (1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U))) 
                                 & (3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 2U)))),27);
        vcdp->chgBit(oldp+15,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)));
        vcdp->chgBit(oldp+16,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T)));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        vcdp->chgIData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    }
}

void VTestHarness::traceChgThis__2438(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20328);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        vcdp->chgSData(oldp+1,((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        vcdp->chgIData(oldp+2,((0x7fffffU & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                              : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        vcdp->chgBit(oldp+3,(VL_LTES_III(1,4,4, 3U, 
                                         (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U)))));
        vcdp->chgBit(oldp+4,(VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        vcdp->chgBit(oldp+5,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                        >> 2U) : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U)))));
        vcdp->chgBit(oldp+6,((1U & (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                      >> 0x1aU) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 2U)) 
                                    | (0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig))))));
        vcdp->chgBit(oldp+7,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                        >> 0x19U) : 
                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                     >> 0x18U)))));
        vcdp->chgBit(oldp+8,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                   & VL_GTES_III(1,2,2, 0U, 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                     >> 8U)))) 
                                  & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                      ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                 & (~ ((((~ ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x19U)
                                             : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x18U))) 
                                        & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                       & ((0x4000000U 
                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                           ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 2U)
                                           : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 1U))))))));
    }
}

void VTestHarness::traceChgThis__2440(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20337);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        vcdp->chgBit(oldp+2,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U))))));
        vcdp->chgSData(oldp+3,((((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                  ? 0x40U
                                                  : 0U)))) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U))),9);
        vcdp->chgIData(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                 ? 0x400000U : 0U)),23);
        vcdp->chgSData(oldp+5,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                     & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                >> 0x20U)))) 
                                 << 9U) | (((0x3fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                & (~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                     ? 0x40U
                                                     : 0U)))) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                ? 0x180U
                                                : 0U)) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                               ? 0x1c0U
                                               : 0U)))),10);
        vcdp->chgCData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1) 
                                << 2U)),3);
        vcdp->chgSData(oldp+7,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+8,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+9,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2442(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20347);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn___05FisNaN));
        vcdp->chgBit(oldp+1,(((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU)))) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x1dU))))));
        vcdp->chgBit(oldp+2,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+4,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgBit(oldp+5,((1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                             >> 0x17U)) 
                                    >> 8U))));
        vcdp->chgCData(oldp+6,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                 >> 0x17U)))),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__magJustBelowOne));
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig),55);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__alignedSig),34);
        vcdp->chgIData(oldp+12,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__alignedSig 
                                         >> 2U))),32);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__common_inexact));
        vcdp->chgBit(oldp+14,(((1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                >> 0x17U)) 
                                       >> 8U) & ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__alignedSig 
                                                              >> 1U)))) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__alignedSig)))))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__magJustBelowOne) 
                                  & (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__alignedSig)))))));
        vcdp->chgBit(oldp+15,((1U & ((1U & (((IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x17U)) 
                                             >> 8U) 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__alignedSig 
                                                       >> 1U)))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__magJustBelowOne)))));
    }
}

void VTestHarness::traceChgThis__2444(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20363);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__complUnroundedInt),32);
        vcdp->chgIData(oldp+1,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                               >> 0x20U)))
                                 ? ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__complUnroundedInt)
                                 : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__complUnroundedInt)),32);
        vcdp->chgBit(oldp+2,((0x1fU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x17U))))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__common_overflow));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__invalidExc));
        vcdp->chgBit(oldp+5,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__invalidExc)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__common_overflow))));
        vcdp->chgBit(oldp+6,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__invalidExc)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__common_overflow))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__common_inexact))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__excSign));
        vcdp->chgIData(oldp+8,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__excSign)
                                  ? 0x80000000U : 0U) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__excSign)
                                    ? 0U : 0x7fffffffU))),32);
        vcdp->chgCData(oldp+9,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__invalidExc) 
                                 << 1U) | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__common_overflow)))),2);
        vcdp->chgBit(oldp+10,((1U & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                >> 0x1fU))))));
        vcdp->chgBit(oldp+11,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7_io_in 
                                     >> 0x1fU))));
        vcdp->chgCData(oldp+12,((0x40U | (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))),8);
        vcdp->chgQData(oldp+13,((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T))),33);
        vcdp->chgIData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_absIn),32);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist),5);
        vcdp->chgIData(oldp+17,((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T)),32);
        vcdp->chgSData(oldp+18,((0x1ffU & ((IData)(0xc0U) 
                                           + (0x3ffU 
                                              & VL_EXTENDS_II(10,9, 
                                                              (0x40U 
                                                               | (0x1fU 
                                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))))))),10);
    }
}

void VTestHarness::traceChgThis__2446(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20382);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig),27);
        vcdp->chgBit(oldp+1,((0U != (2U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgBit(oldp+2,((0U != (1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        vcdp->chgSData(oldp+4,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & ((IData)(0xc0U) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_EXTENDS_II(10,9, 
                                                                             (0x40U 
                                                                              | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))))))) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (3U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                              >> 0x18U)))))),11);
        vcdp->chgSData(oldp+5,((0x1ffU & ((0x7ffU & 
                                           VL_EXTENDS_II(11,10, 
                                                         (0x1ffU 
                                                          & ((IData)(0xc0U) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_EXTENDS_II(10,9, 
                                                                              (0x40U 
                                                                               | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (3U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                 >> 0x18U))))))),9);
    }
}

void VTestHarness::traceChgThis__2448(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20388);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        vcdp->chgSData(oldp+1,((0x1ffU & (((0x7ffU 
                                            & VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                (0x3ffU 
                                                                 & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                           + (0x7ffU 
                                              & VL_EXTENDS_II(11,10, 
                                                              (3U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))))) 
                                          & (~ ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                            >> 0x1fU)))
                                                 ? 0U
                                                 : 0x1c0U))))),9);
        vcdp->chgIData(oldp+2,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU)))
                                 ? (0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                 : 0U)),23);
        vcdp->chgSData(oldp+3,(((0x200U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7_io_in 
                                           >> 0x16U)) 
                                | (0x1ffU & (((0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & ((IData)(0xc0U) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                              + (0x7ffU 
                                                 & VL_EXTENDS_II(11,10, 
                                                                 (3U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 0x18U))))) 
                                             & (~ (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                               >> 0x1fU)))
                                                    ? 0U
                                                    : 0x1c0U)))))),10);
    }
}

void VTestHarness::traceChgThis__2450(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20392);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out)))),24);
        vcdp->chgQData(oldp+1,((VL_ULL(0xffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                    >> 1U))))),48);
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x16U))))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        vcdp->chgBit(oldp+6,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+8,((0x3ffU & ((IData)(0x32eU) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                         >> 0x17U)))))))),10);
        vcdp->chgIData(oldp+9,((0x3ffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                               << 0xfU) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                                 >> 0x11U)))),26);
        vcdp->chgBit(oldp+10,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])));
        vcdp->chgQData(oldp+11,((VL_ULL(0xffffffffffff) 
                                 & (((QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                     >> 1U))))),49);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                          >> 0x20U)))));
        vcdp->chgSData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig),27);
        vcdp->chgCData(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1) 
                                 << 4U)),5);
        vcdp->chgSData(oldp+18,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x17U)))),9);
        vcdp->chgBit(oldp+19,((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU))))));
        vcdp->chgSData(oldp+20,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x17U)))),10);
    }
}

void VTestHarness::traceChgThis__2452(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20413);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25173[3];
    WData/*95:0*/ __Vtemp25174[3];
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgSData(oldp+1,((0x7ffU & ((IData)(0x746U) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                      >> 0x17U))))))),11);
        vcdp->chgSData(oldp+2,((0x3ffU & ((IData)(0x346U) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                         >> 0x17U)))))))),10);
        vcdp->chgWData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5),78);
        __Vtemp25173[0U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[1U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[0U] 
                                          >> 3U));
        __Vtemp25173[1U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[2U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[1U] 
                                          >> 3U));
        __Vtemp25173[2U] = (0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[2U] 
                                      >> 3U));
        vcdp->chgWData(oldp+6,(__Vtemp25173),75);
        vcdp->chgWData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC),76);
        vcdp->chgWData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        vcdp->chgSData(oldp+15,((0x3ffU & (((IData)(0x32eU) 
                                            + (0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                           >> 0x17U)))))) 
                                           - (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                            >> 0x20U)))))),10);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        vcdp->chgBit(oldp+18,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                              >> 0x20U)))
                                ? (0U != (0xffffffU 
                                          & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                   >> 1U)))))
                                : (0U != (0x1ffffffU 
                                          & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                >> 1U)))))));
        VL_EXTEND_WQ(81,50, __Vtemp25174, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        vcdp->chgIData(oldp+19,((0x1fffffffU & ((__Vtemp25174[1U] 
                                                 << 0xbU) 
                                                | (__Vtemp25174[0U] 
                                                   >> 0x15U)))),29);
        vcdp->chgBit(oldp+20,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
    }
}

void VTestHarness::traceChgThis__2454(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20434);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25177[3];
    WData/*95:0*/ __Vtemp25178[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 1U))))));
        vcdp->chgBit(oldp+1,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 5U))))));
        vcdp->chgBit(oldp+2,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 9U))))));
        vcdp->chgBit(oldp+3,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0xdU))))));
        vcdp->chgBit(oldp+4,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0x11U))))));
        vcdp->chgBit(oldp+5,((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                   >> 0x15U))))));
        vcdp->chgBit(oldp+6,((0U != (0x3fU & (((IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                    >> 0x15U))))) 
                                               << 6U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                       >> 0x11U))))) 
                                                  << 5U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                          >> 0xdU))))) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                             >> 9U))))) 
                                                        << 3U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 5U))))) 
                                                           << 2U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 1U))))) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))))))))));
        VL_EXTEND_WQ(81,50, __Vtemp25177, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        VL_EXTEND_WQ(81,50, __Vtemp25178, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        vcdp->chgIData(oldp+7,(((0x7fffffeU & ((__Vtemp25177[1U] 
                                                << 9U) 
                                               | (0x1feU 
                                                  & (__Vtemp25177[0U] 
                                                     >> 0x17U)))) 
                                | (((0U != (7U & ((
                                                   __Vtemp25178[1U] 
                                                   << 0xbU) 
                                                  | (__Vtemp25178[0U] 
                                                     >> 0x15U)))) 
                                    | (0U != (0x3fU 
                                              & (((IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                       >> 0x15U))))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                          >> 0x11U))))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                             >> 0xdU))))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 9U))))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 5U))))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                                >> 1U))))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))))))))) 
                                   | ((1U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                     >> 0x20U)))
                                       ? (0U != (0xffffffU 
                                                 & (~ 
                                                    ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                        >> 1U)))))
                                       : (0U != (0x1ffffffU 
                                                 & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                       >> 1U)))))))),27);
    }
}

void VTestHarness::traceChgThis__2456(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20442);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U))));
        vcdp->chgQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 4U))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 6U))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 8U))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xaU))))));
        vcdp->chgBit(oldp+9,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xcU))))));
        vcdp->chgBit(oldp+10,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0xeU))))));
        vcdp->chgBit(oldp+11,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x10U))))));
        vcdp->chgBit(oldp+12,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x12U))))));
        vcdp->chgBit(oldp+13,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x14U))))));
        vcdp->chgBit(oldp+14,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x16U))))));
        vcdp->chgBit(oldp+15,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x18U))))));
        vcdp->chgBit(oldp+16,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1aU))))));
        vcdp->chgBit(oldp+17,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU))))));
        vcdp->chgBit(oldp+18,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2458(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20461);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x20U))))));
        vcdp->chgBit(oldp+1,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x22U))))));
        vcdp->chgBit(oldp+2,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x24U))))));
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x26U))))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x28U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2aU))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2cU))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2eU))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x30U))))));
        vcdp->chgBit(oldp+9,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x32U)))));
        vcdp->chgCData(oldp+10,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0xaU))))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 8U))))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 6U))))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 4U))))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 2U))))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))),6);
        vcdp->chgSData(oldp+11,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x18U))))) 
                                  << 0xcU) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x16U))))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x14U))))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x12U))))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x10U))))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xeU))))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))) 
                                                                    << 4U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))) 
                                                                       << 3U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))) 
                                                                          << 2U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))) 
                                                                             << 1U) 
                                                                            | (0U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))))))))))))))),13);
    }
}

void VTestHarness::traceChgThis__2460(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20473);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)((0U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x24U))))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x22U))))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x20U))))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x1cU))))) 
                                                     << 1U) 
                                                    | (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x1aU)))))))))),6);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum),26);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        vcdp->chgCData(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                << 1U)),6);
        vcdp->chgSData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+5,((0x1fffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                << 9U) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                  >> 0x17U)))),29);
        vcdp->chgBit(oldp+6,((0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))));
        vcdp->chgBit(oldp+7,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 2U)))));
        vcdp->chgBit(oldp+8,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 4U)))));
        vcdp->chgBit(oldp+9,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 6U)))));
        vcdp->chgBit(oldp+10,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 8U)))));
        vcdp->chgBit(oldp+11,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xaU)))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                     >> 0xcU))));
        vcdp->chgIData(oldp+13,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
        vcdp->chgBit(oldp+14,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21))));
    }
}

void VTestHarness::traceChgThis__2462(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20488);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25184[3];
    WData/*95:0*/ __Vtemp25185[3];
    WData/*95:0*/ __Vtemp25186[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                           >> 0x19U)))));
        vcdp->chgBit(oldp+1,(((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                            >> 0x19U))) 
                              & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                          >> 0x20U)) 
                                 ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U)))));
        vcdp->chgBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                    >> 0x1aU))));
        vcdp->chgBit(oldp+3,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 8U)))));
        vcdp->chgCData(oldp+4,((0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),8);
        vcdp->chgBit(oldp+5,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 7U)))));
        vcdp->chgCData(oldp+6,((0x7fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),7);
        vcdp->chgBit(oldp+7,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 6U)))));
        vcdp->chgCData(oldp+8,((0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),6);
        __Vtemp25184[0U] = 0U;
        __Vtemp25184[1U] = 0U;
        __Vtemp25184[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp25185, __Vtemp25184, 
                       (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
        __Vtemp25186[0U] = __Vtemp25185[0U];
        __Vtemp25186[1U] = __Vtemp25185[1U];
        __Vtemp25186[2U] = (1U & __Vtemp25185[2U]);
        vcdp->chgWData(oldp+9,(__Vtemp25186),65);
        vcdp->chgIData(oldp+12,((3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 2U))),27);
        vcdp->chgIData(oldp+13,((1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 1U))),27);
        vcdp->chgIData(oldp+14,(((~ (1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U))) 
                                 & (3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 2U)))),27);
        vcdp->chgBit(oldp+15,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)));
        vcdp->chgBit(oldp+16,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T)));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        vcdp->chgIData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    }
}

void VTestHarness::traceChgThis__2464(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20507);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        vcdp->chgSData(oldp+1,((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        vcdp->chgIData(oldp+2,((0x7fffffU & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                              : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        vcdp->chgBit(oldp+3,(VL_LTES_III(1,4,4, 3U, 
                                         (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U)))));
        vcdp->chgBit(oldp+4,(VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        vcdp->chgBit(oldp+5,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                        >> 2U) : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U)))));
        vcdp->chgBit(oldp+6,((1U & (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                      >> 0x1aU) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 2U)) 
                                    | (0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig))))));
        vcdp->chgBit(oldp+7,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                        >> 0x19U) : 
                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                     >> 0x18U)))));
        vcdp->chgBit(oldp+8,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                   & VL_GTES_III(1,2,2, 0U, 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                     >> 8U)))) 
                                  & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                      ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                 & (~ ((((~ ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x19U)
                                             : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x18U))) 
                                        & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                       & ((0x4000000U 
                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                           ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 2U)
                                           : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 1U))))))));
    }
}

void VTestHarness::traceChgThis__2466(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20516);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        vcdp->chgBit(oldp+2,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                 & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U))))));
        vcdp->chgSData(oldp+3,((((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                  ? 0x40U
                                                  : 0U)))) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                     ? 0x180U : 0U)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U))),9);
        vcdp->chgIData(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                 ? 0x400000U : 0U)),23);
        vcdp->chgSData(oldp+5,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                     & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                >> 0x20U)))) 
                                 << 9U) | (((0x3fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                & (~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                     ? 0x40U
                                                     : 0U)))) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)
                                                ? 0x180U
                                                : 0U)) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                               ? 0x1c0U
                                               : 0U)))),10);
        vcdp->chgCData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1) 
                                << 2U)),3);
        vcdp->chgSData(oldp+7,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+8,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+9,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2468(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20526);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn___05FisNaN));
        vcdp->chgBit(oldp+1,(((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU)))) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x1dU))))));
        vcdp->chgBit(oldp+2,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+4,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgBit(oldp+5,((1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                             >> 0x17U)) 
                                    >> 8U))));
        vcdp->chgCData(oldp+6,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                 >> 0x17U)))),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__magJustBelowOne));
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig),55);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__alignedSig),34);
        vcdp->chgIData(oldp+12,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__alignedSig 
                                         >> 2U))),32);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_inexact));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr_near_even));
        vcdp->chgBit(oldp+15,((1U & ((1U & (((IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x17U)) 
                                             >> 8U) 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__alignedSig 
                                                       >> 1U)))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__magJustBelowOne)))));
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__complUnroundedInt),32);
        vcdp->chgIData(oldp+17,(((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr_near_even) 
                                        ^ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x20U))))
                                  ? ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__complUnroundedInt)
                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__complUnroundedInt)),32);
    }
}

void VTestHarness::traceChgThis__2470(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20544);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0x1fU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x17U))))));
        vcdp->chgBit(oldp+1,(((0x3fffffffU == (0x3fffffffU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__alignedSig 
                                                          >> 2U)))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr_near_even))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_overflow));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__invalidExc));
        vcdp->chgBit(oldp+4,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__invalidExc)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_overflow))));
        vcdp->chgBit(oldp+5,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__invalidExc)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_overflow))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_inexact))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__excSign));
        vcdp->chgIData(oldp+7,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__excSign)
                                  ? 0x80000000U : 0U) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__excSign)
                                    ? 0U : 0x7fffffffU))),32);
        vcdp->chgCData(oldp+8,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__invalidExc) 
                                 << 1U) | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__common_overflow)))),2);
        vcdp->chgBit(oldp+9,((1U & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU))))));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7_io_in 
                                     >> 0x1fU))));
        vcdp->chgCData(oldp+11,((0x40U | (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))),8);
        vcdp->chgQData(oldp+12,((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T))),33);
        vcdp->chgIData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_absIn),32);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist),5);
        vcdp->chgIData(oldp+16,((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T)),32);
        vcdp->chgSData(oldp+17,((0x1ffU & ((IData)(0xc0U) 
                                           + (0x3ffU 
                                              & VL_EXTENDS_II(10,9, 
                                                              (0x40U 
                                                               | (0x1fU 
                                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))))))),10);
    }
}

void VTestHarness::traceChgThis__2472(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20562);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig),27);
        vcdp->chgBit(oldp+1,((0U != (2U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgBit(oldp+2,((0U != (1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        vcdp->chgSData(oldp+4,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & ((IData)(0xc0U) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_EXTENDS_II(10,9, 
                                                                             (0x40U 
                                                                              | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))))))) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (3U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                              >> 0x18U)))))),11);
        vcdp->chgSData(oldp+5,((0x1ffU & ((0x7ffU & 
                                           VL_EXTENDS_II(11,10, 
                                                         (0x1ffU 
                                                          & ((IData)(0xc0U) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_EXTENDS_II(10,9, 
                                                                              (0x40U 
                                                                               | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (3U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                 >> 0x18U))))))),9);
    }
}

void VTestHarness::traceChgThis__2474(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20568);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        vcdp->chgSData(oldp+1,((0x1ffU & (((0x7ffU 
                                            & VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                (0x3ffU 
                                                                 & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                           + (0x7ffU 
                                              & VL_EXTENDS_II(11,10, 
                                                              (3U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))))) 
                                          & (~ ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                            >> 0x1fU)))
                                                 ? 0U
                                                 : 0x1c0U))))),9);
        vcdp->chgIData(oldp+2,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU)))
                                 ? (0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                 : 0U)),23);
        vcdp->chgSData(oldp+3,(((0x200U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7_io_in 
                                           >> 0x16U)) 
                                | (0x1ffU & (((0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & ((IData)(0xc0U) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                              + (0x7ffU 
                                                 & VL_EXTENDS_II(11,10, 
                                                                 (3U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 0x18U))))) 
                                             & (~ (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                               >> 0x1fU)))
                                                    ? 0U
                                                    : 0x1c0U)))))),10);
    }
}

void VTestHarness::traceChgThis__2476(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20572);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0xffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig)),24);
        vcdp->chgIData(oldp+1,((0xffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig)),24);
        vcdp->chgQData(oldp+2,((VL_ULL(0xffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                    >> 1U))))),48);
        vcdp->chgBit(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                               & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig 
                                     >> 0x16U))) | 
                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                               & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig 
                                     >> 0x16U))))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        vcdp->chgBit(oldp+7,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        vcdp->chgBit(oldp+9,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7_io_b 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd));
        vcdp->chgSData(oldp+11,((0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                            - (IData)(0xe5U)) 
                                           - (IData)(0x18U)))),10);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags));
        vcdp->chgCData(oldp+13,((0x1fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        vcdp->chgIData(oldp+14,((0x3ffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                                << 0xfU) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                                  >> 0x11U)))),26);
        vcdp->chgBit(oldp+15,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])));
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult),49);
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_3));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        vcdp->chgBit(oldp+21,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                               | (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                  & ((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 0x19U))) 
                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                        ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                           >> 0x13U)))))));
    }
}

void VTestHarness::traceChgThis__2478(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20594);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig),27);
        vcdp->chgCData(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_3) 
                                  << 4U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U)) 
                                | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                     & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                        | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                             & VL_GTES_III(1,2,2, 0U, 
                                                           (3U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                               >> 8U)))) 
                                            & ((0x4000000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                           & (~ (((
                                                   (~ 
                                                    ((0x4000000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                      ? 
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      >> 2U)
                                                      : 
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      >> 1U))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                       ? 
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x19U)
                                                       : 
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x18U))) 
                                                  & (0U 
                                                     != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                     ? 
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                     >> 2U)
                                                     : 
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                     >> 1U))))))) 
                                    << 1U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+4,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2480(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20599);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25192[3];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        vcdp->chgBit(oldp+1,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+2,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig),25);
        vcdp->chgSData(oldp+4,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7_io_b 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+5,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7_io_b 
                                                   >> 0x1eU))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7_io_b 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+8,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7_io_b 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig),25);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        vcdp->chgSData(oldp+11,((0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                           - (IData)(0xe5U)))),11);
        vcdp->chgSData(oldp+12,((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                           - (IData)(0xe5U)))),10);
        vcdp->chgBit(oldp+13,((((0U == (7U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x1dU)))) 
                                | (0U == (7U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7_io_b 
                                                        >> 0x1dU))))) 
                               | VL_GTS_III(1,11,11, 0U, 
                                            (0x7ffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                                - (IData)(0xe5U)))))));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        vcdp->chgWData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        __Vtemp25192[0U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                          >> 3U));
        __Vtemp25192[1U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                          >> 3U));
        __Vtemp25192[2U] = (0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                      >> 3U));
        vcdp->chgWData(oldp+18,(__Vtemp25192),75);
        vcdp->chgWData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC),76);
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign));
        vcdp->chgWData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        vcdp->chgSData(oldp+28,((0x3ffU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                                             - (IData)(0xe5U)) 
                                            - (IData)(0x18U)) 
                                           - ((0x3fcU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags) 
                                                                 >> 1U)))) 
                                                  << 2U)) 
                                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags))))),10);
    }
}

void VTestHarness::traceChgThis__2482(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20628);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                               ? (0U != (0xffffffU 
                                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                  >> 1U)))))
                               : (0U != (0x1ffffffU 
                                         & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                               >> 1U)))))));
        vcdp->chgIData(oldp+3,((0x1fffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                  >> 0x15U)))),29);
        vcdp->chgBit(oldp+4,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
        vcdp->chgBit(oldp+5,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 1U))))));
        vcdp->chgBit(oldp+6,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 5U))))));
        vcdp->chgBit(oldp+7,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 9U))))));
        vcdp->chgBit(oldp+8,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0xdU))))));
        vcdp->chgBit(oldp+9,((0U != (0xfU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0x11U))))));
        vcdp->chgBit(oldp+10,((0U != (7U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 0x15U))))));
        vcdp->chgSData(oldp+11,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                         (7U 
                                                          & (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                              >> 2U)))))),9);
        vcdp->chgBit(oldp+12,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_21))));
        vcdp->chgIData(oldp+13,(((0x7fffffeU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                 << 9U) 
                                                | (0x1feU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                      >> 0x17U)))) 
                                 | (((0U != (7U & (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                      >> 0x15U)))) 
                                     | (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_21))) 
                                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                        ? (0U != (0xffffffU 
                                                  & (~ 
                                                     ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                         >> 1U)))))
                                        : (0U != (0x1ffffffU 
                                                  & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                        >> 1U)))))))),27);
    }
}

void VTestHarness::traceChgThis__2484(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20642);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U))));
        vcdp->chgQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 4U))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 6U))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 8U))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xaU))))));
        vcdp->chgBit(oldp+9,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0xcU))))));
        vcdp->chgBit(oldp+10,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0xeU))))));
        vcdp->chgBit(oldp+11,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x10U))))));
        vcdp->chgBit(oldp+12,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x12U))))));
        vcdp->chgBit(oldp+13,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x14U))))));
        vcdp->chgBit(oldp+14,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x16U))))));
        vcdp->chgBit(oldp+15,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x18U))))));
        vcdp->chgBit(oldp+16,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1aU))))));
        vcdp->chgBit(oldp+17,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU))))));
        vcdp->chgBit(oldp+18,((0U != (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1eU))))));
    }
}

void VTestHarness::traceChgThis__2486(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20661);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x20U))))));
        vcdp->chgBit(oldp+1,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x22U))))));
        vcdp->chgBit(oldp+2,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x24U))))));
        vcdp->chgBit(oldp+3,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x26U))))));
        vcdp->chgBit(oldp+4,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x28U))))));
        vcdp->chgBit(oldp+5,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2aU))))));
        vcdp->chgBit(oldp+6,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2cU))))));
        vcdp->chgBit(oldp+7,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x2eU))))));
        vcdp->chgBit(oldp+8,((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 0x30U))))));
        vcdp->chgBit(oldp+9,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x32U)))));
        vcdp->chgCData(oldp+10,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0xaU))))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 8U))))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 6U))))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 4U))))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 2U))))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))),6);
        vcdp->chgSData(oldp+11,((((IData)((0U != (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x18U))))) 
                                  << 0xcU) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x16U))))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x14U))))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x12U))))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x10U))))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xeU))))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))) 
                                                                    << 4U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))) 
                                                                       << 3U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))) 
                                                                          << 2U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))) 
                                                                             << 1U) 
                                                                            | (0U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))))))))))))))),13);
    }
}

void VTestHarness::traceChgThis__2488(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20673);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)((0U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x24U))))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x22U))))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x20U))))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x1cU))))) 
                                                     << 1U) 
                                                    | (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x1aU)))))))))),6);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum),26);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        vcdp->chgCData(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                << 1U)),6);
        vcdp->chgSData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+5,((0x1fffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                << 9U) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                  >> 0x17U)))),29);
        vcdp->chgBit(oldp+6,((0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))));
        vcdp->chgBit(oldp+7,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 2U)))));
        vcdp->chgBit(oldp+8,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 4U)))));
        vcdp->chgBit(oldp+9,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                           >> 6U)))));
        vcdp->chgBit(oldp+10,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 8U)))));
        vcdp->chgBit(oldp+11,((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xaU)))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                     >> 0xcU))));
        vcdp->chgIData(oldp+13,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
        vcdp->chgBit(oldp+14,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21))));
    }
}

void VTestHarness::traceChgThis__2490(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20688);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25198[3];
    WData/*95:0*/ __Vtemp25199[3];
    WData/*95:0*/ __Vtemp25200[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                           >> 0x19U)))));
        vcdp->chgBit(oldp+1,(((0U != (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                            >> 0x19U))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                 ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                    >> 0x13U)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        vcdp->chgBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                    >> 0x1aU))));
        vcdp->chgBit(oldp+4,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 8U)))));
        vcdp->chgCData(oldp+5,((0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),8);
        vcdp->chgBit(oldp+6,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 7U)))));
        vcdp->chgCData(oldp+7,((0x7fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),7);
        vcdp->chgBit(oldp+8,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                       >> 6U)))));
        vcdp->chgCData(oldp+9,((0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)))),6);
        __Vtemp25198[0U] = 0U;
        __Vtemp25198[1U] = 0U;
        __Vtemp25198[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp25199, __Vtemp25198, 
                       (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
        __Vtemp25200[0U] = __Vtemp25199[0U];
        __Vtemp25200[1U] = __Vtemp25199[1U];
        __Vtemp25200[2U] = (1U & __Vtemp25199[2U]);
        vcdp->chgWData(oldp+10,(__Vtemp25200),65);
        vcdp->chgIData(oldp+13,((3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 2U))),27);
        vcdp->chgIData(oldp+14,((1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                       << 1U))),27);
        vcdp->chgIData(oldp+15,(((~ (1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U))) 
                                 & (3U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 2U)))),27);
        vcdp->chgBit(oldp+16,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)));
        vcdp->chgBit(oldp+17,((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T)));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        vcdp->chgIData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    }
}

void VTestHarness::traceChgThis__2492(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20708);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        vcdp->chgSData(oldp+1,((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        vcdp->chgIData(oldp+2,((0x7fffffU & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                              : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        vcdp->chgBit(oldp+3,(VL_LTES_III(1,4,4, 3U, 
                                         (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U)))));
        vcdp->chgBit(oldp+4,(VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        vcdp->chgBit(oldp+5,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                        >> 2U) : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U)))));
        vcdp->chgBit(oldp+6,((1U & (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                      >> 0x1aU) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                   >> 2U)) 
                                    | (0U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig))))));
        vcdp->chgBit(oldp+7,((1U & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                        >> 0x19U) : 
                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                     >> 0x18U)))));
        vcdp->chgBit(oldp+8,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                   & VL_GTES_III(1,2,2, 0U, 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                     >> 8U)))) 
                                  & ((0x4000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                      ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                 & (~ ((((~ ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x19U)
                                             : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 0x18U))) 
                                        & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                       & ((0x4000000U 
                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                           ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 2U)
                                           : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                              >> 1U))))))));
    }
}

void VTestHarness::traceChgThis__2494(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20717);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                              & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                      & VL_GTES_III(1,2,2, 0U, 
                                                    (3U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                        >> 8U)))) 
                                     & ((0x4000000U 
                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                         ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                            >> 1U) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                    & (~ ((((~ ((0x4000000U 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 2U)
                                                 : 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                 >> 1U))) 
                                            & ((0x4000000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x19U)
                                                : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U))) 
                                           & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                          & ((0x4000000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                              ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                 >> 2U)
                                              : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                 >> 1U)))))))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                 & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        vcdp->chgBit(oldp+7,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                              & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                                 | (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                >> 0x19U))) 
                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                          ^ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                             >> 0x13U))))))));
    }
}

void VTestHarness::traceChgThis__2496(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20725);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,((0x1ffU & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                             & (~ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
                                                    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                    ? 0x1c0U
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x40U
                                                   : 0U))) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                               ? 0x180U
                                               : 0U)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                              ? 0x1c0U
                                              : 0U)))),9);
        vcdp->chgIData(oldp+1,((0x7fffffU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero)) 
                                              | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                              ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x400000U
                                                  : 0U)
                                              : ((0x4000000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 1U)
                                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)))),23);
        vcdp->chgSData(oldp+2,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  << 9U) & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                                             << 9U) 
                                            | ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                                << 9U) 
                                               & (((0U 
                                                    != 
                                                    (3U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                        >> 0x19U))) 
                                                   << 9U) 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_signProd) 
                                                      << 9U) 
                                                     ^ 
                                                     (0x3ffe00U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                         >> 0xaU))))))) 
                                | (0x1ffU & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                & (~ 
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
                                                     | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                     ? 0x1c0U
                                                     : 0U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                    ? 0x40U
                                                    : 0U))) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x180U
                                                  : 0U)) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                 ? 0x1c0U
                                                 : 0U))))),10);
    }
}

void VTestHarness::traceChgThis__2498(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20728);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                  & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                     | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                          & VL_GTES_III(1,2,2, 0U, 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
                                                            >> 8U)))) 
                                         & ((0x4000000U 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                             ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                        & (~ ((((~ 
                                                 ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                                & ((0x4000000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 0x19U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 0x18U))) 
                                               & (0U 
                                                  != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                              & ((0x4000000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 2U)
                                                  : 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
                                                  >> 1U))))))) 
                                 << 1U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))),2);
        vcdp->chgCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_3) 
                                 << 2U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow))),3);
        vcdp->chgSData(oldp+2,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),9);
        vcdp->chgBit(oldp+3,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
    }
}

void VTestHarness::traceChgThis__2500(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20732);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1eU))))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__rawIn___05FisNaN));
        vcdp->chgBit(oldp+2,(((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU)))) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x1dU))))));
        vcdp->chgSData(oldp+3,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                  >> 0x17U)))),10);
        vcdp->chgIData(oldp+4,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgBit(oldp+5,((1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                             >> 0x17U)) 
                                    >> 8U))));
        vcdp->chgCData(oldp+6,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                 >> 0x17U)))),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__magJustBelowOne));
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__shiftedSig),55);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__alignedSig),34);
        vcdp->chgIData(oldp+12,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__alignedSig 
                                         >> 2U))),32);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__common_inexact));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__roundIncr_near_even));
        vcdp->chgBit(oldp+15,((1U & ((1U & (((IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                      >> 0x17U)) 
                                             >> 8U) 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__alignedSig 
                                                       >> 1U)))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__magJustBelowOne)))));
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__complUnroundedInt),32);
        vcdp->chgIData(oldp+17,(((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__roundIncr_near_even) 
                                        ^ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x20U))))
                                  ? ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__complUnroundedInt)
                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__complUnroundedInt)),32);
    }
}

void VTestHarness::traceChgThis__2502(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20750);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0x1fU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out 
                                                         >> 0x17U))))));
        vcdp->chgBit(oldp+1,(((0x3fffffffU == (0x3fffffffU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__alignedSig 
                                                          >> 2U)))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__roundIncr_near_even))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__common_overflow));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__invalidExc));
        vcdp->chgBit(oldp+4,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__invalidExc)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__common_overflow))) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__common_inexact))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__excSign));
        vcdp->chgIData(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__excSign)
                                  ? 0x80000000U : 0U) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__excSign)
                                    ? 0U : 0x7fffffffU))),32);
        vcdp->chgCData(oldp+7,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__invalidExc) 
                                 << 1U) | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_rec_fn_to_in_7__DOT__common_overflow)))),2);
        vcdp->chgBit(oldp+8,((1U & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU))))));
        vcdp->chgBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__ram_acc_read_resp_data_8_0_io_deq_bits_MPORT_data 
                                    >> 0x1fU))));
        vcdp->chgCData(oldp+10,((0x40U | (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist))))),8);
        vcdp->chgQData(oldp+11,((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T))),33);
        vcdp->chgIData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_absIn),32);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist),5);
        vcdp->chgIData(oldp+15,((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T)),32);
        vcdp->chgSData(oldp+16,((0x1ffU & ((IData)(0xc0U) 
                                           + (0x3ffU 
                                              & VL_EXTENDS_II(10,9, 
                                                              (0x40U 
                                                               | (0x1fU 
                                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist))))))))),10);
    }
}

void VTestHarness::traceChgThis__2504(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20767);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig),27);
        vcdp->chgBit(oldp+1,((0U != (2U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgBit(oldp+2,((0U != (1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))));
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        vcdp->chgSData(oldp+4,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & ((IData)(0xc0U) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_EXTENDS_II(10,9, 
                                                                             (0x40U 
                                                                              | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist))))))))) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (3U 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                              >> 0x18U)))))),11);
        vcdp->chgSData(oldp+5,((0x1ffU & ((0x7ffU & 
                                           VL_EXTENDS_II(11,10, 
                                                         (0x1ffU 
                                                          & ((IData)(0xc0U) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_EXTENDS_II(10,9, 
                                                                              (0x40U 
                                                                               | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (3U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                 >> 0x18U))))))),9);
    }
}

void VTestHarness::traceChgThis__2506(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20773);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        vcdp->chgSData(oldp+1,((0x1ffU & (((0x7ffU 
                                            & VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                (0x3ffU 
                                                                 & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                           + (0x7ffU 
                                              & VL_EXTENDS_II(11,10, 
                                                              (3U 
                                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))))) 
                                          & (~ ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T 
                                                            >> 0x1fU)))
                                                 ? 0U
                                                 : 0x1c0U))))),9);
        vcdp->chgIData(oldp+2,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T 
                                               >> 0x1fU)))
                                 ? (0x7fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                 : 0U)),23);
        vcdp->chgSData(oldp+3,(((0x200U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__ram_acc_read_resp_data_8_0_io_deq_bits_MPORT_data 
                                           >> 0x16U)) 
                                | (0x1ffU & (((0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & ((IData)(0xc0U) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                              + (0x7ffU 
                                                 & VL_EXTENDS_II(11,10, 
                                                                 (3U 
                                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 0x18U))))) 
                                             & (~ (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T 
                                                               >> 0x1fU)))
                                                    ? 0U
                                                    : 0x1c0U)))))),10);
    }
}

void VTestHarness::traceChgThis__2508(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20777);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out)))),24);
        vcdp->chgQData(oldp+1,((VL_ULL(0xffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                    >> 1U))))),48);
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x16U))))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        vcdp->chgBit(oldp+6,((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x1dU))))));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                            >> 0x20U)))));
        vcdp->chgSData(oldp+8,((0x3ffU & ((IData)(0x32eU) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                                         >> 0x17U)))))))),10);
        vcdp->chgIData(oldp+9,((0x3ffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                               << 0xfU) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                                 >> 0x11U)))),26);
        vcdp->chgBit(oldp+10,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])));
        vcdp->chgQData(oldp+11,((VL_ULL(0xffffffffffff) 
                                 & (((QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                     >> 1U))))),49);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                          >> 0x20U)))));
        vcdp->chgSData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp),10);
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig),27);
        vcdp->chgCData(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T_1) 
                                 << 4U)),5);
        vcdp->chgSData(oldp+18,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x17U)))),9);
        vcdp->chgBit(oldp+19,((3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                    >> 0x1eU))))));
        vcdp->chgSData(oldp+20,((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                   >> 0x17U)))),10);
    }
}

void VTestHarness::traceChgThis__2510(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+20798);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp25207[3];
    WData/*95:0*/ __Vtemp25208[3];
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                       >> 0x1dU)))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out)))),25);
        vcdp->chgSData(oldp+1,((0x7ffU & ((IData)(0x746U) 
                                          + VL_EXTENDS_II(11,10, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                                      >> 0x17U))))))),11);
        vcdp->chgSData(oldp+2,((0x3ffU & ((IData)(0x346U) 
                                          + (0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                                         >> 0x17U)))))))),10);
        vcdp->chgWData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5),78);
        __Vtemp25207[0U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[1U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[0U] 
                                          >> 3U));
        __Vtemp25207[1U] = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[2U] 
                             << 0x1dU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[1U] 
                                          >> 3U));
        __Vtemp25207[2U] = (0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT___mainAlignedSigC_T_5[2U] 
                                      >> 3U));
        vcdp->chgWData(oldp+6,(__Vtemp25207),75);
        vcdp->chgWData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC),76);
        vcdp->chgWData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        vcdp->chgSData(oldp+15,((0x3ffU & (((IData)(0x32eU) 
                                            + (0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                                           >> 0x17U)))))) 
                                           - (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                            >> 0x20U)))))),10);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        vcdp->chgBit(oldp+18,(((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                              >> 0x20U)))
                                ? (0U != (0xffffffU 
                                          & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                   >> 1U)))))
                                : (0U != (0x1ffffffU 
                                          & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
                                                >> 1U)))))));
        VL_EXTEND_WQ(81,50, __Vtemp25208, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
        vcdp->chgIData(oldp+19,((0x1fffffffU & ((__Vtemp25208[1U] 
                                                 << 0xbU) 
                                                | (__Vtemp25208[0U] 
                                                   >> 0x15U)))),29);
        vcdp->chgBit(oldp+20,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
    }
}
