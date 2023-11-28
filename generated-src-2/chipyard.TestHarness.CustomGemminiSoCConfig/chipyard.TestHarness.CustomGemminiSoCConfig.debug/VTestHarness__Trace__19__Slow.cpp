// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_11(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_full_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__0;
    VlWide<3>/*95:0*/ __Vtemp_h79e241c0__0;
    VlWide<3>/*95:0*/ __Vtemp_ha3167e89__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b8d5987__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__1;
    VlWide<3>/*95:0*/ __Vtemp_h80efcb88__0;
    VlWide<3>/*95:0*/ __Vtemp_h2f1f7862__0;
    VlWide<3>/*95:0*/ __Vtemp_h942418fa__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__2;
    VlWide<3>/*95:0*/ __Vtemp_h66937f2c__0;
    VlWide<3>/*95:0*/ __Vtemp_h9a264752__0;
    VlWide<3>/*95:0*/ __Vtemp_he2cded29__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__3;
    VlWide<3>/*95:0*/ __Vtemp_hd2f0b46b__0;
    VlWide<3>/*95:0*/ __Vtemp_hf3e115fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h22f64109__0;
    // Body
    bufp->fullCData(oldp+30264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
    bufp->fullIData(oldp+30265,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
    bufp->fullBit(oldp+30266,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))));
    bufp->fullIData(oldp+30267,((((IData)((0U != (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_3_io_out 
                                                             >> 0x1dU))))) 
                                  << 0x17U) | (0x7fffffU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_3_io_out)))),24);
    bufp->fullQData(oldp+30268,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),48);
    bufp->fullWData(oldp+30270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
    bufp->fullCData(oldp+30273,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_3_io_out 
                                                 >> 0x16U)))) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                 << 4U)),5);
    __Vtemp_h5f174993__0[0U] = 0U;
    __Vtemp_h5f174993__0[1U] = 0U;
    __Vtemp_h5f174993__0[2U] = 1U;
    VL_EXTEND_WI(65,6, __Vtemp_h79e241c0__0, (0x3fU 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    VL_SHIFTRS_WWW(65,65,65, __Vtemp_ha3167e89__0, __Vtemp_h5f174993__0, __Vtemp_h79e241c0__0);
    __Vtemp_h3b8d5987__0[0U] = __Vtemp_ha3167e89__0[0U];
    __Vtemp_h3b8d5987__0[1U] = __Vtemp_ha3167e89__0[1U];
    __Vtemp_h3b8d5987__0[2U] = (1U & __Vtemp_ha3167e89__0[2U]);
    bufp->fullWData(oldp+30274,(__Vtemp_h3b8d5987__0),65);
    bufp->fullBit(oldp+30277,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
    bufp->fullIData(oldp+30278,((0x3ffffffU & ((0U 
                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                ? (
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x1ffffffU 
                                                     & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                         >> 2U) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                   & (~ 
                                                      (((0U 
                                                         != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                        ? 
                                                       (1U 
                                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                           << 1U))
                                                        : 0U)))
                                                : (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))),26);
    bufp->fullSData(oldp+30279,((0x7ffU & (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                 ? 
                                                (((IData)(1U) 
                                                  + 
                                                  (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                 & (~ 
                                                    (((0U 
                                                       != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                      ? 
                                                     (1U 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                         << 1U))
                                                      : 0U)))
                                                 : 
                                                (0x1ffffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                     >> 2U) 
                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                               >> 0x18U))))),11);
    bufp->fullBit(oldp+30280,(VL_GTS_III(11, 0x6bU, 
                                         (0x7ffU & 
                                          (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                 ? 
                                                (((IData)(1U) 
                                                  + 
                                                  (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                 & (~ 
                                                    (((0U 
                                                       != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                      ? 
                                                     (1U 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                         << 1U))
                                                      : 0U)))
                                                 : 
                                                (0x1ffffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                     >> 2U) 
                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                               >> 0x18U)))))));
    bufp->fullBit(oldp+30281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullQData(oldp+30282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out),33);
    bufp->fullBit(oldp+30284,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                               & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+30285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
    bufp->fullBit(oldp+30286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
    bufp->fullBit(oldp+30287,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                            >> 0x1dU)))))))));
    bufp->fullBit(oldp+30288,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                             >> 0x20U)))));
    bufp->fullSData(oldp+30289,((0x3ffU & ((IData)(0x32eU) 
                                           + (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                         >> 0x17U)))))),10);
    bufp->fullIData(oldp+30290,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                << 0xdU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 0x13U)))),26);
    bufp->fullBit(oldp+30291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
    bufp->fullQData(oldp+30292,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),49);
    bufp->fullBit(oldp+30294,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                              >> 0x16U)))) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA))));
    bufp->fullBit(oldp+30295,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                  >> 0x20U))));
    bufp->fullSData(oldp+30296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
    bufp->fullIData(oldp+30297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
    bufp->fullBit(oldp+30298,(0U));
    bufp->fullQData(oldp+30299,((0x3ffffffffffffULL 
                                 & ((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                   >> 0x20U)))
                                     ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                            << 0x18U) 
                                           | (QData)((IData)(
                                                             (0xffffffU 
                                                              & (IData)(
                                                                        (0xffffffULL 
                                                                         & ((0xffffffffe0ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                                                                << 5U)) 
                                                                            | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                                               >> 0x1bU)))))))))
                                     : (((QData)((IData)(
                                                         (3U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                             >> 0xbU)))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (0x7fffffULL 
                                                                         & ((0x7ffffffff0ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                                                                << 4U)) 
                                                                            | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                                               >> 0x1cU)))))))))))),50);
    bufp->fullQData(oldp+30301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
    bufp->fullCData(oldp+30303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
    bufp->fullIData(oldp+30304,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
    bufp->fullBit(oldp+30305,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))));
    bufp->fullIData(oldp+30306,((((IData)((0U != (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                             >> 0x1dU))))) 
                                  << 0x17U) | (0x7fffffU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out)))),24);
    bufp->fullQData(oldp+30307,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),48);
    bufp->fullWData(oldp+30309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
    bufp->fullCData(oldp+30312,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                 >> 0x16U)))) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                 << 4U)),5);
    __Vtemp_h5f174993__1[0U] = 0U;
    __Vtemp_h5f174993__1[1U] = 0U;
    __Vtemp_h5f174993__1[2U] = 1U;
    VL_EXTEND_WI(65,6, __Vtemp_h80efcb88__0, (0x3fU 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    VL_SHIFTRS_WWW(65,65,65, __Vtemp_h2f1f7862__0, __Vtemp_h5f174993__1, __Vtemp_h80efcb88__0);
    __Vtemp_h942418fa__0[0U] = __Vtemp_h2f1f7862__0[0U];
    __Vtemp_h942418fa__0[1U] = __Vtemp_h2f1f7862__0[1U];
    __Vtemp_h942418fa__0[2U] = (1U & __Vtemp_h2f1f7862__0[2U]);
    bufp->fullWData(oldp+30313,(__Vtemp_h942418fa__0),65);
    bufp->fullBit(oldp+30316,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
    bufp->fullIData(oldp+30317,((0x3ffffffU & ((0U 
                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                ? (
                                                   ((IData)(1U) 
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
                                                : (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))),26);
    bufp->fullSData(oldp+30318,((0x7ffU & (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
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
                                               >> 0x18U))))),11);
    bufp->fullBit(oldp+30319,(VL_GTS_III(11, 0x6bU, 
                                         (0x7ffU & 
                                          (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
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
                                               >> 0x18U)))))));
    bufp->fullBit(oldp+30320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullQData(oldp+30321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out),33);
    bufp->fullQData(oldp+30323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out),33);
    bufp->fullBit(oldp+30325,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                               & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+30326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
    bufp->fullBit(oldp+30327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
    bufp->fullBit(oldp+30328,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                            >> 0x1dU)))))))));
    bufp->fullBit(oldp+30329,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                             >> 0x20U)))));
    bufp->fullSData(oldp+30330,((0x3ffU & ((IData)(0x32eU) 
                                           + (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                         >> 0x17U)))))),10);
    bufp->fullIData(oldp+30331,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                << 0xdU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 0x13U)))),26);
    bufp->fullBit(oldp+30332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
    bufp->fullQData(oldp+30333,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),49);
    bufp->fullBit(oldp+30335,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                              >> 0x16U)))) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA))));
    bufp->fullBit(oldp+30336,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                  >> 0x20U))));
    bufp->fullSData(oldp+30337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
    bufp->fullIData(oldp+30338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
    bufp->fullBit(oldp+30339,(0U));
    bufp->fullQData(oldp+30340,((0x3ffffffffffffULL 
                                 & ((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                   >> 0x20U)))
                                     ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                            << 0x18U) 
                                           | (QData)((IData)(
                                                             (0xffffffU 
                                                              & (IData)(
                                                                        (0xffffffULL 
                                                                         & ((0xffffffffe0ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                                                                << 5U)) 
                                                                            | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                                               >> 0x1bU)))))))))
                                     : (((QData)((IData)(
                                                         (3U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                             >> 0xbU)))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (0x7fffffULL 
                                                                         & ((0x7ffffffff0ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                                                                << 4U)) 
                                                                            | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                                               >> 0x1cU)))))))))))),50);
    bufp->fullQData(oldp+30342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
    bufp->fullCData(oldp+30344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
    bufp->fullIData(oldp+30345,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
    bufp->fullBit(oldp+30346,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))));
    bufp->fullIData(oldp+30347,((((IData)((0U != (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                             >> 0x1dU))))) 
                                  << 0x17U) | (0x7fffffU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out)))),24);
    bufp->fullQData(oldp+30348,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),48);
    bufp->fullWData(oldp+30350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
    bufp->fullCData(oldp+30353,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                 >> 0x16U)))) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                 << 4U)),5);
    __Vtemp_h5f174993__2[0U] = 0U;
    __Vtemp_h5f174993__2[1U] = 0U;
    __Vtemp_h5f174993__2[2U] = 1U;
    VL_EXTEND_WI(65,6, __Vtemp_h66937f2c__0, (0x3fU 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    VL_SHIFTRS_WWW(65,65,65, __Vtemp_h9a264752__0, __Vtemp_h5f174993__2, __Vtemp_h66937f2c__0);
    __Vtemp_he2cded29__0[0U] = __Vtemp_h9a264752__0[0U];
    __Vtemp_he2cded29__0[1U] = __Vtemp_h9a264752__0[1U];
    __Vtemp_he2cded29__0[2U] = (1U & __Vtemp_h9a264752__0[2U]);
    bufp->fullWData(oldp+30354,(__Vtemp_he2cded29__0),65);
    bufp->fullBit(oldp+30357,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
    bufp->fullIData(oldp+30358,((0x3ffffffU & ((0U 
                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                ? (
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x1ffffffU 
                                                     & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                         >> 2U) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                   & (~ 
                                                      (((0U 
                                                         != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                        ? 
                                                       (1U 
                                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                           << 1U))
                                                        : 0U)))
                                                : (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))),26);
    bufp->fullSData(oldp+30359,((0x7ffU & (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                 ? 
                                                (((IData)(1U) 
                                                  + 
                                                  (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                 & (~ 
                                                    (((0U 
                                                       != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                      ? 
                                                     (1U 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                         << 1U))
                                                      : 0U)))
                                                 : 
                                                (0x1ffffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                     >> 2U) 
                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                               >> 0x18U))))),11);
    bufp->fullBit(oldp+30360,(VL_GTS_III(11, 0x6bU, 
                                         (0x7ffU & 
                                          (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                 ? 
                                                (((IData)(1U) 
                                                  + 
                                                  (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                                 & (~ 
                                                    (((0U 
                                                       != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                                      ? 
                                                     (1U 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                         << 1U))
                                                      : 0U)))
                                                 : 
                                                (0x1ffffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                     >> 2U) 
                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))) 
                                               >> 0x18U)))))));
    bufp->fullBit(oldp+30361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullQData(oldp+30362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out),33);
    bufp->fullBit(oldp+30364,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                               & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+30365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
    bufp->fullBit(oldp+30366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
    bufp->fullBit(oldp+30367,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                            >> 0x1dU)))))))));
    bufp->fullBit(oldp+30368,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                             >> 0x20U)))));
    bufp->fullSData(oldp+30369,((0x3ffU & ((IData)(0x32eU) 
                                           + (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                         >> 0x17U)))))),10);
    bufp->fullIData(oldp+30370,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                << 0xdU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 0x13U)))),26);
    bufp->fullBit(oldp+30371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
    bufp->fullQData(oldp+30372,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),49);
    bufp->fullBit(oldp+30374,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                              >> 0x16U)))) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA))));
    bufp->fullBit(oldp+30375,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                  >> 0x20U))));
    bufp->fullSData(oldp+30376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
    bufp->fullIData(oldp+30377,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
    bufp->fullBit(oldp+30378,(0U));
    bufp->fullQData(oldp+30379,((0x3ffffffffffffULL 
                                 & ((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                   >> 0x20U)))
                                     ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                            << 0x18U) 
                                           | (QData)((IData)(
                                                             (0xffffffU 
                                                              & (IData)(
                                                                        (0xffffffULL 
                                                                         & ((0xffffffffe0ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                                                                << 5U)) 
                                                                            | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                                               >> 0x1bU)))))))))
                                     : (((QData)((IData)(
                                                         (3U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                             >> 0xbU)))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (0x7fffffULL 
                                                                         & ((0x7ffffffff0ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                                                                << 4U)) 
                                                                            | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                                               >> 0x1cU)))))))))))),50);
    bufp->fullQData(oldp+30381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
    bufp->fullCData(oldp+30383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
    bufp->fullIData(oldp+30384,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
    bufp->fullBit(oldp+30385,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))));
    bufp->fullIData(oldp+30386,((((IData)((0U != (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                             >> 0x1dU))))) 
                                  << 0x17U) | (0x7fffffU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out)))),24);
    bufp->fullQData(oldp+30387,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),48);
    bufp->fullWData(oldp+30389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
    bufp->fullCData(oldp+30392,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                 >> 0x16U)))) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                 << 4U)),5);
    __Vtemp_h5f174993__3[0U] = 0U;
    __Vtemp_h5f174993__3[1U] = 0U;
    __Vtemp_h5f174993__3[2U] = 1U;
    VL_EXTEND_WI(65,6, __Vtemp_hd2f0b46b__0, (0x3fU 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    VL_SHIFTRS_WWW(65,65,65, __Vtemp_hf3e115fb__0, __Vtemp_h5f174993__3, __Vtemp_hd2f0b46b__0);
    __Vtemp_h22f64109__0[0U] = __Vtemp_hf3e115fb__0[0U];
    __Vtemp_h22f64109__0[1U] = __Vtemp_hf3e115fb__0[1U];
    __Vtemp_h22f64109__0[2U] = (1U & __Vtemp_hf3e115fb__0[2U]);
    bufp->fullWData(oldp+30393,(__Vtemp_h22f64109__0),65);
    bufp->fullBit(oldp+30396,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
    bufp->fullIData(oldp+30397,((0x3ffffffU & ((0U 
                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                                                ? (
                                                   ((IData)(1U) 
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
                                                : (0x1ffffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                       >> 2U) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))),26);
    bufp->fullSData(oldp+30398,((0x7ffU & (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
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
                                               >> 0x18U))))),11);
    bufp->fullBit(oldp+30399,(VL_GTS_III(11, 0x6bU, 
                                         (0x7ffU & 
                                          (((0x400U 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
                                           + (3U & 
                                              (((0U 
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
                                               >> 0x18U)))))));
    bufp->fullBit(oldp+30400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullIData(oldp+30401,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30402,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30403,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30404,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)))));
    bufp->fullQData(oldp+30405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30407,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30408,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30409,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30410,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30411,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out))))));
    bufp->fullBit(oldp+30412,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30413,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30414,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30416,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)))));
    bufp->fullQData(oldp+30417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30419,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr));
    bufp->fullIData(oldp+30421,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30422,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30423,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30424,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out))))));
    bufp->fullBit(oldp+30425,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30426,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30427,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30428,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30429,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)))));
    bufp->fullQData(oldp+30430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30432,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30433,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30434,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30435,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30436,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out))))));
    bufp->fullBit(oldp+30437,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30438,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30439,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30440,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30441,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)))));
    bufp->fullQData(oldp+30442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30444,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30445,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr));
    bufp->fullIData(oldp+30446,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30447,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30448,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30449,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out))))));
    bufp->fullBit(oldp+30450,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30451,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30452,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30453,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30454,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)))));
    bufp->fullQData(oldp+30455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30457,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30458,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30459,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30460,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30461,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out))))));
    bufp->fullBit(oldp+30462,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30463,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30464,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30466,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)))));
    bufp->fullQData(oldp+30467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30469,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr));
    bufp->fullIData(oldp+30471,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30472,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30473,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30474,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out))))));
    bufp->fullBit(oldp+30475,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30476,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30477,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30479,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)))));
    bufp->fullQData(oldp+30480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30482,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30483,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30484,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30485,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30486,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out))))));
    bufp->fullBit(oldp+30487,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30488,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30489,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30491,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)))));
    bufp->fullQData(oldp+30492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30494,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr));
    bufp->fullIData(oldp+30496,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30497,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30498,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30499,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out))))));
    bufp->fullBit(oldp+30500,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30501,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30502,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30504,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)))));
    bufp->fullQData(oldp+30505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30507,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30508,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30509,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30510,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30511,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out))))));
    bufp->fullBit(oldp+30512,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30513,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30514,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30515,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30516,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)))));
    bufp->fullQData(oldp+30517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30519,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30520,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr));
    bufp->fullIData(oldp+30521,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30522,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30523,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30524,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out))))));
    bufp->fullBit(oldp+30525,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30526,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30527,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30529,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)))));
    bufp->fullQData(oldp+30530,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30532,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30533,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30534,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30535,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30536,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out))))));
    bufp->fullBit(oldp+30537,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30538,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30539,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30541,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)))));
    bufp->fullQData(oldp+30542,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30544,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr));
    bufp->fullIData(oldp+30546,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30547,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30548,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30549,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out))))));
    bufp->fullBit(oldp+30550,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30551,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30552,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30554,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)))));
    bufp->fullQData(oldp+30555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30557,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30558,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30559,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30560,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30561,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out))))));
    bufp->fullBit(oldp+30562,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30563,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30564,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30566,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)))));
    bufp->fullQData(oldp+30567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30569,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30570,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30571,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30572,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30573,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out))))));
    bufp->fullBit(oldp+30574,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30575,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30576,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30578,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)))));
    bufp->fullQData(oldp+30579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30581,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30582,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr));
    bufp->fullIData(oldp+30583,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30584,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30585,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30586,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out))))));
    bufp->fullBit(oldp+30587,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30588,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30589,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30591,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)))));
    bufp->fullQData(oldp+30592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30594,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30595,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30596,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30597,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30598,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out))))));
    bufp->fullBit(oldp+30599,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30600,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30601,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30602,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30603,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)))));
    bufp->fullQData(oldp+30604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30606,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr));
    bufp->fullIData(oldp+30608,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30609,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30610,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30611,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out))))));
    bufp->fullBit(oldp+30612,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30613,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30614,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30615,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30616,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)))));
    bufp->fullQData(oldp+30617,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30619,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30620,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30621,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30622,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30623,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out))))));
    bufp->fullBit(oldp+30624,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30625,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30626,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30628,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)))));
    bufp->fullQData(oldp+30629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30631,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr));
    bufp->fullIData(oldp+30633,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30634,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30635,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30636,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out))))));
    bufp->fullBit(oldp+30637,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30638,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30639,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30640,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30641,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)))));
    bufp->fullQData(oldp+30642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30644,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30645,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30646,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30647,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30648,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out))))));
    bufp->fullBit(oldp+30649,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30650,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30651,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30653,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)))));
    bufp->fullQData(oldp+30654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30656,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr));
    bufp->fullIData(oldp+30658,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30659,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30660,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30661,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out))))));
    bufp->fullBit(oldp+30662,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30663,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30664,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                                >> 0x1dU)))))))))),3);
    bufp->fullBit(oldp+30665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30666,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)))));
    bufp->fullQData(oldp+30667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30669,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                           >> 0x1dU))))))));
    bufp->fullIData(oldp+30670,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30671,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30672,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                              >> 0x17U)))))))));
    bufp->fullBit(oldp+30673,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out))))));
    bufp->fullBit(oldp+30674,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30675,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30676,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                               >> 0x1dU))))))))),3);
    bufp->fullBit(oldp+30677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN));
    bufp->fullBit(oldp+30678,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)))));
    bufp->fullQData(oldp+30679,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig),55);
    bufp->fullBit(oldp+30681,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                        >> 0x1dU)))))));
    bufp->fullBit(oldp+30682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr));
    bufp->fullIData(oldp+30683,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig 
                                            >> 0x17U)))),32);
    bufp->fullBit(oldp+30684,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                          >> 0x17U))))));
    bufp->fullBit(oldp+30685,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr))))))));
    bufp->fullBit(oldp+30686,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out))))));
    bufp->fullBit(oldp+30687,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                  >> 0x20U))));
    bufp->fullIData(oldp+30688,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
    bufp->fullCData(oldp+30689,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                               >> 0x1dU))))))))),3);
}
