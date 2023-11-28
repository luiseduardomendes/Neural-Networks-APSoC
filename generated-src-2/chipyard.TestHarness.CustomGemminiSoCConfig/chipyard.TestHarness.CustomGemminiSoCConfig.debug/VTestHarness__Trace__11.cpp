// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness___024root__trace_chg_sub_12(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_chg_sub_12\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 30690);
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__0;
    VlWide<3>/*95:0*/ __Vtemp_h4af10d9e__0;
    VlWide<3>/*95:0*/ __Vtemp_hff1e3ee2__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e258a1d__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__1;
    VlWide<3>/*95:0*/ __Vtemp_h8aa70b2d__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c043058__0;
    VlWide<3>/*95:0*/ __Vtemp_hec3cec70__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__2;
    VlWide<3>/*95:0*/ __Vtemp_h7b8d0d9b__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8e32415__0;
    VlWide<3>/*95:0*/ __Vtemp_ha5964c1d__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__3;
    VlWide<3>/*95:0*/ __Vtemp_h20c1ca08__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd19cc5d__0;
    VlWide<3>/*95:0*/ __Vtemp_hd01c4467__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__4;
    VlWide<3>/*95:0*/ __Vtemp_h39a32d08__0;
    VlWide<3>/*95:0*/ __Vtemp_he74b80fc__0;
    VlWide<3>/*95:0*/ __Vtemp_h74607696__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__5;
    VlWide<3>/*95:0*/ __Vtemp_h8ccb27d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4039247b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d952fd8__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__6;
    VlWide<3>/*95:0*/ __Vtemp_hb96e89f1__0;
    VlWide<3>/*95:0*/ __Vtemp_h1daadf9e__0;
    VlWide<3>/*95:0*/ __Vtemp_hf06eb2ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__7;
    VlWide<3>/*95:0*/ __Vtemp_h6c32bc76__0;
    VlWide<3>/*95:0*/ __Vtemp_hb84ecc3e__0;
    VlWide<3>/*95:0*/ __Vtemp_h3bc0d0aa__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__8;
    VlWide<3>/*95:0*/ __Vtemp_hdfc9756d__0;
    VlWide<3>/*95:0*/ __Vtemp_hd163d1d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h01579b0d__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__9;
    VlWide<3>/*95:0*/ __Vtemp_h68a00dd9__0;
    VlWide<3>/*95:0*/ __Vtemp_hbb42c710__0;
    VlWide<3>/*95:0*/ __Vtemp_h8e788682__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__10;
    VlWide<3>/*95:0*/ __Vtemp_h29daed7a__0;
    VlWide<3>/*95:0*/ __Vtemp_h8e2b7a56__0;
    VlWide<3>/*95:0*/ __Vtemp_h2f83a839__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__11;
    VlWide<3>/*95:0*/ __Vtemp_h2e727827__0;
    VlWide<3>/*95:0*/ __Vtemp_h3f8cf64c__0;
    VlWide<3>/*95:0*/ __Vtemp_hd808eadb__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__12;
    VlWide<3>/*95:0*/ __Vtemp_h0ef9d50f__0;
    VlWide<3>/*95:0*/ __Vtemp_h3aafcea9__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbbda779__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__13;
    VlWide<3>/*95:0*/ __Vtemp_ha2bf1161__0;
    VlWide<3>/*95:0*/ __Vtemp_hc81de283__0;
    VlWide<3>/*95:0*/ __Vtemp_h1333620e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+0,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+1,((IData)((0x7f800000ULL 
                                      == (0xff800000ULL 
                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)))));
        bufp->chgQData(oldp+2,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig),55);
        bufp->chgBit(oldp+4,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                             >> 0x1fU)))
                               ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT___roundIncr_near_even_T_6))
                               : (0U != (7U & (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                       >> 0x1dU)))))));
        bufp->chgBit(oldp+5,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr));
        bufp->chgIData(oldp+6,(((- (IData)((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                          >> 0x20U))))) 
                                ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig 
                                           >> 0x17U)))),32);
        bufp->chgBit(oldp+7,((0x1fU == (0xffU & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                         >> 0x17U))))));
        bufp->chgBit(oldp+8,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                       >> 0x1fU)) & 
                              ((0U != (7U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                     >> 0x1cU)))) 
                               | ((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                 >> 0x20U)))
                                   ? (IData)(((0xf800000ULL 
                                               == (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                              & ((0ULL 
                                                  != 
                                                  (0x3fffffff800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)) 
                                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr))))
                                   : ((0x1fU == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                                            >> 0x17U)))) 
                                      | ((IData)(((0xf000000ULL 
                                                   == 
                                                   (0x7f800000ULL 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out)) 
                                                  & (0x1fffffff800000ULL 
                                                     == 
                                                     (0x1fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__shiftedSig)))) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__roundIncr))))))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN) 
                              | (IData)((0xc0000000ULL 
                                         == (0xe0000000ULL 
                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out))))));
        bufp->chgBit(oldp+10,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_3__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_3_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+11,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+12,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                                >> 0x1dU)))))))))),3);
        bufp->chgBit(oldp+13,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+14,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)))));
        bufp->chgQData(oldp+15,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig),55);
        bufp->chgBit(oldp+17,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                           >> 0x1dU))))))));
        bufp->chgIData(oldp+18,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+19,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+20,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                                              >> 0x17U)))))))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out))))));
        bufp->chgBit(oldp+22,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_30__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_30_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+23,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+24,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                               >> 0x1dU))))))))),3);
        bufp->chgBit(oldp+25,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+26,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)))));
        bufp->chgQData(oldp+27,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig),55);
        bufp->chgBit(oldp+29,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                        >> 0x1dU)))))));
        bufp->chgBit(oldp+30,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr));
        bufp->chgIData(oldp+31,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+32,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+33,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__roundIncr))))))));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out))))));
        bufp->chgBit(oldp+35,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_31__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_31_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+36,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+37,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                                >> 0x1dU)))))))))),3);
        bufp->chgBit(oldp+38,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+39,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)))));
        bufp->chgQData(oldp+40,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig),55);
        bufp->chgBit(oldp+42,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                           >> 0x1dU))))))));
        bufp->chgIData(oldp+43,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+44,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+45,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                                              >> 0x17U)))))))));
        bufp->chgBit(oldp+46,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out))))));
        bufp->chgBit(oldp+47,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_4__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_4_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+48,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+49,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                               >> 0x1dU))))))))),3);
        bufp->chgBit(oldp+50,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+51,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)))));
        bufp->chgQData(oldp+52,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig),55);
        bufp->chgBit(oldp+54,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                        >> 0x1dU)))))));
        bufp->chgBit(oldp+55,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr));
        bufp->chgIData(oldp+56,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+57,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+58,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__roundIncr))))))));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out))))));
        bufp->chgBit(oldp+60,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_5__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_5_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+61,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+62,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                                >> 0x1dU)))))))))),3);
        bufp->chgBit(oldp+63,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+64,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)))));
        bufp->chgQData(oldp+65,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig),55);
        bufp->chgBit(oldp+67,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                           >> 0x1dU))))))));
        bufp->chgIData(oldp+68,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+69,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+70,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                                              >> 0x17U)))))))));
        bufp->chgBit(oldp+71,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out))))));
        bufp->chgBit(oldp+72,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_6__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_6_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+73,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+74,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                               >> 0x1dU))))))))),3);
        bufp->chgBit(oldp+75,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+76,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)))));
        bufp->chgQData(oldp+77,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig),55);
        bufp->chgBit(oldp+79,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                              >> 0x1fU)))
                                ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT___roundIncr_near_even_T_6))
                                : (0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                        >> 0x1dU)))))));
        bufp->chgBit(oldp+80,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr));
        bufp->chgIData(oldp+81,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+82,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+83,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                 & ((0ULL 
                                                     != 
                                                     (0x3fffffff800000ULL 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr))))
                                      : ((0x1fU == 
                                          (0xffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                                            >> 0x17U)))) 
                                         | ((IData)(
                                                    ((0xf000000ULL 
                                                      == 
                                                      (0x7f800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out)) 
                                                     & (0x1fffffff800000ULL 
                                                        == 
                                                        (0x1fffffff800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__shiftedSig)))) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__roundIncr))))))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out))))));
        bufp->chgBit(oldp+85,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_7__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_7_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+86,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                                                      >> 0x17U))))))
                                            : (0x1fU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                              >> 0x17U))))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                                >> 0x20U)))))))))
                                  : ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                    >> 0x20U)))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+87,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                        : 
                                                       (0x1fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                    >> 0x17U)))))))) 
                                             << 1U) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN) 
                                                   | (IData)(
                                                             (0xc0000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out))))) 
                                                 & (~ 
                                                    ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                              >> 0x1fU)) 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                     >> 0x1cU)))) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                       >> 0x20U)))
                                                            ? (IData)(
                                                                      ((0xf800000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                                                                >> 0x17U))))))
                                                            : 
                                                           (0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                        >> 0x17U))))))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                               >> 0x1fU)))
                                                    ? (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x7fffffULL 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                                >> 0x1dU)))))))))),3);
        bufp->chgBit(oldp+88,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+89,((IData)((0x7f800000ULL 
                                       == (0xff800000ULL 
                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)))));
        bufp->chgQData(oldp+90,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig),55);
        bufp->chgBit(oldp+92,((1U & ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                    >> 0x1fU)))
                                      ? (IData)((0ULL 
                                                 != 
                                                 (0x7fffffULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig)))
                                      : (0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                           >> 0x1dU))))))));
        bufp->chgIData(oldp+93,(((- (IData)((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                           >> 0x20U))))) 
                                 ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                            >> 0x17U)))),32);
        bufp->chgBit(oldp+94,((0x1fU == (0xffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                          >> 0x17U))))));
        bufp->chgBit(oldp+95,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                        >> 0x1fU)) 
                               & ((0U != (7U & (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                        >> 0x1cU)))) 
                                  | ((1U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                    >> 0x20U)))
                                      ? (IData)(((0xf800000ULL 
                                                  == 
                                                  (0x7f800000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__shiftedSig 
                                                                >> 0x17U))))))
                                      : (0x1fU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                                              >> 0x17U)))))))));
        bufp->chgBit(oldp+96,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN) 
                               | (IData)((0xc0000000ULL 
                                          == (0xe0000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out))))));
        bufp->chgBit(oldp+97,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_8__DOT__rawIn_isNaN)) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_8_io_out 
                                  >> 0x20U))));
        bufp->chgIData(oldp+98,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)))) 
                                  | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                              >> 0x1fU)) 
                                     & ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                           >> 0x1cU)))) 
                                        | ((1U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                          >> 0x20U)))
                                            ? (IData)(
                                                      ((0xf800000ULL 
                                                        == 
                                                        (0x7f800000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                       & ((0ULL 
                                                           != 
                                                           (0x3fffffff800000ULL 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr))))
                                            : ((0x1fU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                            >> 0x17U)))) 
                                               | ((IData)(
                                                          ((0xf000000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                           & (0x1fffffff800000ULL 
                                                              == 
                                                              (0x1fffffff800000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr)))))))
                                  ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN)) 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                          >> 0x20U)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                                >> 0x20U)))))))))
                                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr) 
                                      ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                         >> 0x20U))
                                      ? ((IData)(1U) 
                                         + ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                   >> 0x20U))))) 
                                            ^ (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig 
                                                       >> 0x17U))))
                                      : ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                >> 0x20U))))) 
                                         ^ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig 
                                                    >> 0x17U)))))),32);
        bufp->chgCData(oldp+99,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN) 
                                   | (IData)((0xc0000000ULL 
                                              == (0xe0000000ULL 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)))) 
                                  << 2U) | ((((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out))))) 
                                              & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                          >> 0x1fU)) 
                                                 & ((0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                 >> 0x1cU)))) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                   >> 0x20U)))
                                                        ? (IData)(
                                                                  ((0xf800000ULL 
                                                                    == 
                                                                    (0x7f800000ULL 
                                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                                   & ((0ULL 
                                                                       != 
                                                                       (0x3fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)) 
                                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr))))
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                     >> 0x17U)))) 
                                                        | ((IData)(
                                                                   ((0xf000000ULL 
                                                                     == 
                                                                     (0x7f800000ULL 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                                    & (0x1fffffff800000ULL 
                                                                       == 
                                                                       (0x1fffffff800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr))))))) 
                                             << 1U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN) 
                                                  | (IData)(
                                                            (0xc0000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out))))) 
                                                & (~ 
                                                   ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                             >> 0x1fU)) 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                    >> 0x1cU)))) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     ((0xf800000ULL 
                                                                       == 
                                                                       (0x7f800000ULL 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x3fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr))))
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                                        >> 0x17U)))) 
                                                           | ((IData)(
                                                                      ((0xf000000ULL 
                                                                        == 
                                                                        (0x7f800000ULL 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                                       & (0x1fffffff800000ULL 
                                                                          == 
                                                                          (0x1fffffff800000ULL 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)))) 
                                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr)))))))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT___roundIncr_near_even_T_6))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                               >> 0x1dU))))))))),3);
        bufp->chgBit(oldp+100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN));
        bufp->chgBit(oldp+101,((IData)((0x7f800000ULL 
                                        == (0xff800000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)))));
        bufp->chgQData(oldp+102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig),55);
        bufp->chgBit(oldp+104,(((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                               >> 0x1fU)))
                                 ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT___roundIncr_near_even_T_6))
                                 : (0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                         >> 0x1dU)))))));
        bufp->chgBit(oldp+105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr));
        bufp->chgIData(oldp+106,(((- (IData)((1U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                            >> 0x20U))))) 
                                  ^ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig 
                                             >> 0x17U)))),32);
        bufp->chgBit(oldp+107,((0x1fU == (0xffU & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                           >> 0x17U))))));
        bufp->chgBit(oldp+108,(((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                         >> 0x1fU)) 
                                & ((0U != (7U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                         >> 0x1cU)))) 
                                   | ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                     >> 0x20U)))
                                       ? (IData)(((0xf800000ULL 
                                                   == 
                                                   (0x7f800000ULL 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                  & ((0ULL 
                                                      != 
                                                      (0x3fffffff800000ULL 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)) 
                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr))))
                                       : ((0x1fU == 
                                           (0xffU & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                                             >> 0x17U)))) 
                                          | ((IData)(
                                                     ((0xf000000ULL 
                                                       == 
                                                       (0x7f800000ULL 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out)) 
                                                      & (0x1fffffff800000ULL 
                                                         == 
                                                         (0x1fffffff800000ULL 
                                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__shiftedSig)))) 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__roundIncr))))))));
        bufp->chgBit(oldp+109,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN) 
                                | (IData)((0xc0000000ULL 
                                           == (0xe0000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out))))));
        bufp->chgBit(oldp+110,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_rec_fn_to_in_9__DOT__rawIn_isNaN)) 
                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_muladder_9_io_out 
                                   >> 0x20U))));
        bufp->chgIData(oldp+111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+112,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+113,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+114,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+115,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+116,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+118,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+120,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+121,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+122,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[1U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+123,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+124,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_10__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_10__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+129,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_10__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+130,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xaU] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+131,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_10__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+132,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_10__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_10__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_11__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_11__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+137,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_11__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+138,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xbU] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+139,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_11__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+140,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_11__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_11__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_12__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_12__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+145,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_12__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+146,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xcU] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+147,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_12__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+148,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_12__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_12__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+151,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_13__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+152,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_13__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+153,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_13__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+154,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xdU] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+155,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_13__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+156,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_13__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_13__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_14__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_14__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+161,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_14__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+162,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xeU] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+163,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_14__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+164,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_14__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_14__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+167,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_15__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_15__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+169,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+170,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xfU] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+171,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_15__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+172,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_15__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+176,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+177,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+178,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[2U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+179,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+180,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_3__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_3__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+185,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_3__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+186,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[3U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+187,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_3__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+188,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_3__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+190,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_3__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_4__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_4__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+193,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_4__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+194,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[4U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+195,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_4__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+196,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_4__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_4__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_5__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+200,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_5__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+201,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_5__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+202,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[5U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+203,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_5__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+204,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_5__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_5__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_6__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+208,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+209,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+210,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[6U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+211,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+212,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+217,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+218,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[7U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+219,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+220,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+225,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+226,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[8U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+227,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+228,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_9__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_9__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+233,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_9__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+234,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[9U] 
                                >> 0x1fU)));
        bufp->chgCData(oldp+235,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_9__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+236,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_9__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_9__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn__io_in),32);
        bufp->chgQData(oldp+240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_io_out),33);
        bufp->chgIData(oldp+242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+244,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+245,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+246,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+247,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_1__io_in),32);
        bufp->chgQData(oldp+251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_1_io_out),33);
        bufp->chgIData(oldp+253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_1__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_1__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+255,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_1__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+256,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_1__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+257,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_1__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+258,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_1__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_10__io_in),32);
        bufp->chgQData(oldp+262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_10_io_out),33);
        bufp->chgIData(oldp+264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_10__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_10__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+266,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_10__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+267,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_10__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+268,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_10__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+269,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_10__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_10__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_11__io_in),32);
        bufp->chgQData(oldp+273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_11_io_out),33);
        bufp->chgIData(oldp+275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_11__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_11__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+277,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_11__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+278,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_11__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+279,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_11__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+280,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_11__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_11__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_12__io_in),32);
        bufp->chgQData(oldp+284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_12_io_out),33);
        bufp->chgIData(oldp+286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_12__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_12__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+288,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_12__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+289,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_12__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+290,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_12__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+291,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_12__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_12__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_13__io_in),32);
        bufp->chgQData(oldp+295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_13_io_out),33);
        bufp->chgIData(oldp+297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_13__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_13__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+299,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_13__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+300,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_13__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+301,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_13__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+302,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_13__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_13__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_14__io_in),32);
        bufp->chgQData(oldp+306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_14_io_out),33);
        bufp->chgIData(oldp+308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_14__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_14__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+310,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_14__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+311,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_14__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+312,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_14__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+313,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_14__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_14__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_15__io_in),32);
        bufp->chgQData(oldp+317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_15_io_out),33);
        bufp->chgIData(oldp+319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+321,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+322,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_15__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+323,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+324,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_2__io_in),32);
        bufp->chgQData(oldp+328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_2_io_out),33);
        bufp->chgIData(oldp+330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_2__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_2__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+332,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_2__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+333,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_2__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+334,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_2__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+335,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_2__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_2__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_3__io_in),32);
        bufp->chgQData(oldp+339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_3_io_out),33);
        bufp->chgIData(oldp+341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_3__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_3__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+343,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_3__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+344,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_3__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+345,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_3__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+346,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_3__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_3__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_4__io_in),32);
        bufp->chgQData(oldp+350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_4_io_out),33);
        bufp->chgIData(oldp+352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_4__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_4__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+354,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_4__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+355,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_4__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+356,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_4__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+357,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_4__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_4__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_5__io_in),32);
        bufp->chgQData(oldp+361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_5_io_out),33);
        bufp->chgIData(oldp+363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_5__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+364,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_5__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+365,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_5__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+366,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_5__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+367,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_5__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+368,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_5__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_5__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_6__io_in),32);
        bufp->chgQData(oldp+372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_6_io_out),33);
        bufp->chgIData(oldp+374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+376,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+377,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_6__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+378,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+379,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_7__io_in),32);
        bufp->chgQData(oldp+383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_7_io_out),33);
        bufp->chgIData(oldp+385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+387,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+388,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_7__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+389,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+390,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_8__io_in),32);
        bufp->chgQData(oldp+394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_8_io_out),33);
        bufp->chgIData(oldp+396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_8__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+398,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+399,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_8__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+400,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_8__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+401,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_8__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+403,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgIData(oldp+404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_9__io_in),32);
        bufp->chgQData(oldp+405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_9_io_out),33);
        bufp->chgIData(oldp+407,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_9__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+408,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_9__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgBit(oldp+409,((1U & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_9__DOT___intAsRawFloat_sig_T 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+410,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_in_to_rec_fn_9__io_in 
                                >> 0x1fU)));
        bufp->chgCData(oldp+411,((0x40U | (0x1fU & 
                                           (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_9__DOT__intAsRawFloat_adjustedNormDist))))),8);
        bufp->chgQData(oldp+412,((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_9__DOT___intAsRawFloat_sig_T))),33);
        bufp->chgIData(oldp+414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_9__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgQData(oldp+415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder__io_b),33);
        bufp->chgQData(oldp+417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_io_out),33);
        bufp->chgBit(oldp+419,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+420,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+422,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+423,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+424,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+425,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+426,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+427,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+428,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+429,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+433,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+434,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+435,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+437,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+438,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+440,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+441,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+443,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+444,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+445,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+446,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+447,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_io_out)))),24);
        bufp->chgIData(oldp+448,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder__io_b)))),24);
        bufp->chgQData(oldp+449,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+453,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+458,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+460,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__0[0U] = 0U;
        __Vtemp_h5f174993__0[1U] = 0U;
        __Vtemp_h5f174993__0[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h4af10d9e__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_hff1e3ee2__0, __Vtemp_h5f174993__0, __Vtemp_h4af10d9e__0);
        __Vtemp_h7e258a1d__0[0U] = __Vtemp_hff1e3ee2__0[0U];
        __Vtemp_h7e258a1d__0[1U] = __Vtemp_hff1e3ee2__0[1U];
        __Vtemp_h7e258a1d__0[2U] = (1U & __Vtemp_hff1e3ee2__0[2U]);
        bufp->chgWData(oldp+461,(__Vtemp_h7e258a1d__0),65);
        bufp->chgBit(oldp+464,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+467,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+468,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+469,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+470,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_1__io_b),33);
        bufp->chgQData(oldp+474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_1_io_out),33);
        bufp->chgBit(oldp+476,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_1_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_1__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+477,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+479,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_1_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+481,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_1__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+483,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+484,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+485,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+486,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+489,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+491,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+492,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+494,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+495,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+497,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+501,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+502,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+504,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_1_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_1_io_out)))),24);
        bufp->chgIData(oldp+505,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_1__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_1__io_b)))),24);
        bufp->chgQData(oldp+506,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+508,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+510,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_1_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_1__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+512,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+515,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+517,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__1[0U] = 0U;
        __Vtemp_h5f174993__1[1U] = 0U;
        __Vtemp_h5f174993__1[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h8aa70b2d__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_h0c043058__0, __Vtemp_h5f174993__1, __Vtemp_h8aa70b2d__0);
        __Vtemp_hec3cec70__0[0U] = __Vtemp_h0c043058__0[0U];
        __Vtemp_hec3cec70__0[1U] = __Vtemp_h0c043058__0[1U];
        __Vtemp_hec3cec70__0[2U] = (1U & __Vtemp_h0c043058__0[2U]);
        bufp->chgWData(oldp+518,(__Vtemp_hec3cec70__0),65);
        bufp->chgBit(oldp+521,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+524,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+525,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+526,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+527,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_10__io_b),33);
        bufp->chgQData(oldp+531,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_10_io_out),33);
        bufp->chgBit(oldp+533,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_10_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_10__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+534,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+536,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_10_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+537,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+538,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_10__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+539,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+540,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+541,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+542,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+543,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+544,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+546,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+549,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+552,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+554,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+558,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+559,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+561,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_10_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_10_io_out)))),24);
        bufp->chgIData(oldp+562,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_10__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_10__io_b)))),24);
        bufp->chgQData(oldp+563,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+567,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_10_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_10__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+572,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+574,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__2[0U] = 0U;
        __Vtemp_h5f174993__2[1U] = 0U;
        __Vtemp_h5f174993__2[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h7b8d0d9b__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_ha8e32415__0, __Vtemp_h5f174993__2, __Vtemp_h7b8d0d9b__0);
        __Vtemp_ha5964c1d__0[0U] = __Vtemp_ha8e32415__0[0U];
        __Vtemp_ha5964c1d__0[1U] = __Vtemp_ha8e32415__0[1U];
        __Vtemp_ha5964c1d__0[2U] = (1U & __Vtemp_ha8e32415__0[2U]);
        bufp->chgWData(oldp+575,(__Vtemp_ha5964c1d__0),65);
        bufp->chgBit(oldp+578,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+581,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+582,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+583,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+584,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+585,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+586,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_11__io_b),33);
        bufp->chgQData(oldp+588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_11_io_out),33);
        bufp->chgBit(oldp+590,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_11_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_11__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+591,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+593,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_11_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+595,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_11__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+596,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+597,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+598,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+599,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+603,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+606,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+608,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+609,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+611,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+612,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+614,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+615,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+616,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+617,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+618,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_11_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_11_io_out)))),24);
        bufp->chgIData(oldp+619,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_11__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_11__io_b)))),24);
        bufp->chgQData(oldp+620,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+622,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+623,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+624,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_11_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_11__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+625,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+629,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+631,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__3[0U] = 0U;
        __Vtemp_h5f174993__3[1U] = 0U;
        __Vtemp_h5f174993__3[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h20c1ca08__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_hdd19cc5d__0, __Vtemp_h5f174993__3, __Vtemp_h20c1ca08__0);
        __Vtemp_hd01c4467__0[0U] = __Vtemp_hdd19cc5d__0[0U];
        __Vtemp_hd01c4467__0[1U] = __Vtemp_hdd19cc5d__0[1U];
        __Vtemp_hd01c4467__0[2U] = (1U & __Vtemp_hdd19cc5d__0[2U]);
        bufp->chgWData(oldp+632,(__Vtemp_hd01c4467__0),65);
        bufp->chgBit(oldp+635,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+638,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+640,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+641,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+643,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_12__io_b),33);
        bufp->chgQData(oldp+645,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_12_io_out),33);
        bufp->chgBit(oldp+647,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_12_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_12__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+648,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+649,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+650,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_12_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+652,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_12__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+654,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+655,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+656,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+660,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+663,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+666,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+668,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+672,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+673,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+675,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_12_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_12_io_out)))),24);
        bufp->chgIData(oldp+676,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_12__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_12__io_b)))),24);
        bufp->chgQData(oldp+677,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+679,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+681,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_12_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_12__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+686,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+688,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__4[0U] = 0U;
        __Vtemp_h5f174993__4[1U] = 0U;
        __Vtemp_h5f174993__4[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h39a32d08__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_he74b80fc__0, __Vtemp_h5f174993__4, __Vtemp_h39a32d08__0);
        __Vtemp_h74607696__0[0U] = __Vtemp_he74b80fc__0[0U];
        __Vtemp_h74607696__0[1U] = __Vtemp_he74b80fc__0[1U];
        __Vtemp_h74607696__0[2U] = (1U & __Vtemp_he74b80fc__0[2U]);
        bufp->chgWData(oldp+689,(__Vtemp_h74607696__0),65);
        bufp->chgBit(oldp+692,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+693,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+694,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+695,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+696,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+697,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+698,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+699,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+700,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_13__io_b),33);
        bufp->chgQData(oldp+702,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_13_io_out),33);
        bufp->chgBit(oldp+704,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_13_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_13__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+705,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+706,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+707,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_13_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+709,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_13__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+711,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+712,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+713,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+714,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+715,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+718,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+719,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+720,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+721,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+722,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+723,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+725,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+726,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+728,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+729,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+730,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+731,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+732,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_13_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_13_io_out)))),24);
        bufp->chgIData(oldp+733,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_13__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_13__io_b)))),24);
        bufp->chgQData(oldp+734,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+736,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+737,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+738,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_13_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_13__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+739,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+740,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+743,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+745,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__5[0U] = 0U;
        __Vtemp_h5f174993__5[1U] = 0U;
        __Vtemp_h5f174993__5[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h8ccb27d0__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_h4039247b__0, __Vtemp_h5f174993__5, __Vtemp_h8ccb27d0__0);
        __Vtemp_h3d952fd8__0[0U] = __Vtemp_h4039247b__0[0U];
        __Vtemp_h3d952fd8__0[1U] = __Vtemp_h4039247b__0[1U];
        __Vtemp_h3d952fd8__0[2U] = (1U & __Vtemp_h4039247b__0[2U]);
        bufp->chgWData(oldp+746,(__Vtemp_h3d952fd8__0),65);
        bufp->chgBit(oldp+749,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+751,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+752,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+753,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+754,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+755,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+756,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+757,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_14__io_b),33);
        bufp->chgQData(oldp+759,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_14_io_out),33);
        bufp->chgBit(oldp+761,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_14_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_14__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+762,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+763,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+764,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_14_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+765,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+766,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_14__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+767,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+768,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+769,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+770,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+771,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+772,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+774,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+775,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+776,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+777,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+778,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+779,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+780,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+782,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+785,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+786,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+787,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+788,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+789,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_14_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_14_io_out)))),24);
        bufp->chgIData(oldp+790,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_14__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_14__io_b)))),24);
        bufp->chgQData(oldp+791,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+793,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+794,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+795,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_14_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_14__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+796,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+797,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+800,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+802,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__6[0U] = 0U;
        __Vtemp_h5f174993__6[1U] = 0U;
        __Vtemp_h5f174993__6[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_hb96e89f1__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_h1daadf9e__0, __Vtemp_h5f174993__6, __Vtemp_hb96e89f1__0);
        __Vtemp_hf06eb2ce__0[0U] = __Vtemp_h1daadf9e__0[0U];
        __Vtemp_hf06eb2ce__0[1U] = __Vtemp_h1daadf9e__0[1U];
        __Vtemp_hf06eb2ce__0[2U] = (1U & __Vtemp_h1daadf9e__0[2U]);
        bufp->chgWData(oldp+803,(__Vtemp_hf06eb2ce__0),65);
        bufp->chgBit(oldp+806,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+807,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+808,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+809,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+810,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+811,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+812,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+814,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_15__io_b),33);
        bufp->chgQData(oldp+816,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_15_io_out),33);
        bufp->chgBit(oldp+818,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_15_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_15__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+819,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+820,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+821,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_15_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+823,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_15__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+824,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+825,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+826,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+827,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+828,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+829,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+832,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+833,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+834,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+835,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+836,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+837,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+839,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+840,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+842,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+843,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+844,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+845,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+846,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_15_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_15_io_out)))),24);
        bufp->chgIData(oldp+847,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_15__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_15__io_b)))),24);
        bufp->chgQData(oldp+848,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+850,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+851,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+852,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_15_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_15__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+853,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+854,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+857,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+859,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__7[0U] = 0U;
        __Vtemp_h5f174993__7[1U] = 0U;
        __Vtemp_h5f174993__7[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h6c32bc76__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_hb84ecc3e__0, __Vtemp_h5f174993__7, __Vtemp_h6c32bc76__0);
        __Vtemp_h3bc0d0aa__0[0U] = __Vtemp_hb84ecc3e__0[0U];
        __Vtemp_h3bc0d0aa__0[1U] = __Vtemp_hb84ecc3e__0[1U];
        __Vtemp_h3bc0d0aa__0[2U] = (1U & __Vtemp_hb84ecc3e__0[2U]);
        bufp->chgWData(oldp+860,(__Vtemp_h3bc0d0aa__0),65);
        bufp->chgBit(oldp+863,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+865,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+866,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+868,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+869,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+871,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_2__io_b),33);
        bufp->chgQData(oldp+873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_2_io_out),33);
        bufp->chgBit(oldp+875,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_2_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_2__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+876,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+877,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+878,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_2_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+880,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_2__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+881,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+882,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+883,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+884,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+885,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+886,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+888,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+889,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+890,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+891,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+892,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+893,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+894,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+896,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+897,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+900,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+901,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+902,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+903,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_2_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_2_io_out)))),24);
        bufp->chgIData(oldp+904,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_2__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_2__io_b)))),24);
        bufp->chgQData(oldp+905,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+907,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+908,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+909,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_2_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_2__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+910,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+914,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+916,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__8[0U] = 0U;
        __Vtemp_h5f174993__8[1U] = 0U;
        __Vtemp_h5f174993__8[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_hdfc9756d__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_hd163d1d0__0, __Vtemp_h5f174993__8, __Vtemp_hdfc9756d__0);
        __Vtemp_h01579b0d__0[0U] = __Vtemp_hd163d1d0__0[0U];
        __Vtemp_h01579b0d__0[1U] = __Vtemp_hd163d1d0__0[1U];
        __Vtemp_h01579b0d__0[2U] = (1U & __Vtemp_hd163d1d0__0[2U]);
        bufp->chgWData(oldp+917,(__Vtemp_h01579b0d__0),65);
        bufp->chgBit(oldp+920,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+921,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+922,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+923,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+925,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+926,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+927,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+928,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_3__io_b),33);
        bufp->chgQData(oldp+930,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_3_io_out),33);
        bufp->chgBit(oldp+932,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_3_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_3__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+933,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+935,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_3_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+936,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+937,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_3__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+938,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+939,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+940,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+941,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+942,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+943,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+945,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+946,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+947,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+948,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                   & ((0U != (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U))) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                         ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                            >> 2U)))))));
        bufp->chgSData(oldp+949,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+950,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+951,((0x3ffffffffffffULL 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                      ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x18U)))))))
                                      : (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                              >> 0xbU)))) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                          >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+953,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgQData(oldp+954,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+956,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+957,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+958,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+959,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+960,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_3_io_out 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_3_io_out)))),24);
        bufp->chgIData(oldp+961,((((IData)((0U != (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_3__io_b 
                                                              >> 0x1dU))))) 
                                   << 0x17U) | (0x7fffffU 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_3__io_b)))),24);
        bufp->chgQData(oldp+962,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+966,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_3_io_out 
                                                               >> 0x1dU)))))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_3__io_b 
                                                                 >> 0x1dU))))))) 
                                      | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+968,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+971,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgCData(oldp+973,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                   << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                               & VL_LTS_III(4, 2U, 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                >> 7U)))) 
                                              << 2U) 
                                             | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | (((((0U 
                                                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                           | (0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                          & (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                 >> 8U)))) 
                                                         & ((0x4000000U 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                             ? 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                             >> 1U)
                                                             : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                        & (~ 
                                                           ((((~ 
                                                               ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                 >> 1U))) 
                                                              & ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                  >> 0x18U))) 
                                                             & (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                            & ((0x4000000U 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                ? 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 2U)
                                                                : 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                >> 1U))))))) 
                                                 << 1U) 
                                                | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                    & VL_LTS_III(4, 2U, 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                     >> 7U)))) 
                                                   | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | ((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__9[0U] = 0U;
        __Vtemp_h5f174993__9[1U] = 0U;
        __Vtemp_h5f174993__9[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h68a00dd9__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_hbb42c710__0, __Vtemp_h5f174993__9, __Vtemp_h68a00dd9__0);
        __Vtemp_h8e788682__0[0U] = __Vtemp_hbb42c710__0[0U];
        __Vtemp_h8e788682__0[1U] = __Vtemp_hbb42c710__0[1U];
        __Vtemp_h8e788682__0[2U] = (1U & __Vtemp_hbb42c710__0[2U]);
        bufp->chgWData(oldp+974,(__Vtemp_h8e788682__0),65);
        bufp->chgBit(oldp+977,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+978,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+979,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+980,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+982,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+983,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                & VL_LTS_III(4, 2U, 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                 >> 7U))))));
        bufp->chgBit(oldp+984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+985,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_4__io_b),33);
        bufp->chgQData(oldp+987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_4_io_out),33);
        bufp->chgBit(oldp+989,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_4_io_out 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                   & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_4__io_b 
                                                 >> 0x16U)))))));
        bufp->chgBit(oldp+990,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+991,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+992,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_4_io_out 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+994,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_4__io_b 
                                                             >> 0x1dU)))))))));
        bufp->chgBit(oldp+995,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+996,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                            - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+997,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+998,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1000,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+1002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+1003,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1004,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+1005,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                 | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                >> 0x12U))) 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U)))))));
        bufp->chgSData(oldp+1006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+1007,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+1008,((0x3ffffffffffffULL 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                       ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (0xffffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x18U)))))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                               >> 0xbU)))) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+1010,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgQData(oldp+1011,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+1013,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+1014,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1015,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1016,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+1017,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_4_io_out 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_4_io_out)))),24);
        bufp->chgIData(oldp+1018,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_4__io_b 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_4__io_b)))),24);
        bufp->chgQData(oldp+1019,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1021,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+1022,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+1023,((1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_4_io_out 
                                                                >> 0x1dU)))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_4__io_b 
                                                                  >> 0x1dU))))))) 
                                       | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+1024,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1025,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+1028,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgCData(oldp+1030,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                    << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                & VL_LTS_III(4, 2U, 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                 >> 7U)))) 
                                               << 2U) 
                                              | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (((((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                           & (1U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                  >> 8U)))) 
                                                          & ((0x4000000U 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                              ? 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U)
                                                              : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                         & (~ 
                                                            ((((~ 
                                                                ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 2U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U))) 
                                                               & ((0x4000000U 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U))) 
                                                              & (0U 
                                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                             & ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 1U))))))) 
                                                  << 1U) 
                                                 | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                     & VL_LTS_III(4, 2U, 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                      >> 7U)))) 
                                                    | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                          | ((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             | (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__10[0U] = 0U;
        __Vtemp_h5f174993__10[1U] = 0U;
        __Vtemp_h5f174993__10[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h29daed7a__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_h8e2b7a56__0, __Vtemp_h5f174993__10, __Vtemp_h29daed7a__0);
        __Vtemp_h2f83a839__0[0U] = __Vtemp_h8e2b7a56__0[0U];
        __Vtemp_h2f83a839__0[1U] = __Vtemp_h8e2b7a56__0[1U];
        __Vtemp_h2f83a839__0[2U] = (1U & __Vtemp_h8e2b7a56__0[2U]);
        bufp->chgWData(oldp+1031,(__Vtemp_h2f83a839__0),65);
        bufp->chgBit(oldp+1034,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                 | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+1035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+1037,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1039,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+1040,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                 & VL_LTS_III(4, 2U, 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+1042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_5__io_b),33);
        bufp->chgQData(oldp+1044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_5_io_out),33);
        bufp->chgBit(oldp+1046,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                  & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_5_io_out 
                                                >> 0x16U)))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                    & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_5__io_b 
                                                  >> 0x16U)))))));
        bufp->chgBit(oldp+1047,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+1048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+1049,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_5_io_out 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+1051,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_5__io_b 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+1053,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                             - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+1054,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+1055,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  << 0xdU) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                    >> 0x13U)))),26);
        bufp->chgBit(oldp+1056,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1057,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+1059,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+1060,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1061,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+1062,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                 | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                >> 0x12U))) 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U)))))));
        bufp->chgSData(oldp+1063,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+1064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+1065,((0x3ffffffffffffULL 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                       ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (0xffffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x18U)))))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                               >> 0xbU)))) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+1067,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgQData(oldp+1068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+1070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+1071,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1072,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+1074,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_5_io_out 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_5_io_out)))),24);
        bufp->chgIData(oldp+1075,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_5__io_b 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_5__io_b)))),24);
        bufp->chgQData(oldp+1076,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1078,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+1079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+1080,((1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_5_io_out 
                                                                >> 0x1dU)))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_5__io_b 
                                                                  >> 0x1dU))))))) 
                                       | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+1081,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1082,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+1085,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgCData(oldp+1087,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                    << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                & VL_LTS_III(4, 2U, 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                 >> 7U)))) 
                                               << 2U) 
                                              | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (((((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                           & (1U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                  >> 8U)))) 
                                                          & ((0x4000000U 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                              ? 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U)
                                                              : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                         & (~ 
                                                            ((((~ 
                                                                ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 2U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U))) 
                                                               & ((0x4000000U 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U))) 
                                                              & (0U 
                                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                             & ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 1U))))))) 
                                                  << 1U) 
                                                 | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                     & VL_LTS_III(4, 2U, 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                      >> 7U)))) 
                                                    | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                          | ((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             | (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__11[0U] = 0U;
        __Vtemp_h5f174993__11[1U] = 0U;
        __Vtemp_h5f174993__11[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h2e727827__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_h3f8cf64c__0, __Vtemp_h5f174993__11, __Vtemp_h2e727827__0);
        __Vtemp_hd808eadb__0[0U] = __Vtemp_h3f8cf64c__0[0U];
        __Vtemp_hd808eadb__0[1U] = __Vtemp_h3f8cf64c__0[1U];
        __Vtemp_hd808eadb__0[2U] = (1U & __Vtemp_h3f8cf64c__0[2U]);
        bufp->chgWData(oldp+1088,(__Vtemp_hd808eadb__0),65);
        bufp->chgBit(oldp+1091,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                 | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+1092,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1093,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+1094,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1095,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1096,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+1097,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                 & VL_LTS_III(4, 2U, 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1098,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+1099,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_6__io_b),33);
        bufp->chgQData(oldp+1101,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_6_io_out),33);
        bufp->chgBit(oldp+1103,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                  & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_6_io_out 
                                                >> 0x16U)))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                    & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_6__io_b 
                                                  >> 0x16U)))))));
        bufp->chgBit(oldp+1104,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+1105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+1106,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_6_io_out 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+1108,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_6__io_b 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+1110,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                             - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+1111,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+1112,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  << 0xdU) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                    >> 0x13U)))),26);
        bufp->chgBit(oldp+1113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+1116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+1117,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1118,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+1119,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                 | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                >> 0x12U))) 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U)))))));
        bufp->chgSData(oldp+1120,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+1121,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+1122,((0x3ffffffffffffULL 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                       ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (0xffffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x18U)))))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                               >> 0xbU)))) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+1124,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgQData(oldp+1125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+1127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+1128,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1129,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+1131,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_6_io_out 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_6_io_out)))),24);
        bufp->chgIData(oldp+1132,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_6__io_b 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_6__io_b)))),24);
        bufp->chgQData(oldp+1133,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+1136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+1137,((1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_6_io_out 
                                                                >> 0x1dU)))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_6__io_b 
                                                                  >> 0x1dU))))))) 
                                       | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+1138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+1142,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgCData(oldp+1144,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                    << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                & VL_LTS_III(4, 2U, 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                 >> 7U)))) 
                                               << 2U) 
                                              | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (((((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                           & (1U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                  >> 8U)))) 
                                                          & ((0x4000000U 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                              ? 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U)
                                                              : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                         & (~ 
                                                            ((((~ 
                                                                ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 2U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U))) 
                                                               & ((0x4000000U 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U))) 
                                                              & (0U 
                                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                             & ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 1U))))))) 
                                                  << 1U) 
                                                 | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                     & VL_LTS_III(4, 2U, 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                      >> 7U)))) 
                                                    | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                          | ((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             | (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__12[0U] = 0U;
        __Vtemp_h5f174993__12[1U] = 0U;
        __Vtemp_h5f174993__12[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_h0ef9d50f__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_h3aafcea9__0, __Vtemp_h5f174993__12, __Vtemp_h0ef9d50f__0);
        __Vtemp_hbbbda779__0[0U] = __Vtemp_h3aafcea9__0[0U];
        __Vtemp_hbbbda779__0[1U] = __Vtemp_h3aafcea9__0[1U];
        __Vtemp_hbbbda779__0[2U] = (1U & __Vtemp_h3aafcea9__0[2U]);
        bufp->chgWData(oldp+1145,(__Vtemp_hbbbda779__0),65);
        bufp->chgBit(oldp+1148,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                 | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+1149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+1151,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1152,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1153,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+1154,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                 & VL_LTS_III(4, 2U, 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+1156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_7__io_b),33);
        bufp->chgQData(oldp+1158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_7_io_out),33);
        bufp->chgBit(oldp+1160,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                  & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_7_io_out 
                                                >> 0x16U)))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                    & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_7__io_b 
                                                  >> 0x16U)))))));
        bufp->chgBit(oldp+1161,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+1162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+1163,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_7_io_out 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1164,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+1165,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_7__io_b 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+1167,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                             - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+1168,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+1169,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  << 0xdU) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                    >> 0x13U)))),26);
        bufp->chgBit(oldp+1170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+1173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+1174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+1176,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                 | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                >> 0x12U))) 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U)))))));
        bufp->chgSData(oldp+1177,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+1178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+1179,((0x3ffffffffffffULL 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                       ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (0xffffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x18U)))))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                               >> 0xbU)))) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+1181,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgQData(oldp+1182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+1184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+1185,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1186,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+1188,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_7_io_out 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_7_io_out)))),24);
        bufp->chgIData(oldp+1189,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_7__io_b 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_7__io_b)))),24);
        bufp->chgQData(oldp+1190,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+1193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+1194,((1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_7_io_out 
                                                                >> 0x1dU)))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_7__io_b 
                                                                  >> 0x1dU))))))) 
                                       | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+1195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+1199,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgCData(oldp+1201,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                    << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                & VL_LTS_III(4, 2U, 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                 >> 7U)))) 
                                               << 2U) 
                                              | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (((((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                           & (1U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                  >> 8U)))) 
                                                          & ((0x4000000U 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                              ? 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U)
                                                              : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                         & (~ 
                                                            ((((~ 
                                                                ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 2U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U))) 
                                                               & ((0x4000000U 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U))) 
                                                              & (0U 
                                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                             & ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 1U))))))) 
                                                  << 1U) 
                                                 | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                     & VL_LTS_III(4, 2U, 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                      >> 7U)))) 
                                                    | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                          | ((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             | (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
        __Vtemp_h5f174993__13[0U] = 0U;
        __Vtemp_h5f174993__13[1U] = 0U;
        __Vtemp_h5f174993__13[2U] = 1U;
        VL_EXTEND_WI(65,6, __Vtemp_ha2bf1161__0, (0x3fU 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
        VL_SHIFTRS_WWW(65,65,65, __Vtemp_hc81de283__0, __Vtemp_h5f174993__13, __Vtemp_ha2bf1161__0);
        __Vtemp_h1333620e__0[0U] = __Vtemp_hc81de283__0[0U];
        __Vtemp_h1333620e__0[1U] = __Vtemp_hc81de283__0[1U];
        __Vtemp_h1333620e__0[2U] = (1U & __Vtemp_hc81de283__0[2U]);
        bufp->chgWData(oldp+1202,(__Vtemp_h1333620e__0),65);
        bufp->chgBit(oldp+1205,(((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                 | (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))));
        bufp->chgIData(oldp+1206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgBit(oldp+1208,(VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1210,((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))))));
        bufp->chgBit(oldp+1211,(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                 & VL_LTS_III(4, 2U, 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgQData(oldp+1213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_8__io_b),33);
        bufp->chgQData(oldp+1215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_muladder_8_io_out),33);
        bufp->chgBit(oldp+1217,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                  & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_8_io_out 
                                                >> 0x16U)))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                    & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_8__io_b 
                                                  >> 0x16U)))))));
        bufp->chgBit(oldp+1218,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN))));
        bufp->chgBit(oldp+1219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgBit(oldp+1220,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_8_io_out 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+1222,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_8__io_b 
                                                              >> 0x1dU)))))))));
        bufp->chgBit(oldp+1223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgSData(oldp+1224,((0x3ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                             - (IData)(0x18U)))),10);
        bufp->chgCData(oldp+1225,((0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+1226,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  << 0xdU) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                    >> 0x13U)))),26);
        bufp->chgBit(oldp+1227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult),49);
        bufp->chgBit(oldp+1230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_invalidExc));
        bufp->chgBit(oldp+1231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero));
        bufp->chgBit(oldp+1233,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                                 | (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
                                    & ((0U != (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                >> 0x12U))) 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U)))))));
        bufp->chgSData(oldp+1234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp),10);
        bufp->chgIData(oldp+1235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig),27);
        bufp->chgQData(oldp+1236,((0x3ffffffffffffULL 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)
                                       ? (~ (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (0xffffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x18U)))))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                               >> 0xbU)))) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT____Vcellinp__mulAddRecFNToRaw_postMul__io_mulAddResult 
                                                                           >> 0x19U)))))))))),50);
        bufp->chgSData(oldp+1238,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgQData(oldp+1239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgCData(oldp+1241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgIData(oldp+1242,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1243,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgIData(oldp+1245,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_8_io_out 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_8_io_out)))),24);
        bufp->chgIData(oldp+1246,((((IData)((0U != 
                                             (7U & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_8__io_b 
                                                            >> 0x1dU))))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_8__io_b)))),24);
        bufp->chgQData(oldp+1247,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN));
        bufp->chgBit(oldp+1250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        bufp->chgBit(oldp+1251,((1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_scaled_in_to_rec_fn_8_io_out 
                                                                >> 0x1dU)))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT____Vcellinp__activated_data_e_scaled_muladder_8__io_b 
                                                                  >> 0x1dU))))))) 
                                       | VL_GTS_III(11, 0U, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2))))));
        bufp->chgCData(oldp+1252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgQData(oldp+1256,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgCData(oldp+1258,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_invalidExc) 
                                    << 4U) | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                & VL_LTS_III(4, 2U, 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                 >> 7U)))) 
                                               << 2U) 
                                              | ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (((((0U 
                                                             != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                            | (0U 
                                                               != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)) 
                                                           & (1U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
                                                                  >> 8U)))) 
                                                          & ((0x4000000U 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                              ? 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U)
                                                              : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)) 
                                                         & (~ 
                                                            ((((~ 
                                                                ((0x4000000U 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                  ? 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 2U)
                                                                  : 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U))) 
                                                               & ((0x4000000U 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U))) 
                                                              & (0U 
                                                                 != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                                             & ((0x4000000U 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig)
                                                                 ? 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig 
                                                                 >> 1U))))))) 
                                                  << 1U) 
                                                 | (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                     & VL_LTS_III(4, 2U, 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                      >> 7U)))) 
                                                    | ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd))) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isZero))) 
                                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                          | ((0U 
                                                              != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1) 
                                                             | (0U 
                                                                != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))))),5);
    }
}
