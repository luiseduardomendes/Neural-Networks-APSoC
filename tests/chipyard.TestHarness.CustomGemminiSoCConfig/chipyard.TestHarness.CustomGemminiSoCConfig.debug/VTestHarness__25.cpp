// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_settle__TOP__2836(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2836\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1055:0*/ __Vtemp5642[33];
    WData/*1055:0*/ __Vtemp5643[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___time_T_2 
        = (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15)
                                               ? (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                          >> 0x38U))
                                               : (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                          >> 0x38U))) 
                                             << 0x18U)) 
                             | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14)
                                                ? (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                           >> 0x30U))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                           >> 0x30U))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                            >> 0x28U))
                                                 : (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                            >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12)
                                                ? (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                           >> 0x20U))))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11)
                                               ? (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                          >> 0x18U))
                                               : (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                          >> 0x18U))) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10)
                                                  ? (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                             >> 0x10U))
                                                  : (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 8U))
                                                     : (IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    VL_EXTEND_WI(1027,4, __Vtemp5642, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp5643, __Vtemp5642, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5643[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = (0xfU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                        ? __Vtemp5643[8U] : 0U)) & 
                   (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2839(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2839\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_182 
        = ((0xb6U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x6300306568636163)
            : ((0xb5U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x65766973756c636e)
                : ((0xb4U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x692c657669666973)
                    : ((0xb3U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x1b0000001d000000)
                        : ((0xb2U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x3000000b2010000)
                            : ((0xb1U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x3000000)
                                : ((0xb0U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x80079000000)
                                    : ((0xafU == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x400000003000000)
                                        : ((0xaeU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x400006c000000)
                                            : ((0xadU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x400000003000000)
                                                : (
                                                   (0xacU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x2000000a6010000)
                                                    : 
                                                   ((0xabU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x400000003000000)
                                                     : 
                                                    ((0xaaU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x4000000059000000)
                                                      : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_169)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2841(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2841\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___ctrl_stalld_T_6 
        = ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_valid) 
               & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_wxd) 
                    & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_146) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T)) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_148) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_2))) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_150) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_4)))) 
                   & ((((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_csr)) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_jalr)) 
                         | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem)) 
                        | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_div)) 
                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_fp)) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_rocc))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_wfd) 
                     & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_2))) 
                         | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3) 
                               == (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_inst 
                                            >> 7U))))) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_4)))))) 
              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_valid) 
                 & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__data_hazard_mem) 
                     & (((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_csr)) 
                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_mem) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_slow_bypass))) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_div)) 
                         | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_fp)) 
                        | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_rocc))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_wfd) 
                       & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_mem_T)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_mem_T_2))) 
                           | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3) 
                                 == (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_inst 
                                              >> 7U))))) 
                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_mem_T_4))))))) 
             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_valid) 
                & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_wxd) 
                     & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_146) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T)) 
                         | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_148) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_2))) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_150) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_4)))) 
                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_set_sboard)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_wfd) 
                      & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T)) 
                           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_2))) 
                          | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3) 
                                == (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                             >> 7U))))) 
                         | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_4))))))) 
            | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_146) 
                 & (((0xfffffffeU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___r) 
                     >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs1)) 
                    & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_wen) 
                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_waddr) 
                             == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs1)))))) 
                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_148) 
                   & (((0xfffffffeU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___r) 
                       >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs2)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_wen) 
                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_waddr) 
                               == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs2))))))) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_150) 
                  & (((0xfffffffeU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___r) 
                      >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rd)) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_wen) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_waddr) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rd)))))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_singleStep) 
              & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_valid) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_valid)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_valid))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2842(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2842\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___csr_exists_T_206 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___csr_exists_T_191) 
                         | (0xc0aU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                                 >> 0x14U)))) 
                        | (0x32bU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                                >> 0x14U)))) 
                       | (0xb0bU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                               >> 0x14U)))) 
                      | (0xc0bU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                              >> 0x14U)))) 
                     | (0x32cU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                             >> 0x14U)))) 
                    | (0xb0cU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                            >> 0x14U)))) 
                   | (0xc0cU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                           >> 0x14U)))) 
                  | (0x32dU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                          >> 0x14U)))) 
                 | (0xb0dU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                         >> 0x14U)))) 
                | (0xc0dU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                        >> 0x14U)))) 
               | (0x32eU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                       >> 0x14U)))) 
              | (0xb0eU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                      >> 0x14U)))) 
             | (0xc0eU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                     >> 0x14U)))) | 
            (0x32fU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                  >> 0x14U)))) | (0xb0fU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                                      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2843(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2843\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2844(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2844\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2845(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2845\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2846(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2846\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2847(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2847\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_18__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_18__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_18__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2848(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2848\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_20__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_20__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_20__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_22__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_22__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_22__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2849(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2849\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_26__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_26__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_26__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2850(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2850\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_28__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_28__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_28__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_30__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_30__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_30__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2851(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2851\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2852(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2852\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2853(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2853\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_2__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2854(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2854\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2855(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2855\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_4__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2856(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2856\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2857(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2857\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_6__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2858(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2858\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2859(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2859\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_8__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2860(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2860\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2861(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2861\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_10__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2862(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2862\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2863(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2863\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_12__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2864(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2864\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2865(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2865\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_14__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2866(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2866\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2869(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2869\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5722[3];
    WData/*95:0*/ __Vtemp5723[3];
    WData/*95:0*/ __Vtemp5726[3];
    WData/*95:0*/ __Vtemp5727[3];
    WData/*95:0*/ __Vtemp5730[3];
    WData/*95:0*/ __Vtemp5731[3];
    WData/*95:0*/ __Vtemp5734[3];
    WData/*95:0*/ __Vtemp5735[3];
    WData/*95:0*/ __Vtemp5738[3];
    WData/*95:0*/ __Vtemp5739[3];
    WData/*95:0*/ __Vtemp5742[3];
    WData/*95:0*/ __Vtemp5743[3];
    WData/*95:0*/ __Vtemp5746[3];
    WData/*95:0*/ __Vtemp5747[3];
    WData/*95:0*/ __Vtemp5750[3];
    WData/*95:0*/ __Vtemp5751[3];
    WData/*95:0*/ __Vtemp5754[3];
    WData/*95:0*/ __Vtemp5755[3];
    // Body
    __Vtemp5722[0U] = 0U;
    __Vtemp5722[1U] = 0U;
    __Vtemp5722[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5723, __Vtemp5722, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5726[0U] = 0U;
    __Vtemp5726[1U] = 0U;
    __Vtemp5726[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5727, __Vtemp5726, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5730[0U] = 0U;
    __Vtemp5730[1U] = 0U;
    __Vtemp5730[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5731, __Vtemp5730, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5734[0U] = 0U;
    __Vtemp5734[1U] = 0U;
    __Vtemp5734[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5735, __Vtemp5734, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5738[0U] = 0U;
    __Vtemp5738[1U] = 0U;
    __Vtemp5738[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5739, __Vtemp5738, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5742[0U] = 0U;
    __Vtemp5742[1U] = 0U;
    __Vtemp5742[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5743, __Vtemp5742, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5746[0U] = 0U;
    __Vtemp5746[1U] = 0U;
    __Vtemp5746[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5747, __Vtemp5746, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5750[0U] = 0U;
    __Vtemp5750[1U] = 0U;
    __Vtemp5750[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5751, __Vtemp5750, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5754[0U] = 0U;
    __Vtemp5754[1U] = 0U;
    __Vtemp5754[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5755, __Vtemp5754, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72 
        = ((0x80U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
            ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
                ? 0U : ((4U & (__Vtemp5723[0U] << 2U)) 
                        | ((2U & __Vtemp5727[0U]) | 
                           (1U & (__Vtemp5731[0U] >> 2U)))))
            : (7U | (0x1fffff8U & ((~ ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
                                        ? (~ (((0x155540U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                               | (0x2aaa80U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_1__DOT__out_bits_data_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                     << 7U))) 
                                              | ((0x20U 
                                                  & (__Vtemp5735[1U] 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (__Vtemp5739[1U] 
                                                        >> 0x17U)) 
                                                    | ((8U 
                                                        & (__Vtemp5743[1U] 
                                                           >> 0x19U)) 
                                                       | ((4U 
                                                           & (__Vtemp5747[1U] 
                                                              >> 0x1bU)) 
                                                          | ((2U 
                                                              & (__Vtemp5751[1U] 
                                                                 >> 0x1dU)) 
                                                             | (1U 
                                                                & (__Vtemp5755[1U] 
                                                                   >> 0x1fU)))))))))
                                        : 0U)) << 3U))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2870(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2870\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5758[3];
    WData/*95:0*/ __Vtemp5759[3];
    WData/*95:0*/ __Vtemp5762[3];
    WData/*95:0*/ __Vtemp5763[3];
    WData/*95:0*/ __Vtemp5766[3];
    WData/*95:0*/ __Vtemp5767[3];
    WData/*95:0*/ __Vtemp5770[3];
    WData/*95:0*/ __Vtemp5771[3];
    WData/*95:0*/ __Vtemp5774[3];
    WData/*95:0*/ __Vtemp5775[3];
    WData/*95:0*/ __Vtemp5778[3];
    WData/*95:0*/ __Vtemp5779[3];
    WData/*95:0*/ __Vtemp5782[3];
    WData/*95:0*/ __Vtemp5783[3];
    WData/*95:0*/ __Vtemp5786[3];
    WData/*95:0*/ __Vtemp5787[3];
    WData/*95:0*/ __Vtemp5790[3];
    WData/*95:0*/ __Vtemp5791[3];
    // Body
    __Vtemp5758[0U] = 0U;
    __Vtemp5758[1U] = 0U;
    __Vtemp5758[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5759, __Vtemp5758, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5762[0U] = 0U;
    __Vtemp5762[1U] = 0U;
    __Vtemp5762[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5763, __Vtemp5762, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5766[0U] = 0U;
    __Vtemp5766[1U] = 0U;
    __Vtemp5766[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5767, __Vtemp5766, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5770[0U] = 0U;
    __Vtemp5770[1U] = 0U;
    __Vtemp5770[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5771, __Vtemp5770, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5774[0U] = 0U;
    __Vtemp5774[1U] = 0U;
    __Vtemp5774[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5775, __Vtemp5774, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5778[0U] = 0U;
    __Vtemp5778[1U] = 0U;
    __Vtemp5778[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5779, __Vtemp5778, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5782[0U] = 0U;
    __Vtemp5782[1U] = 0U;
    __Vtemp5782[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5783, __Vtemp5782, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5786[0U] = 0U;
    __Vtemp5786[1U] = 0U;
    __Vtemp5786[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5787, __Vtemp5786, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp5790[0U] = 0U;
    __Vtemp5790[1U] = 0U;
    __Vtemp5790[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5791, __Vtemp5790, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72 
        = ((0x80U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
            ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
                ? 0U : ((4U & (__Vtemp5759[0U] << 2U)) 
                        | ((2U & __Vtemp5763[0U]) | 
                           (1U & (__Vtemp5767[0U] >> 2U)))))
            : (7U | (0x1fffff8U & ((~ ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
                                        ? (~ (((0x155540U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                               | (0x2aaa80U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__pipe_2__DOT__out_bits_data_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                     << 7U))) 
                                              | ((0x20U 
                                                  & (__Vtemp5771[1U] 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (__Vtemp5775[1U] 
                                                        >> 0x17U)) 
                                                    | ((8U 
                                                        & (__Vtemp5779[1U] 
                                                           >> 0x19U)) 
                                                       | ((4U 
                                                           & (__Vtemp5783[1U] 
                                                              >> 0x1bU)) 
                                                          | ((2U 
                                                              & (__Vtemp5787[1U] 
                                                                 >> 0x1dU)) 
                                                             | (1U 
                                                                & (__Vtemp5791[1U] 
                                                                   >> 0x1fU)))))))))
                                        : 0U)) << 3U))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2888(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2888\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_241 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_1)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_229)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2889(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2889\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_288 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_2)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_276)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2890(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2890\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_335 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_3)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_323)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2891(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2891\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_382 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_4)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_370)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2892(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2892\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_429 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_5)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_417)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2893(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2893\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_476 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_6)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_464)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2894(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2894\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_523 
        = ((0x18U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))
            : ((0x17U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_io_counter_event_signal_23)
                : ((0x16U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_0_resp_miss)
                    : ((0x15U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                        ? (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))
                        : ((0x14U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core_io_counter_event_signal_20)
                            : ((0x13U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb_io_clients_1_resp_miss)
                                : ((0x12U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__state)
                                    : ((0x11U == (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbArbOpt_io_out_valid)
                                        : ((0x10U == 
                                            (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0_io_counter_event_signal_16)
                                            : ((0xfU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb_io_resp_miss)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller_io_counter_event_signal_14)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT__counter_config_7)))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__counters__DOT__module___DOT___GEN_511)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2901(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2901\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1679 
        = ((0xa9U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? (0U == (0x100U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
            : ((0xa8U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? (0U == 
                                               (0x100U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                : ((0xa7U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? (0U 
                                                   == 
                                                   (0x100U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                    : ((0xa6U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                        : ((0xa5U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                            : ((0xa4U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? (0U == (0x100U & 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                                : ((0xa3U == (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? (0U == (0x100U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1672))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2904(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2904\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___ctrl_stalld_T_26 
        = (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___ctrl_stalld_T_6) 
                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_csr_en) 
                    & (0U == (0x900U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                        >> 0x14U)))) 
                   & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags)) 
                         | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__mem_reg_valid) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_wflags))) 
                        | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid)) 
                       | (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wen))) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight)))) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_1) 
                  & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_stall_fpu___05Fr 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs1))) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_stall_fpu___05Fr 
                             >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs2)))) 
                      | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_stall_fpu___05Fr 
                            >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3)))) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_stall_fpu___05Fr 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rd)))))) 
              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_14) 
                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__blocked) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_perf_grant))))) 
             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_2) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rocc_blocked))) 
            | ((0x2000030U == (0x2000074U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
               & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__state)) 
                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div_io_resp_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_wxd))))) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div_io_req_valid)))) 
           | (((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__empty)) 
                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini_io_busy)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_valid) 
                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_rocc))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_valid) 
                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_rocc))) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___replay_wb_rocc_T)) 
               & (4U == (0x2054U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_mem_busy) 
                 & ((((0x200cU == (0x204cU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                         >> 0x19U)) | (0x1008U == (0x3058U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_reg_fence) 
                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_14) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_2)))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2905(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2905\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___csr_exists_T_221 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___csr_exists_T_206) 
                         | (0xc0fU == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                                 >> 0x14U)))) 
                        | (0x330U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                                >> 0x14U)))) 
                       | (0xb10U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                               >> 0x14U)))) 
                      | (0xc10U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                              >> 0x14U)))) 
                     | (0x331U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                             >> 0x14U)))) 
                    | (0xb11U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                            >> 0x14U)))) 
                   | (0xc11U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                           >> 0x14U)))) 
                  | (0x332U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                          >> 0x14U)))) 
                 | (0xb12U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                         >> 0x14U)))) 
                | (0xc12U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                        >> 0x14U)))) 
               | (0x333U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                       >> 0x14U)))) 
              | (0xb13U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                      >> 0x14U)))) 
             | (0xc13U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                     >> 0x14U)))) | 
            (0x334U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                  >> 0x14U)))) | (0xb14U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                                      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2906(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2906\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6195[4];
    WData/*127:0*/ __Vtemp6196[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6195, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6196, __Vtemp6195, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6196[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6196[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6196[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6196[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2907(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2907\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6199[4];
    WData/*127:0*/ __Vtemp6200[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_1__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6199, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6200, __Vtemp6199, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6200[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6200[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6200[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6200[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2908(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2908\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6203[4];
    WData/*127:0*/ __Vtemp6204[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_1__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_3__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_4__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6203, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6204, __Vtemp6203, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6204[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6204[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6204[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6204[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2909\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6207[4];
    WData/*127:0*/ __Vtemp6208[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_2__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_5__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_6__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6207, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6208, __Vtemp6207, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6208[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6208[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6208[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6208[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2910\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6211[4];
    WData/*127:0*/ __Vtemp6212[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_3__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_7__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_8__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6211, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6212, __Vtemp6211, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6212[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6212[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6212[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6212[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2911(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2911\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6215[4];
    WData/*127:0*/ __Vtemp6216[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_4__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_9__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_10__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6215, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6216, __Vtemp6215, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6216[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6216[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6216[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6216[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2912\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6219[4];
    WData/*127:0*/ __Vtemp6220[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_5__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_11__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_12__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6219, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6220, __Vtemp6219, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6220[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6220[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6220[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6220[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2913\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6223[4];
    WData/*127:0*/ __Vtemp6224[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_6__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_13__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_14__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6223, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6224, __Vtemp6223, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6224[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6224[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6224[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6224[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2914(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2914\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6227[4];
    WData/*127:0*/ __Vtemp6228[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_7__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_15__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_16__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6227, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6228, __Vtemp6227, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6228[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6228[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6228[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6228[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2915(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2915\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6231[4];
    WData/*127:0*/ __Vtemp6232[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_8__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_17__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_18__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_18__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_18__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6231, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6232, __Vtemp6231, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6232[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6232[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6232[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6232[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2916(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2916\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6235[4];
    WData/*127:0*/ __Vtemp6236[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_9__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_19__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_20__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_20__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_20__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6235, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6236, __Vtemp6235, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6236[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6236[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6236[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6236[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2917(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2917\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6239[4];
    WData/*127:0*/ __Vtemp6240[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_10__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_21__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_22__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_22__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_22__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6239, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6240, __Vtemp6239, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6240[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6240[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6240[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6240[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2918(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2918\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6243[4];
    WData/*127:0*/ __Vtemp6244[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_11__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_23__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6243, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6244, __Vtemp6243, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6244[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6244[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6244[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6244[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2919(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2919\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6247[4];
    WData/*127:0*/ __Vtemp6248[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_12__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_25__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_26__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_26__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_26__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6247, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6248, __Vtemp6247, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6248[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6248[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6248[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6248[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2920(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2920\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6251[4];
    WData/*127:0*/ __Vtemp6252[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_13__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_27__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_28__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_28__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_28__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6251, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6252, __Vtemp6251, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6252[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6252[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6252[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6252[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__2921(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__2921\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp6255[4];
    WData/*127:0*/ __Vtemp6256[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
        = (0x3ffU & (((IData)(0x32eU) + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_in_to_rec_fn_14__DOT__roundAnyRawFNToRecFN_io_out 
                                                                            >> 0x17U)))))) 
                     - ((0x380U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                >> 5U)))) 
                                   << 7U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_29__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                              << 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_30__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_30__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_30__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    VL_EXTEND_WQ(114,51, __Vtemp6255, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp6256, __Vtemp6255, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp6256[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp6256[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp6256[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp6256[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_21 
        = (((0x40U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_muladder_31__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}
