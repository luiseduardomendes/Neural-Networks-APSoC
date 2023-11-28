// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_16(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_full_sub_16\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h70020078__0;
    VlWide<8>/*255:0*/ __Vtemp_hf7f54520__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f4a057d__0;
    VlWide<3>/*95:0*/ __Vtemp_h36baf7de__0;
    VlWide<5>/*159:0*/ __Vtemp_h49f9c6ae__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd44d09a__0;
    VlWide<3>/*95:0*/ __Vtemp_haef7f8fd__0;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__0;
    VlWide<5>/*159:0*/ __Vtemp_h0419626e__0;
    VlWide<5>/*159:0*/ __Vtemp_hbdac2413__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bf1a41d__0;
    VlWide<5>/*159:0*/ __Vtemp_h20d6fbff__0;
    VlWide<5>/*159:0*/ __Vtemp_h54d31e6c__0;
    VlWide<5>/*159:0*/ __Vtemp_h70e5f797__0;
    // Body
    bufp->fullBit(oldp+40142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+40143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__x1_0_REG));
    bufp->fullBit(oldp+40144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_wfi));
    bufp->fullBit(oldp+40145,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_resp_ready));
    bufp->fullBit(oldp+40146,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___io_csr_stall_output));
    bufp->fullCData(oldp+40147,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
    bufp->fullBit(oldp+40148,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)))));
    bufp->fullBit(oldp+40149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345));
    bufp->fullBit(oldp+40150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528));
    bufp->fullBit(oldp+40151,((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))));
    bufp->fullBit(oldp+40152,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn));
    bufp->fullBit(oldp+40153,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn));
    bufp->fullBit(oldp+40154,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn));
    bufp->fullBit(oldp+40155,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528) 
                               & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_womask_T_632)))));
    bufp->fullBit(oldp+40156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922));
    bufp->fullBit(oldp+40157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510));
    bufp->fullBit(oldp+40158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191));
    bufp->fullBit(oldp+40159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074));
    bufp->fullBit(oldp+40160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722));
    bufp->fullBit(oldp+40161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442));
    bufp->fullBit(oldp+40162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111));
    bufp->fullBit(oldp+40163,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146));
    bufp->fullBit(oldp+40164,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818));
    bufp->fullBit(oldp+40165,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done));
    bufp->fullBit(oldp+40166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done));
    bufp->fullBit(oldp+40167,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))));
    bufp->fullBit(oldp+40168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc));
    bufp->fullBit(oldp+40169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1));
    bufp->fullBit(oldp+40170,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))));
    bufp->fullBit(oldp+40171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2));
    bufp->fullBit(oldp+40172,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2));
    bufp->fullBit(oldp+40173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3));
    bufp->fullBit(oldp+40174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3));
    bufp->fullBit(oldp+40175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4));
    bufp->fullBit(oldp+40176,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4));
    bufp->fullBit(oldp+40177,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5));
    bufp->fullBit(oldp+40178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5));
    bufp->fullCData(oldp+40179,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
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
    bufp->fullBit(oldp+40180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2));
    bufp->fullBit(oldp+40181,((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                            >> 3U)))));
    bufp->fullBit(oldp+40182,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                                   >> 3U)) & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                              >> 0x16U))));
    bufp->fullBit(oldp+40183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm));
    bufp->fullBit(oldp+40184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
    bufp->fullBit(oldp+40185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
    bufp->fullBit(oldp+40186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm));
    bufp->fullBit(oldp+40187,((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))));
    bufp->fullBit(oldp+40188,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_10));
    bufp->fullBit(oldp+40189,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_12));
    bufp->fullBit(oldp+40190,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm)) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm)))));
    bufp->fullBit(oldp+40191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_done));
    bufp->fullBit(oldp+40192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+40193,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag)))));
    bufp->fullBit(oldp+40194,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+40195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+40196,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag)))));
    bufp->fullBit(oldp+40197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+40198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+40199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+40200,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+40201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+40202,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+40203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+40204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+40205,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_5) 
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
    bufp->fullBit(oldp+40206,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___out_wofireMux_T) 
                                 & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                                & (0U == (0xff8U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address))) 
                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                                  >> 4U))));
    bufp->fullBit(oldp+40207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_deq));
    bufp->fullBit(oldp+40208,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask)) 
                               & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                                         >> 3U)) & 
                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x16U))))));
    bufp->fullCData(oldp+40209,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 0x17U))),8);
    bufp->fullBit(oldp+40210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq));
    bufp->fullCData(oldp+40211,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray),4);
    bufp->fullBit(oldp+40212,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40213,((1U & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray))));
    bufp->fullBit(oldp+40214,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+40215,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+40216,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullCData(oldp+40217,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__index),3);
    bufp->fullCData(oldp+40218,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented),4);
    bufp->fullCData(oldp+40219,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx),4);
    bufp->fullBit(oldp+40220,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40221,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40222,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40223,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40224,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+40225,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray),4);
    bufp->fullBit(oldp+40226,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullCData(oldp+40227,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx),4);
    bufp->fullBit(oldp+40228,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid));
    bufp->fullBit(oldp+40229,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40230,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40231,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40232,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40233,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40234,((1U & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+40235,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+40236,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+40237,((1U & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+40238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset));
    bufp->fullBit(oldp+40239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset));
    bufp->fullBit(oldp+40240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset));
    bufp->fullBit(oldp+40241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset));
    bufp->fullBit(oldp+40242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs));
    bufp->fullBit(oldp+40243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0));
    bufp->fullBit(oldp+40244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume));
    bufp->fullBit(oldp+40245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract));
    bufp->fullBit(oldp+40246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40273,((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))));
    bufp->fullBit(oldp+40274,((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))));
    bufp->fullBit(oldp+40275,((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))));
    bufp->fullCData(oldp+40276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction),5);
    bufp->fullBit(oldp+40277,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0));
    bufp->fullCData(oldp+40278,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_4) 
                                  << 4U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_3) 
                                             << 3U) 
                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0)))))),5);
    bufp->fullBit(oldp+40279,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_1));
    bufp->fullBit(oldp+40280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_2));
    bufp->fullBit(oldp+40281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_3));
    bufp->fullBit(oldp+40282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_4));
    bufp->fullIData(oldp+40283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data),32);
    bufp->fullBit(oldp+40284,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                                     >> 3U))));
    bufp->fullBit(oldp+40285,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_data 
                                     >> 2U))));
    bufp->fullBit(oldp+40286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+40300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+40303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+40304,((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullBit(oldp+40305,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullBit(oldp+40306,((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullBit(oldp+40307,((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullBit(oldp+40308,((0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullBit(oldp+40309,((0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullBit(oldp+40310,((0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))));
    bufp->fullCData(oldp+40311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState),4);
    bufp->fullBit(oldp+40312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_WIRE));
    bufp->fullBit(oldp+40313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___io_dmi_resp_ready_output));
    bufp->fullBit(oldp+40314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_shift));
    bufp->fullBit(oldp+40315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture));
    bufp->fullBit(oldp+40316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_update));
    bufp->fullBit(oldp+40317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_valid));
    bufp->fullBit(oldp+40318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture));
    bufp->fullBit(oldp+40319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_update));
    bufp->fullBit(oldp+40320,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture)) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_update))));
    bufp->fullBit(oldp+40321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_shift));
    bufp->fullBit(oldp+40322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_capture));
    bufp->fullBit(oldp+40323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_d_ready));
    bufp->fullBit(oldp+40324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented));
    bufp->fullBit(oldp+40325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid));
    bufp->fullBit(oldp+40326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+40327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_1_d_ready));
    bufp->fullBit(oldp+40328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_valid_output));
    bufp->fullBit(oldp+40329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output));
    bufp->fullBit(oldp+40330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output));
    bufp->fullBit(oldp+40331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0));
    bufp->fullBit(oldp+40332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_12));
    bufp->fullBit(oldp+40333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set));
    bufp->fullBit(oldp+40334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done));
    bufp->fullCData(oldp+40335,((0xfU & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done))))),4);
    bufp->fullBit(oldp+40336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_d_ready));
    bufp->fullBit(oldp+40337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_a_ready));
    bufp->fullBit(oldp+40338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__in_a_ready));
    bufp->fullBit(oldp+40339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_d_ready));
    bufp->fullBit(oldp+40340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3));
    bufp->fullCData(oldp+40341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight),2);
    bufp->fullBit(oldp+40342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set));
    bufp->fullBit(oldp+40343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+40344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready));
    bufp->fullBit(oldp+40345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_set));
    bufp->fullBit(oldp+40346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+40347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_clr));
    bufp->fullCData(oldp+40348,((0xfU & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_clr))))),4);
    bufp->fullBit(oldp+40349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__latch));
    bufp->fullBit(oldp+40350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_set));
    bufp->fullBit(oldp+40351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+40352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr));
    bufp->fullCData(oldp+40353,((0xfU & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_clr))))),4);
    bufp->fullBit(oldp+40354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_incremented));
    bufp->fullBit(oldp+40355,(vlSelf->clock));
    bufp->fullBit(oldp+40356,(vlSelf->reset));
    bufp->fullBit(oldp+40357,(vlSelf->io_success));
    bufp->fullBit(oldp+40358,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+40359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg));
    bufp->fullBit(oldp+40360,(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out));
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
    bufp->fullIData(oldp+40361,((((0U == (0x1fU & (
                                                   (0xe0U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0x80U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                       << 4U)))))
                                   ? 0U : (__Vtemp_h70020078__0[
                                           (((IData)(0x1fU) 
                                             + (0xffU 
                                                & ((0xe0U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0x80U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                       << 4U))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((0xe0U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                         << 5U)) 
                                                     ^ 
                                                     (0x80U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                         << 4U))))))) 
                                 | (__Vtemp_h70020078__0[
                                    (7U & ((7U & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx)) 
                                           ^ (4U & 
                                              ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                               >> 1U))))] 
                                    >> (0x1fU & ((0xe0U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx) 
                                                     << 5U)) 
                                                 ^ 
                                                 (0x80U 
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
    bufp->fullIData(oldp+40362,((((0U == (0x1fU & (
                                                   (0xe0U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0x80U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                       << 4U)))))
                                   ? 0U : (__Vtemp_hf7f54520__0[
                                           (((IData)(0x1fU) 
                                             + (0xffU 
                                                & ((0xe0U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0x80U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                       << 4U))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((0xe0U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                         << 5U)) 
                                                     ^ 
                                                     (0x80U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                         << 4U))))))) 
                                 | (__Vtemp_hf7f54520__0[
                                    (7U & ((7U & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx)) 
                                           ^ (4U & 
                                              ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                               >> 1U))))] 
                                    >> (0x1fU & ((0xe0U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                     << 5U)) 
                                                 ^ 
                                                 (0x80U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                                     << 4U))))))),32);
    bufp->fullBit(oldp+40363,(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset));
    bufp->fullBit(oldp+40364,(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset));
    bufp->fullBit(oldp+40365,(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out));
    bufp->fullBit(oldp+40366,(vlSelf->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate__DOT__en_latched));
    bufp->fullIData(oldp+40367,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                       ? 0U : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 1U)))
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1)
                                             ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___out_out_bits_data_WIRE_1)
                                                 ? 
                                                ((8U 
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
    bufp->fullBit(oldp+40368,(((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                               & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    bufp->fullBit(oldp+40369,(((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                               & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)))));
    bufp->fullBit(oldp+40370,(((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                               & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    bufp->fullBit(oldp+40371,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_0)
                                : ((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0)
                                    : ((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_0)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT__reg_0))))));
    bufp->fullBit(oldp+40372,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                               & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    bufp->fullBit(oldp+40373,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                               & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)))));
    bufp->fullBit(oldp+40374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0));
    bufp->fullBit(oldp+40375,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0) 
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
    bufp->fullQData(oldp+40376,(((0U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U)))
                                  ? ((0x83U >= (0xffU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
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
                                             << ((0U 
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
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x16U))))))))
                                      : 0ULL) : 0ULL)),64);
    bufp->fullBit(oldp+40378,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_r) 
                               & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT___io_deq_valid_output))));
    bufp->fullBit(oldp+40379,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_r) 
                               & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT___io_enq_ready_output))));
    bufp->fullQData(oldp+40380,(((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3[
                                        (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address) 
                                               >> 8U))] 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address) 
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
    bufp->fullQData(oldp+40382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_data),64);
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
    bufp->fullWData(oldp+40384,(__Vtemp_h36baf7de__0),83);
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
    bufp->fullWData(oldp+40387,(__Vtemp_haef7f8fd__0),85);
    bufp->fullBit(oldp+40390,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0))));
    bufp->fullBit(oldp+40391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid));
    bufp->fullBit(oldp+40392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd));
    bufp->fullBit(oldp+40393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_4630));
    bufp->fullBit(oldp+40394,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb))));
    bufp->fullBit(oldp+40395,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)))));
    bufp->fullBit(oldp+40396,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset)))));
    bufp->fullIData(oldp+40397,(((1U & ((0xfe04U | 
                                         (((- (IData)(
                                                      (0U 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)))) 
                                           << 0x10U) 
                                          | (((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN)) 
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
                                  ? (((0U == (0x1fU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                                 << 5U)))
                                       ? 0U : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_2[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                                     << 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                                       << 5U))))) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_2[
                                        (0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))] 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex) 
                                             << 5U))))
                                  : 0U)),32);
    bufp->fullBit(oldp+40398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset));
    bufp->fullBit(oldp+40399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset));
    bufp->fullIData(oldp+40400,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___out_out_bits_data_WIRE_1)
                                  ? ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address))
                                      ? 0x112380U : 
                                     (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                        << 1U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))))
                                  : 0U)),32);
    bufp->fullBit(oldp+40401,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0) 
                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))));
    bufp->fullBit(oldp+40402,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))));
    bufp->fullBit(oldp+40403,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))));
    bufp->fullBit(oldp+40404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore));
    bufp->fullCData(oldp+40405,((((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__full) 
                                  << 3U) | (7U & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value) 
                                                  - (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value))))),4);
    bufp->fullBit(oldp+40406,(((~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__full)) 
                               & (7U > (((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__full) 
                                         << 3U) | (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value) 
                                                      - (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value))))))));
    bufp->fullBit(oldp+40407,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__restore));
    bufp->fullIData(oldp+40408,(3U),32);
    bufp->fullBit(oldp+40409,(1U));
    bufp->fullIData(oldp+40410,(1U),32);
    bufp->fullIData(oldp+40411,(0U),32);
    bufp->fullIData(oldp+40412,(0xffffffffU),32);
    bufp->fullBit(oldp+40413,(0U));
    __Vtemp_h18c2d470__0[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__0[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__0[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__0[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__0[4U] = 0x74696cU;
    bufp->fullWData(oldp+40414,(__Vtemp_h18c2d470__0),152);
    bufp->fullIData(oldp+40419,(0x20U),32);
    bufp->fullIData(oldp+40420,(0U),32);
    bufp->fullQData(oldp+40421,(0ULL),64);
    bufp->fullCData(oldp+40423,(0U),2);
    bufp->fullCData(oldp+40424,(6U),3);
    bufp->fullCData(oldp+40425,(0U),3);
    bufp->fullCData(oldp+40426,(4U),3);
    bufp->fullCData(oldp+40427,(6U),4);
    __Vtemp_h0419626e__0[0U] = 0x733d2564U;
    __Vtemp_h0419626e__0[1U] = 0x79636c65U;
    __Vtemp_h0419626e__0[2U] = 0x72655f63U;
    __Vtemp_h0419626e__0[3U] = 0x785f636fU;
    __Vtemp_h0419626e__0[4U] = 0x6d61U;
    bufp->fullWData(oldp+40428,(__Vtemp_h0419626e__0),144);
    bufp->fullQData(oldp+40433,(0ULL),40);
    bufp->fullCData(oldp+40435,(0U),8);
    bufp->fullCData(oldp+40436,(0U),5);
    bufp->fullQData(oldp+40437,(0ULL),41);
    bufp->fullIData(oldp+40439,(0U),20);
    bufp->fullCData(oldp+40440,(1U),2);
    bufp->fullIData(oldp+40441,(0U),30);
    bufp->fullCData(oldp+40442,(0U),6);
    __Vtemp_hbdac2413__0[0U] = 0x743d2564U;
    __Vtemp_hbdac2413__0[1U] = 0x6d656f75U;
    __Vtemp_hbdac2413__0[2U] = 0x695f7469U;
    __Vtemp_hbdac2413__0[3U] = 0x6d6d696eU;
    __Vtemp_hbdac2413__0[4U] = 0x6765U;
    bufp->fullWData(oldp+40443,(__Vtemp_hbdac2413__0),144);
    bufp->fullIData(oldp+40448,(0x2710U),32);
    bufp->fullQData(oldp+40449,(0x15800000ULL),33);
    bufp->fullSData(oldp+40451,(0x1feU),9);
    bufp->fullQData(oldp+40452,(0ULL),33);
    bufp->fullIData(oldp+40454,(0U),24);
    bufp->fullCData(oldp+40455,(0U),7);
    bufp->fullQData(oldp+40456,(0x100000000ULL),33);
    bufp->fullCData(oldp+40458,(1U),3);
    bufp->fullSData(oldp+40459,(0xffffU),16);
    bufp->fullCData(oldp+40460,(0U),4);
    bufp->fullCData(oldp+40461,(4U),4);
    bufp->fullCData(oldp+40462,(8U),4);
    bufp->fullCData(oldp+40463,(0xcU),4);
    bufp->fullCData(oldp+40464,(1U),4);
    bufp->fullCData(oldp+40465,(5U),4);
    bufp->fullCData(oldp+40466,(9U),4);
    bufp->fullCData(oldp+40467,(0xdU),4);
    bufp->fullCData(oldp+40468,(2U),4);
    bufp->fullCData(oldp+40469,(0xaU),4);
    bufp->fullCData(oldp+40470,(0xeU),4);
    bufp->fullCData(oldp+40471,(3U),4);
    bufp->fullCData(oldp+40472,(7U),4);
    bufp->fullCData(oldp+40473,(0xbU),4);
    bufp->fullCData(oldp+40474,(0xfU),4);
    __Vtemp_h4bf1a41d__0[0U] = 0x783d2564U;
    __Vtemp_h4bf1a41d__0[1U] = 0x72745f74U;
    __Vtemp_h4bf1a41d__0[2U] = 0x7561U;
    bufp->fullWData(oldp+40475,(__Vtemp_h4bf1a41d__0),80);
    bufp->fullIData(oldp+40478,(1U),32);
    __Vtemp_h20d6fbff__0[0U] = 0x663d2564U;
    __Vtemp_h20d6fbff__0[1U] = 0x72696e74U;
    __Vtemp_h20d6fbff__0[2U] = 0x74785f70U;
    __Vtemp_h20d6fbff__0[3U] = 0x6172745fU;
    __Vtemp_h20d6fbff__0[4U] = 0x75U;
    bufp->fullWData(oldp+40479,(__Vtemp_h20d6fbff__0),136);
    __Vtemp_h54d31e6c__0[0U] = 0x6e3d2564U;
    __Vtemp_h54d31e6c__0[1U] = 0x745f7069U;
    __Vtemp_h54d31e6c__0[2U] = 0x5f626f6fU;
    __Vtemp_h54d31e6c__0[3U] = 0x73746f6dU;
    __Vtemp_h54d31e6c__0[4U] = 0x6375U;
    bufp->fullWData(oldp+40484,(__Vtemp_h54d31e6c__0),144);
    bufp->fullBit(oldp+40489,(0U));
    __Vtemp_h70e5f797__0[0U] = 0x653d2564U;
    __Vtemp_h70e5f797__0[1U] = 0x6e61626cU;
    __Vtemp_h70e5f797__0[2U] = 0x62625f65U;
    __Vtemp_h70e5f797__0[3U] = 0x61675f72U;
    __Vtemp_h70e5f797__0[4U] = 0x6a74U;
    bufp->fullWData(oldp+40490,(__Vtemp_h70e5f797__0),144);
    bufp->fullIData(oldp+40495,(0x40U),32);
    bufp->fullIData(oldp+40496,(4U),32);
    bufp->fullIData(oldp+40497,(0x10000000U),32);
    bufp->fullIData(oldp+40498,(8U),32);
    bufp->fullIData(oldp+40499,(0x5f5e100U),32);
    bufp->fullSData(oldp+40500,(0x364U),16);
}
