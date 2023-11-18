// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7538(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7538\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp14312[4];
    WData/*127:0*/ __Vtemp14313[4];
    WData/*127:0*/ __Vtemp14319[4];
    WData/*127:0*/ __Vtemp14320[4];
    WData/*127:0*/ __Vtemp14328[4];
    WData/*127:0*/ __Vtemp14329[4];
    WData/*1055:0*/ __Vtemp14337[33];
    WData/*1055:0*/ __Vtemp14338[33];
    WData/*287:0*/ __Vtemp14347[9];
    WData/*1055:0*/ __Vtemp14350[33];
    WData/*1055:0*/ __Vtemp14351[33];
    // Body
    __Vtemp14312[0U] = 1U;
    __Vtemp14312[1U] = 0U;
    __Vtemp14312[2U] = 0U;
    __Vtemp14312[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp14313, __Vtemp14312, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp14319[0U] = 1U;
    __Vtemp14319[1U] = 0U;
    __Vtemp14319[2U] = 0U;
    __Vtemp14319[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp14320, __Vtemp14319, 
                  (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14313[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                                 ? 
                                                __Vtemp14320[0U]
                                                 : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14313[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                                 ? 
                                                __Vtemp14320[1U]
                                                 : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[2U] 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp14313[2U] : 0U)) & (~ 
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp14320[2U]
                                                     : 0U))));
    __Vtemp14328[0U] = 1U;
    __Vtemp14328[1U] = 0U;
    __Vtemp14328[2U] = 0U;
    __Vtemp14328[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp14329, __Vtemp14328, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14329[0U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14329[1U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14329[2U] : 0U)));
    __Vtemp14337[0U] = 0xfU;
    __Vtemp14337[1U] = 0U;
    __Vtemp14337[2U] = 0U;
    __Vtemp14337[3U] = 0U;
    __Vtemp14337[4U] = 0U;
    __Vtemp14337[5U] = 0U;
    __Vtemp14337[6U] = 0U;
    __Vtemp14337[7U] = 0U;
    __Vtemp14337[8U] = 0U;
    __Vtemp14337[9U] = 0U;
    __Vtemp14337[0xaU] = 0U;
    __Vtemp14337[0xbU] = 0U;
    __Vtemp14337[0xcU] = 0U;
    __Vtemp14337[0xdU] = 0U;
    __Vtemp14337[0xeU] = 0U;
    __Vtemp14337[0xfU] = 0U;
    __Vtemp14337[0x10U] = 0U;
    __Vtemp14337[0x11U] = 0U;
    __Vtemp14337[0x12U] = 0U;
    __Vtemp14337[0x13U] = 0U;
    __Vtemp14337[0x14U] = 0U;
    __Vtemp14337[0x15U] = 0U;
    __Vtemp14337[0x16U] = 0U;
    __Vtemp14337[0x17U] = 0U;
    __Vtemp14337[0x18U] = 0U;
    __Vtemp14337[0x19U] = 0U;
    __Vtemp14337[0x1aU] = 0U;
    __Vtemp14337[0x1bU] = 0U;
    __Vtemp14337[0x1cU] = 0U;
    __Vtemp14337[0x1dU] = 0U;
    __Vtemp14337[0x1eU] = 0U;
    __Vtemp14337[0x1fU] = 0U;
    __Vtemp14337[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp14338, __Vtemp14337, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[0U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[1U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[2U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[3U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[4U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[5U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[6U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[7U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp14338[8U] : 0U)));
    VL_SHIFTR_WWI(260,260,10, __Vtemp14347, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp14347[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp14347[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp14347[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp14347[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp14347[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp14347[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp14347[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp14347[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = (0xfU & __Vtemp14347[8U]);
    __Vtemp14350[0U] = 0xfU;
    __Vtemp14350[1U] = 0U;
    __Vtemp14350[2U] = 0U;
    __Vtemp14350[3U] = 0U;
    __Vtemp14350[4U] = 0U;
    __Vtemp14350[5U] = 0U;
    __Vtemp14350[6U] = 0U;
    __Vtemp14350[7U] = 0U;
    __Vtemp14350[8U] = 0U;
    __Vtemp14350[9U] = 0U;
    __Vtemp14350[0xaU] = 0U;
    __Vtemp14350[0xbU] = 0U;
    __Vtemp14350[0xcU] = 0U;
    __Vtemp14350[0xdU] = 0U;
    __Vtemp14350[0xeU] = 0U;
    __Vtemp14350[0xfU] = 0U;
    __Vtemp14350[0x10U] = 0U;
    __Vtemp14350[0x11U] = 0U;
    __Vtemp14350[0x12U] = 0U;
    __Vtemp14350[0x13U] = 0U;
    __Vtemp14350[0x14U] = 0U;
    __Vtemp14350[0x15U] = 0U;
    __Vtemp14350[0x16U] = 0U;
    __Vtemp14350[0x17U] = 0U;
    __Vtemp14350[0x18U] = 0U;
    __Vtemp14350[0x19U] = 0U;
    __Vtemp14350[0x1aU] = 0U;
    __Vtemp14350[0x1bU] = 0U;
    __Vtemp14350[0x1cU] = 0U;
    __Vtemp14350[0x1dU] = 0U;
    __Vtemp14350[0x1eU] = 0U;
    __Vtemp14350[0x1fU] = 0U;
    __Vtemp14350[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp14351, __Vtemp14350, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[1U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[2U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[3U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[4U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[5U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[6U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[7U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[8U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[9U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? __Vtemp14351[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode)))
            ? (0x7fffU & __Vtemp14351[0x20U]) : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7539(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7539\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp14356[4];
    WData/*127:0*/ __Vtemp14357[4];
    WData/*1055:0*/ __Vtemp14365[33];
    WData/*1055:0*/ __Vtemp14366[33];
    WData/*287:0*/ __Vtemp14375[9];
    WData/*1055:0*/ __Vtemp14378[33];
    WData/*1055:0*/ __Vtemp14379[33];
    WData/*16415:0*/ __Vtemp14385[513];
    WData/*16415:0*/ __Vtemp14386[513];
    // Body
    __Vtemp14356[0U] = 1U;
    __Vtemp14356[1U] = 0U;
    __Vtemp14356[2U] = 0U;
    __Vtemp14356[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp14357, __Vtemp14356, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14357[0U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14357[1U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14357[2U] : 0U)));
    __Vtemp14365[0U] = 0xfU;
    __Vtemp14365[1U] = 0U;
    __Vtemp14365[2U] = 0U;
    __Vtemp14365[3U] = 0U;
    __Vtemp14365[4U] = 0U;
    __Vtemp14365[5U] = 0U;
    __Vtemp14365[6U] = 0U;
    __Vtemp14365[7U] = 0U;
    __Vtemp14365[8U] = 0U;
    __Vtemp14365[9U] = 0U;
    __Vtemp14365[0xaU] = 0U;
    __Vtemp14365[0xbU] = 0U;
    __Vtemp14365[0xcU] = 0U;
    __Vtemp14365[0xdU] = 0U;
    __Vtemp14365[0xeU] = 0U;
    __Vtemp14365[0xfU] = 0U;
    __Vtemp14365[0x10U] = 0U;
    __Vtemp14365[0x11U] = 0U;
    __Vtemp14365[0x12U] = 0U;
    __Vtemp14365[0x13U] = 0U;
    __Vtemp14365[0x14U] = 0U;
    __Vtemp14365[0x15U] = 0U;
    __Vtemp14365[0x16U] = 0U;
    __Vtemp14365[0x17U] = 0U;
    __Vtemp14365[0x18U] = 0U;
    __Vtemp14365[0x19U] = 0U;
    __Vtemp14365[0x1aU] = 0U;
    __Vtemp14365[0x1bU] = 0U;
    __Vtemp14365[0x1cU] = 0U;
    __Vtemp14365[0x1dU] = 0U;
    __Vtemp14365[0x1eU] = 0U;
    __Vtemp14365[0x1fU] = 0U;
    __Vtemp14365[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp14366, __Vtemp14365, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[0U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[1U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[2U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[3U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[4U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[5U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[6U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[7U] : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp14366[8U] : 0U)));
    VL_SHIFTR_WWI(260,260,10, __Vtemp14375, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp14375[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp14375[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp14375[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp14375[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp14375[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp14375[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp14375[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp14375[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = (0xfU & __Vtemp14375[8U]);
    __Vtemp14378[0U] = 0xfU;
    __Vtemp14378[1U] = 0U;
    __Vtemp14378[2U] = 0U;
    __Vtemp14378[3U] = 0U;
    __Vtemp14378[4U] = 0U;
    __Vtemp14378[5U] = 0U;
    __Vtemp14378[6U] = 0U;
    __Vtemp14378[7U] = 0U;
    __Vtemp14378[8U] = 0U;
    __Vtemp14378[9U] = 0U;
    __Vtemp14378[0xaU] = 0U;
    __Vtemp14378[0xbU] = 0U;
    __Vtemp14378[0xcU] = 0U;
    __Vtemp14378[0xdU] = 0U;
    __Vtemp14378[0xeU] = 0U;
    __Vtemp14378[0xfU] = 0U;
    __Vtemp14378[0x10U] = 0U;
    __Vtemp14378[0x11U] = 0U;
    __Vtemp14378[0x12U] = 0U;
    __Vtemp14378[0x13U] = 0U;
    __Vtemp14378[0x14U] = 0U;
    __Vtemp14378[0x15U] = 0U;
    __Vtemp14378[0x16U] = 0U;
    __Vtemp14378[0x17U] = 0U;
    __Vtemp14378[0x18U] = 0U;
    __Vtemp14378[0x19U] = 0U;
    __Vtemp14378[0x1aU] = 0U;
    __Vtemp14378[0x1bU] = 0U;
    __Vtemp14378[0x1cU] = 0U;
    __Vtemp14378[0x1dU] = 0U;
    __Vtemp14378[0x1eU] = 0U;
    __Vtemp14378[0x1fU] = 0U;
    __Vtemp14378[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp14379, __Vtemp14378, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[1U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[2U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[3U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[4U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[5U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[6U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[7U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[8U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[9U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp14379[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
            ? (0x7fffU & __Vtemp14379[0x20U]) : 0U);
    VL_EXTEND_WI(16387,4, __Vtemp14385, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                   << 1U))
                                          : 0U));
    VL_SHIFTL_WWI(16387,16387,14, __Vtemp14386, __Vtemp14385, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x20U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x20U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x20U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x21U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x21U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x21U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x22U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x22U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x22U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x23U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x23U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x23U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x24U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x24U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x24U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x25U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x25U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x25U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x26U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x26U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x26U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x27U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x27U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x27U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x28U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x28U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x28U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x29U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x29U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x29U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x2aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x2aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x2aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x2bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x2bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x2bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x2cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x2cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x2cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x2dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x2dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x2dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x2eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x2eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x2eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x2fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x2fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x2fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x30U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x30U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x30U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x30U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x31U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x31U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x31U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x31U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x32U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x32U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x32U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x32U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x33U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x33U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x33U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x33U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x34U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x34U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x34U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x34U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x35U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x35U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x35U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x35U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x36U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x36U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x36U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x36U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x37U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x37U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x37U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x37U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x38U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x38U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x38U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x38U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x39U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x39U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x39U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x39U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x3aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x3aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x3aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x3bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x3bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x3bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x3cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x3cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x3cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x3dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x3dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x3dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x3eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x3eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x3eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x3fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x3fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x3fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x40U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x40U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x40U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x40U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x41U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x41U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x41U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x41U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x42U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x42U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x42U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x42U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x43U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x43U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x43U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x43U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x44U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x44U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x44U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x44U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x45U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x45U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x45U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x45U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x46U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x46U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x46U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x46U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x47U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x47U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x47U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x47U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x48U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x48U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x48U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x48U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x49U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x49U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x49U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x49U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x4aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x4aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x4aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x4bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x4bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x4bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x4cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x4cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x4cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x4dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x4dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x4dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x4eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x4eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x4eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x4fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x4fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x4fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x50U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x50U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x50U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x50U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x51U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x51U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x51U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x51U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x52U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x52U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x52U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x52U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x53U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x53U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x53U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x53U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x54U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x54U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x54U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x54U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x55U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x55U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x55U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x55U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x56U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x56U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x56U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x56U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x57U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x57U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x57U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x57U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x58U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x58U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x58U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x58U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x59U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x59U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x59U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x59U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x5aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x5aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x5aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x5bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x5bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x5bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x5cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x5cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x5cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x5dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x5dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x5dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x5eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x5eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x5eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x5fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x5fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x5fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x60U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x60U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x60U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x60U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x61U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x61U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x61U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x61U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x62U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x62U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x62U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x62U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x63U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x63U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x63U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x63U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x64U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x64U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x64U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x64U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x65U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x65U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x65U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x65U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x66U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x66U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x66U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x66U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x67U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x67U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x67U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x67U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x68U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x68U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x68U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x68U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x69U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x69U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x69U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x69U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x6aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x6aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x6aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x6bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x6bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x6bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x6cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x6cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x6cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x6dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x6dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x6dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x6eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x6eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x6eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x6fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x6fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x6fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x70U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x70U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x70U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x70U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x71U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x71U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x71U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x71U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x72U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x72U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x72U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x72U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x73U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x73U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x73U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x73U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x74U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x74U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x74U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x74U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x75U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x75U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x75U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x75U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x76U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x76U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x76U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x76U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x77U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x77U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x77U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x77U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x78U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x78U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x78U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x78U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x79U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x79U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x79U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x79U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x7aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x7aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x7aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x7bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x7bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x7bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x7cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x7cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x7cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x7dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x7dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x7dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x7eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x7eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x7eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x7fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x7fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x7fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x80U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x80U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x80U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x80U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_opcodes_T_2[0x81U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes[0x81U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14386[0x81U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x81U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7540(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7540\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*16415:0*/ __Vtemp14397[513];
    WData/*16415:0*/ __Vtemp14398[513];
    WData/*1055:0*/ __Vtemp14410[33];
    WData/*1055:0*/ __Vtemp14411[33];
    WData/*1055:0*/ __Vtemp14424[33];
    WData/*1055:0*/ __Vtemp14425[33];
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp14397, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (1U | (6U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aFrag) 
                                                      << 1U)))
                                          : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp14398, __Vtemp14397, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x20U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x20U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x20U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x21U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x21U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x21U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x22U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x22U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x22U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x23U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x23U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x23U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x24U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x24U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x24U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x25U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x25U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x25U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x26U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x26U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x26U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x27U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x27U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x27U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x28U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x28U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x28U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x29U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x29U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x29U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x2aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x2aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x2aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x2bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x2bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x2bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x2cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x2cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x2cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x2dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x2dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x2dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x2eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x2eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x2eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x2fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x2fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x2fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x2fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x30U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x30U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x30U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x30U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x31U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x31U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x31U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x31U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x32U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x32U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x32U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x32U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x33U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x33U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x33U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x33U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x34U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x34U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x34U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x34U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x35U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x35U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x35U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x35U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x36U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x36U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x36U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x36U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x37U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x37U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x37U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x37U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x38U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x38U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x38U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x38U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x39U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x39U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x39U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x39U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x3aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x3aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x3aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x3bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x3bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x3bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x3cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x3cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x3cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x3dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x3dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x3dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x3eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x3eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x3eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x3fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x3fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x3fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x3fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x40U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x40U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x40U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x40U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x41U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x41U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x41U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x41U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x42U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x42U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x42U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x42U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x43U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x43U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x43U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x43U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x44U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x44U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x44U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x44U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x45U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x45U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x45U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x45U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x46U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x46U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x46U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x46U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x47U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x47U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x47U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x47U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x48U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x48U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x48U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x48U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x49U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x49U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x49U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x49U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x4aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x4aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x4aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x4bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x4bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x4bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x4cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x4cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x4cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x4dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x4dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x4dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x4eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x4eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x4eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x4fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x4fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x4fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x4fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x50U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x50U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x50U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x50U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x51U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x51U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x51U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x51U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x52U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x52U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x52U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x52U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x53U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x53U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x53U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x53U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x54U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x54U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x54U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x54U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x55U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x55U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x55U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x55U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x56U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x56U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x56U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x56U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x57U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x57U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x57U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x57U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x58U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x58U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x58U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x58U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x59U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x59U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x59U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x59U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x5aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x5aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x5aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x5bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x5bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x5bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x5cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x5cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x5cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x5dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x5dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x5dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x5eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x5eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x5eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x5fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x5fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x5fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x5fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x60U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x60U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x60U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x60U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x61U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x61U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x61U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x61U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x62U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x62U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x62U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x62U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x63U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x63U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x63U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x63U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x64U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x64U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x64U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x64U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x65U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x65U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x65U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x65U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x66U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x66U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x66U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x66U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x67U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x67U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x67U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x67U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x68U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x68U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x68U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x68U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x69U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x69U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x69U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x69U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x6aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x6aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x6aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x6bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x6bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x6bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x6cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x6cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x6cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x6dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x6dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x6dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x6eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x6eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x6eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x6fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x6fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x6fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x6fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x70U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x70U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x70U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x70U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x71U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x71U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x71U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x71U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x72U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x72U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x72U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x72U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x73U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x73U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x73U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x73U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x74U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x74U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x74U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x74U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x75U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x75U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x75U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x75U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x76U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x76U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x76U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x76U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x77U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x77U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x77U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x77U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x78U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x78U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x78U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x78U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x79U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x79U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x79U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x79U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x7aU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x7aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x7aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7aU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x7bU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x7bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x7bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7bU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x7cU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x7cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x7cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7cU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x7dU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x7dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x7dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7dU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x7eU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x7eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x7eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7eU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x7fU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x7fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x7fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x7fU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x80U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x80U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x80U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x80U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___inflight_sizes_T_2[0x81U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes[0x81U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14398[0x81U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT___GEN_23[0x81U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__full));
    VL_EXTEND_WI(1027,4, __Vtemp14410, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                  << 1U))
                                         : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp14411, __Vtemp14410, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14411[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = (0xfU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                        ? __Vtemp14411[8U] : 0U)) & 
                   (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
    VL_EXTEND_WI(1027,4, __Vtemp14424, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                  << 1U))
                                         : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp14425, __Vtemp14424, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14425[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = (0xfU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                        ? __Vtemp14425[8U] : 0U)) & 
                   (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7541(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7541\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp14437[4];
    WData/*127:0*/ __Vtemp14438[4];
    WData/*127:0*/ __Vtemp14444[4];
    WData/*127:0*/ __Vtemp14445[4];
    // Body
    __Vtemp14437[0U] = 1U;
    __Vtemp14437[1U] = 0U;
    __Vtemp14437[2U] = 0U;
    __Vtemp14437[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp14438, __Vtemp14437, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp14444[0U] = 1U;
    __Vtemp14444[1U] = 0U;
    __Vtemp14444[2U] = 0U;
    __Vtemp14444[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp14445, __Vtemp14444, 
                  (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14438[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                                 ? 
                                                __Vtemp14445[0U]
                                                 : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp14438[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                                 ? 
                                                __Vtemp14445[1U]
                                                 : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[2U] 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp14438[2U] : 0U)) & (~ 
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp14445[2U]
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_0)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_1)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_2_0)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_2_1)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_d_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_valid)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT___GEN_16 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_d_ready)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT___do_enq_T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_valid));
}
