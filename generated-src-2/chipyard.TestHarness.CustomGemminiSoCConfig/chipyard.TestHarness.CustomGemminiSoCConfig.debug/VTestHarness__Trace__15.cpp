// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness___024root__trace_chg_sub_16(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_chg_sub_16\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 40132);
    VlWide<8>/*255:0*/ __Vtemp_h70020078__0;
    VlWide<8>/*255:0*/ __Vtemp_hf7f54520__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f4a057d__0;
    VlWide<3>/*95:0*/ __Vtemp_h36baf7de__0;
    VlWide<5>/*159:0*/ __Vtemp_h49f9c6ae__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd44d09a__0;
    VlWide<3>/*95:0*/ __Vtemp_haef7f8fd__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+0,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+2,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+3,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+4,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+5,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+6,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+7,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+8,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+9,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_5) 
                                  << 7U) | (0x7fff80U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_5) 
                                                << 7U) 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_5) 
                                        & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x10U)))) 
                                    << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                << 5U) 
                                               | (0x1fffe0U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                      << 5U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xbU)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x10U)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                      << 3U) 
                                                     | (0x7fff8U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                            << 3U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xdU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x10U)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                            << 1U) 
                                                           | (0x1fffeU 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                  << 1U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xfU)))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x10U)))))))))))),8);
        bufp->chgBit(oldp+10,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+11,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__x1_0_REG));
        bufp->chgBit(oldp+12,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_wfi));
        bufp->chgBit(oldp+13,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_resp_ready));
        bufp->chgBit(oldp+14,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___io_csr_stall_output));
        bufp->chgCData(oldp+15,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
        bufp->chgBit(oldp+16,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)))));
        bufp->chgBit(oldp+17,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345));
        bufp->chgBit(oldp+18,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528));
        bufp->chgBit(oldp+19,((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))));
        bufp->chgBit(oldp+20,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn));
        bufp->chgBit(oldp+21,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn));
        bufp->chgBit(oldp+22,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528) 
                               & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_womask_T_632)))));
        bufp->chgBit(oldp+24,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922));
        bufp->chgBit(oldp+25,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510));
        bufp->chgBit(oldp+26,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191));
        bufp->chgBit(oldp+27,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074));
        bufp->chgBit(oldp+28,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722));
        bufp->chgBit(oldp+29,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442));
        bufp->chgBit(oldp+30,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111));
        bufp->chgBit(oldp+31,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146));
        bufp->chgBit(oldp+32,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818));
        bufp->chgBit(oldp+33,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done));
        bufp->chgBit(oldp+34,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done));
        bufp->chgBit(oldp+35,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))));
        bufp->chgBit(oldp+36,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+37,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+38,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))));
        bufp->chgBit(oldp+39,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+40,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+41,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+42,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+43,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+44,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+45,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+46,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgCData(oldp+47,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address))) 
                                  << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address)))) 
                                             << 6U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address))) 
                                                << 5U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address))) 
                                                      << 3U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address)))))))))))),8);
        bufp->chgBit(oldp+48,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2));
        bufp->chgBit(oldp+49,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                            >> 3U)))));
        bufp->chgBit(oldp+50,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                                   >> 3U)) & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                              >> 0x16U))));
        bufp->chgBit(oldp+51,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm));
        bufp->chgBit(oldp+52,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
        bufp->chgBit(oldp+53,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        bufp->chgBit(oldp+54,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm));
        bufp->chgBit(oldp+55,((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))));
        bufp->chgBit(oldp+56,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_10));
        bufp->chgBit(oldp+57,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_12));
        bufp->chgBit(oldp+58,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm)) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm)))));
        bufp->chgBit(oldp+59,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_done));
        bufp->chgBit(oldp+60,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_done));
        bufp->chgBit(oldp+61,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag)))));
        bufp->chgBit(oldp+62,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+63,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+64,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag)))));
        bufp->chgBit(oldp+65,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+66,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+67,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+68,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+69,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+70,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+71,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+72,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+73,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_5) 
                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_5) 
                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address)) 
                                  << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_5) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_5) 
                                                 & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address))) 
                                             << 6U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_4) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_4) 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address)) 
                                                << 5U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_3) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_3) 
                                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address)) 
                                                      << 3U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_2) 
                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address))))))))))),8);
        bufp->chgBit(oldp+74,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___out_wofireMux_T) 
                                 & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                                & (0U == (0xff8U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address))) 
                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                                  >> 4U))));
        bufp->chgBit(oldp+75,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_deq));
        bufp->chgBit(oldp+76,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask)) 
                               & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                                         >> 3U)) & 
                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x16U))))));
        bufp->chgCData(oldp+77,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 0x17U))),8);
        bufp->chgBit(oldp+78,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgCData(oldp+79,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray),4);
        bufp->chgBit(oldp+80,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+81,((1U & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray))));
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray) 
                                     >> 1U))));
        bufp->chgBit(oldp+83,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray) 
                                     >> 2U))));
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray) 
                                     >> 3U))));
        bufp->chgCData(oldp+85,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__index),3);
        bufp->chgCData(oldp+86,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented),4);
        bufp->chgCData(oldp+87,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx),4);
        bufp->chgBit(oldp+88,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+89,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+90,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+91,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+92,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+93,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray),4);
        bufp->chgBit(oldp+94,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgCData(oldp+95,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx),4);
        bufp->chgBit(oldp+96,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid));
        bufp->chgBit(oldp+97,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+98,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+99,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+100,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+101,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+102,((1U & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+103,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray) 
                                      >> 1U))));
        bufp->chgBit(oldp+104,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray) 
                                      >> 2U))));
        bufp->chgBit(oldp+105,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray) 
                                      >> 3U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+106,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset));
        bufp->chgBit(oldp+107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset));
        bufp->chgBit(oldp+108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset));
        bufp->chgBit(oldp+109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgBit(oldp+110,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs));
        bufp->chgBit(oldp+111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0));
        bufp->chgBit(oldp+112,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume));
        bufp->chgBit(oldp+113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+117,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+118,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+120,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+121,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+122,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+123,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgBit(oldp+141,((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))));
        bufp->chgBit(oldp+142,((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))));
        bufp->chgBit(oldp+143,((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))));
        bufp->chgCData(oldp+144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
        bufp->chgBit(oldp+145,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0));
        bufp->chgCData(oldp+146,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_4) 
                                   << 4U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_3) 
                                              << 3U) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0)))))),5);
        bufp->chgBit(oldp+147,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_1));
        bufp->chgBit(oldp+148,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_2));
        bufp->chgBit(oldp+149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_3));
        bufp->chgBit(oldp+150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_4));
        bufp->chgIData(oldp+151,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data),32);
        bufp->chgBit(oldp+152,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                                      >> 3U))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                                      >> 2U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgBit(oldp+154,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+163,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+164,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+165,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+167,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgBit(oldp+172,((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgBit(oldp+173,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgBit(oldp+174,((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgBit(oldp+175,((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgBit(oldp+176,((0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgBit(oldp+177,((0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgBit(oldp+178,((0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
        bufp->chgCData(oldp+179,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgBit(oldp+180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_WIRE));
        bufp->chgBit(oldp+181,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___io_dmi_resp_ready_output));
        bufp->chgBit(oldp+182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_shift));
        bufp->chgBit(oldp+183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture));
        bufp->chgBit(oldp+184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_update));
        bufp->chgBit(oldp+185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_valid));
        bufp->chgBit(oldp+186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture));
        bufp->chgBit(oldp+187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_update));
        bufp->chgBit(oldp+188,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_update))));
        bufp->chgBit(oldp+189,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_shift));
        bufp->chgBit(oldp+190,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_capture));
        bufp->chgBit(oldp+191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_d_ready));
        bufp->chgBit(oldp+192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented));
        bufp->chgBit(oldp+193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid));
        bufp->chgBit(oldp+194,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done));
        bufp->chgBit(oldp+195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_1_d_ready));
        bufp->chgBit(oldp+196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_valid_output));
        bufp->chgBit(oldp+197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output));
        bufp->chgBit(oldp+198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output));
        bufp->chgBit(oldp+199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0));
        bufp->chgBit(oldp+200,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_12));
        bufp->chgBit(oldp+201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set));
        bufp->chgBit(oldp+202,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done));
        bufp->chgCData(oldp+203,((0xfU & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done))))),4);
        bufp->chgBit(oldp+204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_d_ready));
        bufp->chgBit(oldp+205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_a_ready));
        bufp->chgBit(oldp+206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__in_a_ready));
        bufp->chgBit(oldp+207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_d_ready));
        bufp->chgBit(oldp+208,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3));
        bufp->chgCData(oldp+209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight),2);
        bufp->chgBit(oldp+210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set));
        bufp->chgBit(oldp+211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done));
        bufp->chgBit(oldp+212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready));
        bufp->chgBit(oldp+213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_set));
        bufp->chgBit(oldp+214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done));
        bufp->chgBit(oldp+215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_clr));
        bufp->chgCData(oldp+216,((0xfU & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_clr))))),4);
        bufp->chgBit(oldp+217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__latch));
        bufp->chgBit(oldp+218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set));
        bufp->chgBit(oldp+219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done));
        bufp->chgBit(oldp+220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr));
        bufp->chgCData(oldp+221,((0xfU & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr))))),4);
        bufp->chgBit(oldp+222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_incremented));
    }
    bufp->chgBit(oldp+223,(vlSelf->clock));
    bufp->chgBit(oldp+224,(vlSelf->reset));
    bufp->chgBit(oldp+225,(vlSelf->io_success));
    bufp->chgBit(oldp+226,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgBit(oldp+227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg));
    bufp->chgBit(oldp+228,(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out));
    __Vtemp_h70020078__0[0U] = vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_0;
    __Vtemp_h70020078__0[1U] = vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_1;
    __Vtemp_h70020078__0[2U] = vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_2;
    __Vtemp_h70020078__0[3U] = vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_3;
    __Vtemp_h70020078__0[4U] = vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_4;
    __Vtemp_h70020078__0[5U] = vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_5;
    __Vtemp_h70020078__0[6U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_7)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_6))));
    __Vtemp_h70020078__0[7U] = (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_7)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__mem_6))) 
                                        >> 0x20U));
    bufp->chgIData(oldp+229,((((0U == (0x1fU & ((0xe0U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                    << 5U)) 
                                                ^ (0x80U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                      << 4U)))))
                                ? 0U : (__Vtemp_h70020078__0[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & ((0xe0U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                    << 5U)) 
                                                ^ (0x80U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                      << 4U))))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((0xe0U 
                                              & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                 << 5U)) 
                                             ^ (0x80U 
                                                & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                   << 4U))))))) 
                              | (__Vtemp_h70020078__0[
                                 (7U & ((7U & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx)) 
                                        ^ (4U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                 >> 1U))))] 
                                 >> (0x1fU & ((0xe0U 
                                               & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                  << 5U)) 
                                              ^ (0x80U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                    << 4U))))))),32);
    __Vtemp_hf7f54520__0[0U] = vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_0;
    __Vtemp_hf7f54520__0[1U] = vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_1;
    __Vtemp_hf7f54520__0[2U] = vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_2;
    __Vtemp_hf7f54520__0[3U] = vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_3;
    __Vtemp_hf7f54520__0[4U] = vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_4;
    __Vtemp_hf7f54520__0[5U] = vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_5;
    __Vtemp_hf7f54520__0[6U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_7)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_6))));
    __Vtemp_hf7f54520__0[7U] = (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_7)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_6))) 
                                        >> 0x20U));
    bufp->chgIData(oldp+230,((((0U == (0x1fU & ((0xe0U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                    << 5U)) 
                                                ^ (0x80U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                      << 4U)))))
                                ? 0U : (__Vtemp_hf7f54520__0[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & ((0xe0U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                    << 5U)) 
                                                ^ (0x80U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                      << 4U))))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((0xe0U 
                                              & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                 << 5U)) 
                                             ^ (0x80U 
                                                & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                   << 4U))))))) 
                              | (__Vtemp_hf7f54520__0[
                                 (7U & ((7U & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx)) 
                                        ^ (4U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                 >> 1U))))] 
                                 >> (0x1fU & ((0xe0U 
                                               & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                  << 5U)) 
                                              ^ (0x80U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                    << 4U))))))),32);
    bufp->chgBit(oldp+231,(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset));
    bufp->chgBit(oldp+232,(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset));
    bufp->chgBit(oldp+233,(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out));
    bufp->chgBit(oldp+234,(vlSelf->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate__DOT__en_latched));
    bufp->chgIData(oldp+235,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                    ? 0U : (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 1U)))
                                : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___out_out_bits_data_WIRE_1)
                                              ? ((8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address))
                                                  ? 0x112380U
                                                  : 
                                                 (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))))
                                              : 0U)
                                          : 0U))),32);
    bufp->chgBit(oldp+236,(((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                            & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    bufp->chgBit(oldp+237,(((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                            & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)))));
    bufp->chgBit(oldp+238,(((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                            & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    bufp->chgBit(oldp+239,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_0)
                             : ((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0)
                                 : ((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                                     ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_0)
                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT__reg_0))))));
    bufp->chgBit(oldp+240,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                            & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    bufp->chgBit(oldp+241,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                            & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)))));
    bufp->chgBit(oldp+242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0));
    bufp->chgBit(oldp+243,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT__inFlight)))));
    __Vtemp_h4f4a057d__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_1__DOT__reg_0) 
                                                          << 0x1fU))) 
                                         << 1U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_0__DOT__reg_0))));
    __Vtemp_h4f4a057d__0[1U] = (((IData)((((QData)((IData)(
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                            << 0x1fU))) 
                                           << 1U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0)))) 
                                 << 1U) | (IData)((
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_1__DOT__reg_0) 
                                                                      << 0x1fU))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_0__DOT__reg_0))) 
                                                   >> 0x20U)));
    __Vtemp_h4f4a057d__0[2U] = (((IData)((((QData)((IData)(
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                            << 0x1fU))) 
                                           << 1U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0)))) 
                                 >> 0x1fU) | (((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                          << 0x1fU))) 
                                                         << 1U) 
                                                        | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0)))) 
                                               << 2U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                                             << 0x1fU))) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0))) 
                                                          >> 0x20U)) 
                                                 << 1U)));
    __Vtemp_h4f4a057d__0[3U] = (((1U & ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                   << 0x1fU))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0)))) 
                                        >> 0x1eU)) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                                << 0x1fU))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0))) 
                                             >> 0x20U)) 
                                    >> 0x1fU)) | ((2U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                                << 0x1fU))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0)))) 
                                                      >> 0x1eU)) 
                                                  | (((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                                      << 3U) 
                                                     | ((IData)(
                                                                ((((QData)((IData)(
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                                << 0x1fU))) 
                                                                   << 1U) 
                                                                  | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0))) 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    __Vtemp_h4f4a057d__0[4U] = ((1U & (((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                        >> 0x1dU) | 
                                       ((IData)(((((QData)((IData)(
                                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                    << 0x1fU))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0))) 
                                                 >> 0x20U)) 
                                        >> 0x1eU))) 
                                | ((2U & (((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                           >> 0x1dU) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                         << 0x1fU))) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0))) 
                                                      >> 0x20U)) 
                                             >> 0x1eU))) 
                                   | ((4U & ((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                             >> 0x1dU)) 
                                      | ((IData)(((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0)) 
                                                  >> 0x20U)) 
                                         << 3U))));
    bufp->chgQData(oldp+244,(((0U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x18U)))
                               ? ((0x83U >= (0xffU 
                                             & ((IData)(0x21U) 
                                                * (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x16U)))))
                                   ? (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          __Vtemp_h4f4a057d__0[
                                                          (((IData)(0x20U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x21U) 
                                                                * 
                                                                (3U 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x16U))))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x16U)))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x16U))))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x16U)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp_h4f4a057d__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0x16U))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x16U))))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp_h4f4a057d__0[
                                                               (7U 
                                                                & (((IData)(0x21U) 
                                                                    * 
                                                                    (3U 
                                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x16U))) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x16U))))))))
                                   : 0ULL) : 0ULL)),64);
    bufp->chgBit(oldp+246,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_r) 
                            & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT___io_deq_valid_output))));
    bufp->chgBit(oldp+247,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_r) 
                            & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT___io_enq_ready_output))));
    bufp->chgQData(oldp+248,(((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3[
                                     (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address) 
                                            >> 8U))] 
                                     >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address) 
                                                  >> 3U))))
                               ? (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_4[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0x3fc0U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address) 
                                                         << 3U))) 
                                                    >> 5U)])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_4[
                                                               (0x1feU 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address) 
                                                                   >> 2U))])))
                               : 0ULL)),64);
    bufp->chgQData(oldp+250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_data),64);
    __Vtemp_h36baf7de__0[0U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_data) 
                                 << 0x12U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__out_30_bits_denied) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__out_30_bits_sink) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__out_30_bits_source) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__out_30_bits_size) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__out_30_bits_param) 
                                                           << 3U) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__out_30_bits_opcode)))))));
    __Vtemp_h36baf7de__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_data) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_data 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h36baf7de__0[2U] = ((0xfffc0000U & ((((
                                                   (0xfffc0000U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
                                                        << 0x12U) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   | (0x3ffc0000U 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1) 
                                                          << 0x12U) 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                            [0U][2U] 
                                                            >> 2U)))) 
                                                  | (0xfffc0000U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2) 
                                                         << 0x12U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                           << 1U)))) 
                                                 | (0x3ffc0000U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_7) 
                                                        << 0x12U) 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                          >> 2U)))) 
                                                | (0x3ffc0000U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_8) 
                                                       << 0x12U) 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 2U))))) 
                                | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_data 
                                            >> 0x20U)) 
                                   >> 0xeU));
    bufp->chgWData(oldp+252,(__Vtemp_h36baf7de__0),83);
    __Vtemp_h49f9c6ae__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_1__DOT__reg_0) 
                                                          << 0x1fU))) 
                                         << 1U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_0__DOT__reg_0))));
    __Vtemp_h49f9c6ae__0[1U] = (((IData)((((QData)((IData)(
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                            << 0x1fU))) 
                                           << 1U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0)))) 
                                 << 1U) | (IData)((
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_1__DOT__reg_0) 
                                                                      << 0x1fU))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_0__DOT__reg_0))) 
                                                   >> 0x20U)));
    __Vtemp_h49f9c6ae__0[2U] = (((IData)((((QData)((IData)(
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                            << 0x1fU))) 
                                           << 1U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0)))) 
                                 >> 0x1fU) | (((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                          << 0x1fU))) 
                                                         << 1U) 
                                                        | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0)))) 
                                               << 2U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                                             << 0x1fU))) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0))) 
                                                          >> 0x20U)) 
                                                 << 1U)));
    __Vtemp_h49f9c6ae__0[3U] = (((1U & ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                   << 0x1fU))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0)))) 
                                        >> 0x1eU)) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_3__DOT__reg_0) 
                                                                << 0x1fU))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_2__DOT__reg_0))) 
                                             >> 0x20U)) 
                                    >> 0x1fU)) | ((2U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                                << 0x1fU))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0)))) 
                                                      >> 0x1eU)) 
                                                  | (((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                                      << 3U) 
                                                     | ((IData)(
                                                                ((((QData)((IData)(
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                                << 0x1fU))) 
                                                                   << 1U) 
                                                                  | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0))) 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    __Vtemp_h49f9c6ae__0[4U] = ((1U & (((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                        >> 0x1dU) | 
                                       ((IData)(((((QData)((IData)(
                                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                    << 0x1fU))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0))) 
                                                 >> 0x20U)) 
                                        >> 0x1eU))) 
                                | ((2U & (((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                           >> 0x1dU) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_5__DOT__reg_0) 
                                                                         << 0x1fU))) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_4__DOT__reg_0))) 
                                                      >> 0x20U)) 
                                             >> 0x1eU))) 
                                   | ((4U & ((IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0))) 
                                             >> 0x1dU)) 
                                      | ((IData)(((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__regs_6__DOT__reg_0)) 
                                                  >> 0x20U)) 
                                         << 3U))));
    VL_EXTEND_WQ(65,33, __Vtemp_hcd44d09a__0, ((0U 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U)))
                                                ? (
                                                   (0x83U 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (3U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x16U)))))
                                                    ? 
                                                   (0x1ffffffffULL 
                                                    & (((QData)((IData)(
                                                                        __Vtemp_h49f9c6ae__0[
                                                                        (((IData)(0x20U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x21U) 
                                                                              * 
                                                                              (3U 
                                                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0x16U))))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x21U) 
                                                              * 
                                                              (3U 
                                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x16U)))))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(0x40U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x21U) 
                                                              * 
                                                              (3U 
                                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x16U))))))) 
                                                       | (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0x21U) 
                                                                * 
                                                                (3U 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x16U)))))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(
                                                                            __Vtemp_h49f9c6ae__0[
                                                                            (((IData)(0x1fU) 
                                                                              + 
                                                                              (0xffU 
                                                                               & ((IData)(0x21U) 
                                                                                * 
                                                                                (3U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0x16U))))) 
                                                                             >> 5U)])) 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x21U) 
                                                                 * 
                                                                 (3U 
                                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 0x16U))))))) 
                                                          | ((QData)((IData)(
                                                                             __Vtemp_h49f9c6ae__0[
                                                                             (7U 
                                                                              & (((IData)(0x21U) 
                                                                                * 
                                                                                (3U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0x16U))) 
                                                                                >> 5U))])) 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x21U) 
                                                                 * 
                                                                 (3U 
                                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 0x16U))))))))
                                                    : 0ULL)
                                                : 0ULL));
    __Vtemp_haef7f8fd__0[0U] = ((__Vtemp_hcd44d09a__0[0U] 
                                 << 0x14U) | ((0x3ff80U 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 1U)) 
                                              | ((0x60U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 1U)) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))));
    __Vtemp_haef7f8fd__0[1U] = ((__Vtemp_hcd44d09a__0[0U] 
                                 >> 0xcU) | (__Vtemp_hcd44d09a__0[1U] 
                                             << 0x14U));
    __Vtemp_haef7f8fd__0[2U] = ((__Vtemp_hcd44d09a__0[1U] 
                                 >> 0xcU) | (__Vtemp_hcd44d09a__0[2U] 
                                             << 0x14U));
    bufp->chgWData(oldp+255,(__Vtemp_haef7f8fd__0),85);
    bufp->chgBit(oldp+258,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0) 
                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0))));
    bufp->chgBit(oldp+259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid));
    bufp->chgBit(oldp+260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd));
    bufp->chgBit(oldp+261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_4630));
    bufp->chgBit(oldp+262,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) 
                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb))));
    bufp->chgBit(oldp+263,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)))));
    bufp->chgBit(oldp+264,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset)))));
    bufp->chgIData(oldp+265,(((1U & ((0xfe04U | (((- (IData)(
                                                             (0U 
                                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)))) 
                                                  << 0x10U) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                     << 8U) 
                                                    | (((1U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                        << 7U) 
                                                       | (((1U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                           << 6U) 
                                                          | (((0U 
                                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                              << 5U) 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                                 << 4U) 
                                                                | (((1U 
                                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                                    << 3U) 
                                                                   | (((1U 
                                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
                                                                       << 1U) 
                                                                      | (2U 
                                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN))))))))))) 
                                     >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex)))
                               ? (((0U == (0x1fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                            << 5U)))
                                    ? 0U : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_2[
                                            (((IData)(0x1fU) 
                                              + (0x3ffU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                                      << 5U))))) 
                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_2[
                                     (0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))] 
                                     >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                                  << 5U))))
                               : 0U)),32);
    bufp->chgBit(oldp+266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset));
    bufp->chgBit(oldp+267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset));
    bufp->chgIData(oldp+268,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___out_out_bits_data_WIRE_1)
                               ? ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address))
                                   ? 0x112380U : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))))
                               : 0U)),32);
    bufp->chgBit(oldp+269,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0) 
                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))));
    bufp->chgBit(oldp+270,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))));
    bufp->chgBit(oldp+271,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))));
    bufp->chgBit(oldp+272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore));
    bufp->chgCData(oldp+273,((((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__full) 
                               << 3U) | (7U & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value) 
                                               - (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value))))),4);
    bufp->chgBit(oldp+274,(((~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__full)) 
                            & (7U > (((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__full) 
                                      << 3U) | (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value))))))));
    bufp->chgBit(oldp+275,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__restore));
}

void VTestHarness___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_cleanup\n"); );
    // Init
    VTestHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestHarness___024root*>(voidSelf);
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
}
