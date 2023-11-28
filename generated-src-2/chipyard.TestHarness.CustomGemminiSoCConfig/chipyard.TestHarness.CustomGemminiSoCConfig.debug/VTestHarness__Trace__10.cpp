// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness___024root__trace_chg_sub_11(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_chg_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 30262);
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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgQData(oldp+0,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+2,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+3,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                          (0xfU 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                               >> 1U)))))),17);
        bufp->chgBit(oldp+4,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                           >> 0x12U)))));
        bufp->chgIData(oldp+5,((((IData)((0U != (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_3_io_out 
                                                            >> 0x1dU))))) 
                                 << 0x17U) | (0x7fffffU 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_3_io_out)))),24);
        bufp->chgQData(oldp+6,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                               >> 3U)))),48);
        bufp->chgWData(oldp+8,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgCData(oldp+11,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
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
        bufp->chgWData(oldp+12,(__Vtemp_h3b8d5987__0),65);
        bufp->chgBit(oldp+15,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+16,((0x3ffffffU & ((0U 
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
        bufp->chgSData(oldp+17,((0x7ffU & (((0x400U 
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
        bufp->chgBit(oldp+18,(VL_GTS_III(11, 0x6bU, 
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
        bufp->chgBit(oldp+19,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgQData(oldp+20,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out),33);
        bufp->chgBit(oldp+22,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                               & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                             >> 0x16U))))));
        bufp->chgBit(oldp+23,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+24,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+25,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                            >> 0x1dU)))))))));
        bufp->chgBit(oldp+26,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                             >> 0x20U)))));
        bufp->chgSData(oldp+27,((0x3ffU & ((IData)(0x32eU) 
                                           + (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                         >> 0x17U)))))),10);
        bufp->chgIData(oldp+28,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                << 0xdU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 0x13U)))),26);
        bufp->chgBit(oldp+29,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+30,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),49);
        bufp->chgBit(oldp+32,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                              >> 0x16U)))) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA))));
        bufp->chgBit(oldp+33,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                  >> 0x20U))));
        bufp->chgSData(oldp+34,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+35,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgBit(oldp+36,(0U));
        bufp->chgQData(oldp+37,((0x3ffffffffffffULL 
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
        bufp->chgQData(oldp+39,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+41,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+42,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
        bufp->chgBit(oldp+43,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))));
        bufp->chgIData(oldp+44,((((IData)((0U != (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out 
                                                             >> 0x1dU))))) 
                                  << 0x17U) | (0x7fffffU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_3_io_out)))),24);
        bufp->chgQData(oldp+45,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),48);
        bufp->chgWData(oldp+47,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgCData(oldp+50,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
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
        bufp->chgWData(oldp+51,(__Vtemp_h942418fa__0),65);
        bufp->chgBit(oldp+54,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+55,((0x3ffffffU & ((0U 
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
        bufp->chgSData(oldp+56,((0x7ffU & (((0x400U 
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
        bufp->chgBit(oldp+57,(VL_GTS_III(11, 0x6bU, 
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
        bufp->chgBit(oldp+58,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgQData(oldp+59,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out),33);
        bufp->chgQData(oldp+61,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out),33);
        bufp->chgBit(oldp+63,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                               & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                             >> 0x16U))))));
        bufp->chgBit(oldp+64,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+65,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+66,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                            >> 0x1dU)))))))));
        bufp->chgBit(oldp+67,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                             >> 0x20U)))));
        bufp->chgSData(oldp+68,((0x3ffU & ((IData)(0x32eU) 
                                           + (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                         >> 0x17U)))))),10);
        bufp->chgIData(oldp+69,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                << 0xdU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 0x13U)))),26);
        bufp->chgBit(oldp+70,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+71,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),49);
        bufp->chgBit(oldp+73,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                              >> 0x16U)))) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA))));
        bufp->chgBit(oldp+74,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                  >> 0x20U))));
        bufp->chgSData(oldp+75,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+76,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgBit(oldp+77,(0U));
        bufp->chgQData(oldp+78,((0x3ffffffffffffULL 
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
        bufp->chgQData(oldp+80,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+82,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+83,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U)))))),17);
        bufp->chgBit(oldp+84,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))));
        bufp->chgIData(oldp+85,((((IData)((0U != (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out 
                                                             >> 0x1dU))))) 
                                  << 0x17U) | (0x7fffffU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_4_io_out)))),24);
        bufp->chgQData(oldp+86,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                  >> 3U)))),48);
        bufp->chgWData(oldp+88,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgCData(oldp+91,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
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
        bufp->chgWData(oldp+92,(__Vtemp_he2cded29__0),65);
        bufp->chgBit(oldp+95,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                               | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+96,((0x3ffffffU & ((0U 
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
        bufp->chgSData(oldp+97,((0x7ffU & (((0x400U 
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
        bufp->chgBit(oldp+98,(VL_GTS_III(11, 0x6bU, 
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
        bufp->chgBit(oldp+99,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgQData(oldp+100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out),33);
        bufp->chgBit(oldp+102,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                              >> 0x16U))))));
        bufp->chgBit(oldp+103,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+104,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+105,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+106,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                              >> 0x20U)))));
        bufp->chgSData(oldp+107,((0x3ffU & ((IData)(0x32eU) 
                                            + (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                          >> 0x17U)))))),10);
        bufp->chgIData(oldp+108,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+110,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),49);
        bufp->chgBit(oldp+112,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                               >> 0x16U)))) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA))));
        bufp->chgBit(oldp+113,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                   >> 0x20U))));
        bufp->chgSData(oldp+114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgBit(oldp+116,(0U));
        bufp->chgQData(oldp+117,((0x3ffffffffffffULL 
                                  & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
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
        bufp->chgQData(oldp+119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+121,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+122,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+123,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgIData(oldp+124,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_in_to_rec_fn_4_io_out)))),24);
        bufp->chgQData(oldp+125,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgWData(oldp+127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgCData(oldp+130,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
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
        bufp->chgWData(oldp+131,(__Vtemp_h22f64109__0),65);
        bufp->chgBit(oldp+134,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+135,((0x3ffffffU & ((0U 
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
                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))),26);
        bufp->chgSData(oldp+136,((0x7ffU & (((0x400U 
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
        bufp->chgBit(oldp+137,(VL_GTS_III(11, 0x6bU, 
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
        bufp->chgBit(oldp+138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgIData(oldp+139,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+140,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+142,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out)))));
        bufp->chgQData(oldp+143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig),55);
        bufp->chgBit(oldp+145,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+146,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+147,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+148,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+149,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out))))));
        bufp->chgBit(oldp+150,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+151,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+152,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+153,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+154,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out)))));
        bufp->chgQData(oldp+155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig),55);
        bufp->chgBit(oldp+157,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__roundIncr));
        bufp->chgIData(oldp+159,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+160,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+161,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
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
        bufp->chgBit(oldp+162,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out))))));
        bufp->chgBit(oldp+163,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_1__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_1_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+164,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+165,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+167,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out)))));
        bufp->chgQData(oldp+168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig),55);
        bufp->chgBit(oldp+170,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+171,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+172,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+173,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+174,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out))))));
        bufp->chgBit(oldp+175,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_10__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_10_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+176,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+177,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+179,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out)))));
        bufp->chgQData(oldp+180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig),55);
        bufp->chgBit(oldp+182,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__roundIncr));
        bufp->chgIData(oldp+184,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+185,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+186,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
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
        bufp->chgBit(oldp+187,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out))))));
        bufp->chgBit(oldp+188,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_11__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_11_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+189,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+190,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+192,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out)))));
        bufp->chgQData(oldp+193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig),55);
        bufp->chgBit(oldp+195,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+196,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+197,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+198,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+199,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out))))));
        bufp->chgBit(oldp+200,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_12__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_12_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+201,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+202,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+204,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out)))));
        bufp->chgQData(oldp+205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig),55);
        bufp->chgBit(oldp+207,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+208,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__roundIncr));
        bufp->chgIData(oldp+209,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+210,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+211,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
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
        bufp->chgBit(oldp+212,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out))))));
        bufp->chgBit(oldp+213,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_13__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_13_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+214,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+215,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+217,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out)))));
        bufp->chgQData(oldp+218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig),55);
        bufp->chgBit(oldp+220,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+221,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+222,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+223,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+224,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out))))));
        bufp->chgBit(oldp+225,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_14__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_14_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+226,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+227,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+229,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out)))));
        bufp->chgQData(oldp+230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig),55);
        bufp->chgBit(oldp+232,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__roundIncr));
        bufp->chgIData(oldp+234,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+235,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+236,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
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
        bufp->chgBit(oldp+237,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out))))));
        bufp->chgBit(oldp+238,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_15__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_15_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+239,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+240,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+242,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out)))));
        bufp->chgQData(oldp+243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig),55);
        bufp->chgBit(oldp+245,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+246,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+247,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+248,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+249,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out))))));
        bufp->chgBit(oldp+250,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_16__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_16_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+251,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+252,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+254,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out)))));
        bufp->chgQData(oldp+255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig),55);
        bufp->chgBit(oldp+257,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__roundIncr));
        bufp->chgIData(oldp+259,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+260,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+261,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
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
        bufp->chgBit(oldp+262,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out))))));
        bufp->chgBit(oldp+263,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_17__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_17_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+264,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+265,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+267,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out)))));
        bufp->chgQData(oldp+268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig),55);
        bufp->chgBit(oldp+270,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+271,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+272,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+273,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+274,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out))))));
        bufp->chgBit(oldp+275,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_18__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_18_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+276,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+277,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+279,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out)))));
        bufp->chgQData(oldp+280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig),55);
        bufp->chgBit(oldp+282,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__roundIncr));
        bufp->chgIData(oldp+284,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+285,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+286,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
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
        bufp->chgBit(oldp+287,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out))))));
        bufp->chgBit(oldp+288,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_19__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_19_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+289,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+290,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+292,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out)))));
        bufp->chgQData(oldp+293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig),55);
        bufp->chgBit(oldp+295,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+296,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+297,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+298,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+299,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out))))));
        bufp->chgBit(oldp+300,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_2__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_2_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+301,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+302,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+304,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out)))));
        bufp->chgQData(oldp+305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig),55);
        bufp->chgBit(oldp+307,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+308,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+309,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+310,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+311,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out))))));
        bufp->chgBit(oldp+312,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_20__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_20_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+313,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+314,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+316,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out)))));
        bufp->chgQData(oldp+317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig),55);
        bufp->chgBit(oldp+319,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__roundIncr));
        bufp->chgIData(oldp+321,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+322,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+323,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
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
        bufp->chgBit(oldp+324,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out))))));
        bufp->chgBit(oldp+325,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_21__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_21_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+326,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+327,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+329,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out)))));
        bufp->chgQData(oldp+330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig),55);
        bufp->chgBit(oldp+332,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+333,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+334,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+335,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+336,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out))))));
        bufp->chgBit(oldp+337,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_22__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_22_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+338,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+339,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+341,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out)))));
        bufp->chgQData(oldp+342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig),55);
        bufp->chgBit(oldp+344,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__roundIncr));
        bufp->chgIData(oldp+346,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+347,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+348,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
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
        bufp->chgBit(oldp+349,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out))))));
        bufp->chgBit(oldp+350,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_23__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_23_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+351,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+352,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+354,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out)))));
        bufp->chgQData(oldp+355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig),55);
        bufp->chgBit(oldp+357,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+358,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+359,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+360,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+361,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out))))));
        bufp->chgBit(oldp+362,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_24__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_24_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+363,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+364,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+366,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out)))));
        bufp->chgQData(oldp+367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig),55);
        bufp->chgBit(oldp+369,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__roundIncr));
        bufp->chgIData(oldp+371,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+372,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+373,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
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
        bufp->chgBit(oldp+374,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out))))));
        bufp->chgBit(oldp+375,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_25__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_25_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+376,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+377,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+378,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+379,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out)))));
        bufp->chgQData(oldp+380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig),55);
        bufp->chgBit(oldp+382,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+383,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+384,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+385,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+386,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out))))));
        bufp->chgBit(oldp+387,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_26__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_26_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+388,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+389,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+390,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+391,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out)))));
        bufp->chgQData(oldp+392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig),55);
        bufp->chgBit(oldp+394,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__roundIncr));
        bufp->chgIData(oldp+396,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+397,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+398,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
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
        bufp->chgBit(oldp+399,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out))))));
        bufp->chgBit(oldp+400,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_27__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_27_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+401,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
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
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                            >> 0x17U))))))))
                                   ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN)) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                           >> 0x20U)) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+402,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
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
                                             | (1U 
                                                & (((~ 
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
        bufp->chgBit(oldp+403,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+404,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out)))));
        bufp->chgQData(oldp+405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig),55);
        bufp->chgBit(oldp+407,((1U & ((1U & (IData)(
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
        bufp->chgIData(oldp+408,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+409,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+410,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
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
                                       : (0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                                            >> 0x17U)))))))));
        bufp->chgBit(oldp+411,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out))))));
        bufp->chgBit(oldp+412,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_28__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_28_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+413,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+414,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
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
        bufp->chgBit(oldp+415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+416,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out)))));
        bufp->chgQData(oldp+417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig),55);
        bufp->chgBit(oldp+419,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__roundIncr));
        bufp->chgIData(oldp+421,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+422,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+423,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
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
        bufp->chgBit(oldp+424,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out))))));
        bufp->chgBit(oldp+425,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_29__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_29_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+426,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
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
                                       << 0x1fU) | 
                                      (0x7fffffffU 
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
        bufp->chgCData(oldp+427,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
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
}
