// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceFullThis__43(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+397);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                ? (1U & ((IData)(1U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                : 0U)));
        vcdp->fullBit(oldp+1,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U))))
                                ? (1U & ((IData)(1U) 
                                         << (1U & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xaU))))
                                : 0U)));
        vcdp->fullBit(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                ? (1U & ((IData)(1U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                : 0U)));
        vcdp->fullBit(oldp+3,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U))))
                                ? (1U & ((IData)(1U) 
                                         << (1U & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xaU))))
                                : 0U)));
        vcdp->fullCData(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (0xfU & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                     << 1U))
                                               : 0U) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 2U)))
                                  : 0U)),4);
    }
}

void VTestHarness::traceFullThis__45(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+402);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullCData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                  & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x15U))))
                                  ? (0xfU & ((IData)(0xfU) 
                                             << (4U 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 8U))))
                                  : 0U)),4);
        vcdp->fullCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                      << 1U))
                                                : 0U) 
                                              << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  << 3U)))
                                  : 0U)),8);
        vcdp->fullCData(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                  & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x15U))))
                                  ? (0xffU & ((IData)(0xffU) 
                                              << (8U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 7U))))
                                  : 0U)),8);
        vcdp->fullCData(oldp+3,((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
                                           >> (8U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 7U))) 
                                          >> 1U))),8);
        vcdp->fullCData(oldp+4,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                                  & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x15U))))
                                  ? (0xffU & ((IData)(0xffU) 
                                              << (8U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 7U))))
                                  : 0U)),8);
    }
}

void VTestHarness::traceFullThis__47(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+407);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullCData(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)
                                  ? 1U : 4U)),3);
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen),3);
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready));
        vcdp->fullSData(oldp+3,((0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                           >> 3U))),9);
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode));
        vcdp->fullCData(oldp+6,((0xffU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data))),8);
        vcdp->fullCData(oldp+7,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                  >> 8U)))),8);
        vcdp->fullCData(oldp+8,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                  >> 0x10U)))),8);
        vcdp->fullCData(oldp+9,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                  >> 0x18U)))),8);
        vcdp->fullCData(oldp+10,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                   >> 0x20U)))),8);
        vcdp->fullCData(oldp+11,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                   >> 0x28U)))),8);
        vcdp->fullCData(oldp+12,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                   >> 0x30U)))),8);
        vcdp->fullCData(oldp+13,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                   >> 0x38U)))),8);
        vcdp->fullCData(oldp+14,((0xffU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata))),8);
        vcdp->fullCData(oldp+15,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 8U)))),8);
        vcdp->fullCData(oldp+16,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 0x10U)))),8);
        vcdp->fullCData(oldp+17,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 0x18U)))),8);
        vcdp->fullCData(oldp+18,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 0x20U)))),8);
        vcdp->fullCData(oldp+19,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 0x28U)))),8);
        vcdp->fullCData(oldp+20,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 0x30U)))),8);
        vcdp->fullCData(oldp+21,((0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                   >> 0x38U)))),8);
        vcdp->fullBit(oldp+22,((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))));
    }
}

void VTestHarness::traceFullThis__49(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+430);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 1U))));
        vcdp->fullBit(oldp+1,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 2U))));
        vcdp->fullBit(oldp+2,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 3U))));
        vcdp->fullBit(oldp+3,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 4U))));
        vcdp->fullBit(oldp+4,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 5U))));
        vcdp->fullBit(oldp+5,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 6U))));
        vcdp->fullBit(oldp+6,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                     >> 7U))));
        vcdp->fullCData(oldp+7,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                      >> 8U))
                                           : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1)))),8);
        vcdp->fullCData(oldp+8,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata)
                                           : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0)))),8);
        vcdp->fullCData(oldp+9,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                      >> 0x18U))
                                           : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3)))),8);
        vcdp->fullCData(oldp+10,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                       >> 0x10U))
                                            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2)))),8);
        vcdp->fullIData(oldp+11,(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x18U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3)) 
                                                  << 0x18U)) 
                                  | ((0xff0000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                >> 0x10U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2)) 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                       >> 8U))
                                            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1)) 
                                          << 8U)) | 
                                        (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata)
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0))))))),32);
        vcdp->fullCData(oldp+12,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                       >> 0x28U))
                                            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5)))),8);
    }
}

void VTestHarness::traceFullThis__51(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+443);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullCData(oldp+0,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                      >> 0x20U))
                                           : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4)))),8);
        vcdp->fullCData(oldp+1,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                      >> 0x38U))
                                           : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7)))),8);
        vcdp->fullCData(oldp+2,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                      >> 0x30U))
                                           : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6)))),8);
        vcdp->fullIData(oldp+3,(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                              >> 0x38U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7)) 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x30U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6)) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                >> 0x28U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5)) 
                                                   << 8U)) 
                                       | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x20U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4))))))),32);
        vcdp->fullBit(oldp+4,((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen));
        vcdp->fullBit(oldp+6,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18))));
        vcdp->fullCData(oldp+7,((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         >> 3U))),4);
        vcdp->fullCData(oldp+8,((0x1fU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          >> 7U))),5);
        vcdp->fullCData(oldp+9,((7U & (~ (0x3fU & ((IData)(7U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))),3);
        vcdp->fullBit(oldp+10,((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))));
        vcdp->fullCData(oldp+11,((7U & (1U | (0xfU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))),3);
    }
}

void VTestHarness::traceFullThis__53(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+455);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                     >> 2U))));
        vcdp->fullBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U))));
        vcdp->fullBit(oldp+2,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U)))));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+5,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                     >> 1U))));
        vcdp->fullBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 1U))));
        vcdp->fullBit(oldp+7,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 1U)))));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+16,((1U & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+17,((1U & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                   & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    }
}

void VTestHarness::traceFullThis__55(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+476);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                   & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    }
}

void VTestHarness::traceFullThis__57(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+488);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp19059[8];
    WData/*255:0*/ __Vtemp19060[8];
    WData/*255:0*/ __Vtemp19063[8];
    WData/*255:0*/ __Vtemp19064[8];
    WData/*255:0*/ __Vtemp19065[8];
    WData/*255:0*/ __Vtemp19068[8];
    WData/*1023:0*/ __Vtemp19073[32];
    WData/*1023:0*/ __Vtemp19074[32];
    WData/*2079:0*/ __Vtemp19076[65];
    WData/*2079:0*/ __Vtemp19077[65];
    WData/*1023:0*/ __Vtemp19082[32];
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->fullCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask),8);
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done));
        vcdp->fullWData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready),256);
        vcdp->fullCData(oldp+12,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                   ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                            << 1U))
                                   : 0U)),4);
        vcdp->fullCData(oldp+13,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                   ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                            << 1U))
                                   : 0U)),3);
        __Vtemp19059[0U] = 1U;
        __Vtemp19059[1U] = 0U;
        __Vtemp19059[2U] = 0U;
        __Vtemp19059[3U] = 0U;
        __Vtemp19059[4U] = 0U;
        __Vtemp19059[5U] = 0U;
        __Vtemp19059[6U] = 0U;
        __Vtemp19059[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19060, __Vtemp19059, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19063[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[0U] : 0U);
        __Vtemp19063[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[1U] : 0U);
        __Vtemp19063[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[2U] : 0U);
        __Vtemp19063[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[3U] : 0U);
        __Vtemp19063[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[4U] : 0U);
        __Vtemp19063[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[5U] : 0U);
        __Vtemp19063[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[6U] : 0U);
        __Vtemp19063[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19060[7U] : 0U);
        vcdp->fullWData(oldp+14,(__Vtemp19063),256);
        __Vtemp19064[0U] = 1U;
        __Vtemp19064[1U] = 0U;
        __Vtemp19064[2U] = 0U;
        __Vtemp19064[3U] = 0U;
        __Vtemp19064[4U] = 0U;
        __Vtemp19064[5U] = 0U;
        __Vtemp19064[6U] = 0U;
        __Vtemp19064[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19065, __Vtemp19064, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp19068[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[0U] : 0U);
        __Vtemp19068[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[1U] : 0U);
        __Vtemp19068[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[2U] : 0U);
        __Vtemp19068[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[3U] : 0U);
        __Vtemp19068[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[4U] : 0U);
        __Vtemp19068[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[5U] : 0U);
        __Vtemp19068[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[6U] : 0U);
        __Vtemp19068[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19065[7U] : 0U);
        vcdp->fullWData(oldp+22,(__Vtemp19068),256);
        vcdp->fullBit(oldp+30,((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))));
        __Vtemp19073[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp19073[1U] = 0U;
        __Vtemp19073[2U] = 0U;
        __Vtemp19073[3U] = 0U;
        __Vtemp19073[4U] = 0U;
        __Vtemp19073[5U] = 0U;
        __Vtemp19073[6U] = 0U;
        __Vtemp19073[7U] = 0U;
        __Vtemp19073[8U] = 0U;
        __Vtemp19073[9U] = 0U;
        __Vtemp19073[0xaU] = 0U;
        __Vtemp19073[0xbU] = 0U;
        __Vtemp19073[0xcU] = 0U;
        __Vtemp19073[0xdU] = 0U;
        __Vtemp19073[0xeU] = 0U;
        __Vtemp19073[0xfU] = 0U;
        __Vtemp19073[0x10U] = 0U;
        __Vtemp19073[0x11U] = 0U;
        __Vtemp19073[0x12U] = 0U;
        __Vtemp19073[0x13U] = 0U;
        __Vtemp19073[0x14U] = 0U;
        __Vtemp19073[0x15U] = 0U;
        __Vtemp19073[0x16U] = 0U;
        __Vtemp19073[0x17U] = 0U;
        __Vtemp19073[0x18U] = 0U;
        __Vtemp19073[0x19U] = 0U;
        __Vtemp19073[0x1aU] = 0U;
        __Vtemp19073[0x1bU] = 0U;
        __Vtemp19073[0x1cU] = 0U;
        __Vtemp19073[0x1dU] = 0U;
        __Vtemp19073[0x1eU] = 0U;
        __Vtemp19073[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19074, __Vtemp19073);
        vcdp->fullCData(oldp+31,((0xfU & __Vtemp19074[0U])),4);
        VL_EXTEND_WI(2051,4, __Vtemp19076, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                   << 1U))
                                             : 0U));
        VL_SHIFTL_WWI(2051,2051,11, __Vtemp19077, __Vtemp19076, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19082[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[0U] : 0U);
        __Vtemp19082[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[1U] : 0U);
        __Vtemp19082[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[2U] : 0U);
        __Vtemp19082[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[3U] : 0U);
        __Vtemp19082[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[4U] : 0U);
        __Vtemp19082[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[5U] : 0U);
        __Vtemp19082[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[6U] : 0U);
        __Vtemp19082[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[7U] : 0U);
        __Vtemp19082[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[8U] : 0U);
        __Vtemp19082[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19077[9U] : 0U);
        __Vtemp19082[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19077[0xaU]
                               : 0U);
        __Vtemp19082[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19077[0xbU]
                               : 0U);
        __Vtemp19082[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19077[0xcU]
                               : 0U);
        __Vtemp19082[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19077[0xdU]
                               : 0U);
        __Vtemp19082[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19077[0xeU]
                               : 0U);
        __Vtemp19082[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19077[0xfU]
                               : 0U);
        __Vtemp19082[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x10U]
                                : 0U);
        __Vtemp19082[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x11U]
                                : 0U);
        __Vtemp19082[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x12U]
                                : 0U);
        __Vtemp19082[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x13U]
                                : 0U);
        __Vtemp19082[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x14U]
                                : 0U);
        __Vtemp19082[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x15U]
                                : 0U);
        __Vtemp19082[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x16U]
                                : 0U);
        __Vtemp19082[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x17U]
                                : 0U);
        __Vtemp19082[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x18U]
                                : 0U);
        __Vtemp19082[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x19U]
                                : 0U);
        __Vtemp19082[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x1aU]
                                : 0U);
        __Vtemp19082[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x1bU]
                                : 0U);
        __Vtemp19082[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x1cU]
                                : 0U);
        __Vtemp19082[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x1dU]
                                : 0U);
        __Vtemp19082[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x1eU]
                                : 0U);
        __Vtemp19082[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19077[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+32,(__Vtemp19082),1024);
    }
}

void VTestHarness::traceFullThis__59(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+552);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19107[32];
    WData/*2079:0*/ __Vtemp19109[65];
    WData/*2079:0*/ __Vtemp19110[65];
    WData/*1023:0*/ __Vtemp19115[32];
    // Body
    {
        __Vtemp19107[0U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp19107[1U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp19107[2U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp19107[3U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp19107[4U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp19107[5U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp19107[6U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp19107[7U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp19107[8U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U];
        __Vtemp19107[9U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U];
        __Vtemp19107[0xaU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU];
        __Vtemp19107[0xbU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU];
        __Vtemp19107[0xcU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU];
        __Vtemp19107[0xdU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU];
        __Vtemp19107[0xeU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU];
        __Vtemp19107[0xfU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU];
        __Vtemp19107[0x10U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U];
        __Vtemp19107[0x11U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U];
        __Vtemp19107[0x12U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U];
        __Vtemp19107[0x13U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U];
        __Vtemp19107[0x14U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U];
        __Vtemp19107[0x15U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U];
        __Vtemp19107[0x16U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U];
        __Vtemp19107[0x17U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U];
        __Vtemp19107[0x18U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U];
        __Vtemp19107[0x19U] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U];
        __Vtemp19107[0x1aU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU];
        __Vtemp19107[0x1bU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU];
        __Vtemp19107[0x1cU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU];
        __Vtemp19107[0x1dU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU];
        __Vtemp19107[0x1eU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU];
        __Vtemp19107[0x1fU] = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU];
        vcdp->fullWData(oldp+0,(__Vtemp19107),1024);
        VL_EXTEND_WI(2050,3, __Vtemp19109, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U))
                                             : 0U));
        VL_SHIFTL_WWI(2050,2050,11, __Vtemp19110, __Vtemp19109, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19115[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[0U] : 0U);
        __Vtemp19115[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[1U] : 0U);
        __Vtemp19115[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[2U] : 0U);
        __Vtemp19115[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[3U] : 0U);
        __Vtemp19115[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[4U] : 0U);
        __Vtemp19115[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[5U] : 0U);
        __Vtemp19115[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[6U] : 0U);
        __Vtemp19115[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[7U] : 0U);
        __Vtemp19115[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[8U] : 0U);
        __Vtemp19115[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19110[9U] : 0U);
        __Vtemp19115[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19110[0xaU]
                               : 0U);
        __Vtemp19115[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19110[0xbU]
                               : 0U);
        __Vtemp19115[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19110[0xcU]
                               : 0U);
        __Vtemp19115[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19110[0xdU]
                               : 0U);
        __Vtemp19115[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19110[0xeU]
                               : 0U);
        __Vtemp19115[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19110[0xfU]
                               : 0U);
        __Vtemp19115[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x10U]
                                : 0U);
        __Vtemp19115[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x11U]
                                : 0U);
        __Vtemp19115[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x12U]
                                : 0U);
        __Vtemp19115[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x13U]
                                : 0U);
        __Vtemp19115[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x14U]
                                : 0U);
        __Vtemp19115[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x15U]
                                : 0U);
        __Vtemp19115[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x16U]
                                : 0U);
        __Vtemp19115[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x17U]
                                : 0U);
        __Vtemp19115[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x18U]
                                : 0U);
        __Vtemp19115[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x19U]
                                : 0U);
        __Vtemp19115[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x1aU]
                                : 0U);
        __Vtemp19115[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x1bU]
                                : 0U);
        __Vtemp19115[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x1cU]
                                : 0U);
        __Vtemp19115[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x1dU]
                                : 0U);
        __Vtemp19115[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x1eU]
                                : 0U);
        __Vtemp19115[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19110[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+32,(__Vtemp19115),1024);
        vcdp->fullQData(oldp+64,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata),64);
        vcdp->fullBit(oldp+66,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
                                & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode))));
        vcdp->fullCData(oldp+67,((3U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                        >> 3U))),2);
        vcdp->fullSData(oldp+68,((0x7ffU & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                            >> 5U))),11);
        vcdp->fullCData(oldp+69,((7U & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))),3);
        vcdp->fullBit(oldp+70,((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))));
        vcdp->fullCData(oldp+71,((7U & (1U | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))),3);
        vcdp->fullBit(oldp+72,((1U & (((IData)(1U) 
                                       << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                                      >> 2U))));
    }
}

void VTestHarness::traceFullThis__61(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+625);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                     >> 2U))));
        vcdp->fullBit(oldp+1,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                        >> 2U)))));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+4,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                                     >> 1U))));
        vcdp->fullBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                     >> 1U))));
        vcdp->fullBit(oldp+6,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                        >> 1U)))));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+15,((1U & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+16,((1U & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                   & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                   & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceFullThis__63(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+646);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                   & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceFullThis__65(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+658);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp19125[8];
    WData/*255:0*/ __Vtemp19126[8];
    WData/*255:0*/ __Vtemp19129[8];
    WData/*255:0*/ __Vtemp19130[8];
    WData/*255:0*/ __Vtemp19131[8];
    WData/*255:0*/ __Vtemp19134[8];
    WData/*1023:0*/ __Vtemp19139[32];
    WData/*1023:0*/ __Vtemp19140[32];
    WData/*1023:0*/ __Vtemp19143[32];
    WData/*1023:0*/ __Vtemp19146[32];
    WData/*1023:0*/ __Vtemp19147[32];
    WData/*2079:0*/ __Vtemp19149[65];
    WData/*2079:0*/ __Vtemp19150[65];
    WData/*1023:0*/ __Vtemp19155[32];
    // Body
    {
        vcdp->fullCData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask),8);
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done));
        vcdp->fullCData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                           << 1U)) : 0U)),4);
        vcdp->fullCData(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (6U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                 << 1U)))
                                  : 0U)),3);
        __Vtemp19125[0U] = 1U;
        __Vtemp19125[1U] = 0U;
        __Vtemp19125[2U] = 0U;
        __Vtemp19125[3U] = 0U;
        __Vtemp19125[4U] = 0U;
        __Vtemp19125[5U] = 0U;
        __Vtemp19125[6U] = 0U;
        __Vtemp19125[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19126, __Vtemp19125, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        __Vtemp19129[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[0U] : 0U);
        __Vtemp19129[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[1U] : 0U);
        __Vtemp19129[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[2U] : 0U);
        __Vtemp19129[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[3U] : 0U);
        __Vtemp19129[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[4U] : 0U);
        __Vtemp19129[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[5U] : 0U);
        __Vtemp19129[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[6U] : 0U);
        __Vtemp19129[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19126[7U] : 0U);
        vcdp->fullWData(oldp+5,(__Vtemp19129),256);
        __Vtemp19130[0U] = 1U;
        __Vtemp19130[1U] = 0U;
        __Vtemp19130[2U] = 0U;
        __Vtemp19130[3U] = 0U;
        __Vtemp19130[4U] = 0U;
        __Vtemp19130[5U] = 0U;
        __Vtemp19130[6U] = 0U;
        __Vtemp19130[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19131, __Vtemp19130, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        __Vtemp19134[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[0U] : 0U);
        __Vtemp19134[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[1U] : 0U);
        __Vtemp19134[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[2U] : 0U);
        __Vtemp19134[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[3U] : 0U);
        __Vtemp19134[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[4U] : 0U);
        __Vtemp19134[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[5U] : 0U);
        __Vtemp19134[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[6U] : 0U);
        __Vtemp19134[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19131[7U] : 0U);
        vcdp->fullWData(oldp+13,(__Vtemp19134),256);
        vcdp->fullBit(oldp+21,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))));
        __Vtemp19139[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp19139[1U] = 0U;
        __Vtemp19139[2U] = 0U;
        __Vtemp19139[3U] = 0U;
        __Vtemp19139[4U] = 0U;
        __Vtemp19139[5U] = 0U;
        __Vtemp19139[6U] = 0U;
        __Vtemp19139[7U] = 0U;
        __Vtemp19139[8U] = 0U;
        __Vtemp19139[9U] = 0U;
        __Vtemp19139[0xaU] = 0U;
        __Vtemp19139[0xbU] = 0U;
        __Vtemp19139[0xcU] = 0U;
        __Vtemp19139[0xdU] = 0U;
        __Vtemp19139[0xeU] = 0U;
        __Vtemp19139[0xfU] = 0U;
        __Vtemp19139[0x10U] = 0U;
        __Vtemp19139[0x11U] = 0U;
        __Vtemp19139[0x12U] = 0U;
        __Vtemp19139[0x13U] = 0U;
        __Vtemp19139[0x14U] = 0U;
        __Vtemp19139[0x15U] = 0U;
        __Vtemp19139[0x16U] = 0U;
        __Vtemp19139[0x17U] = 0U;
        __Vtemp19139[0x18U] = 0U;
        __Vtemp19139[0x19U] = 0U;
        __Vtemp19139[0x1aU] = 0U;
        __Vtemp19139[0x1bU] = 0U;
        __Vtemp19139[0x1cU] = 0U;
        __Vtemp19139[0x1dU] = 0U;
        __Vtemp19139[0x1eU] = 0U;
        __Vtemp19139[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19140, __Vtemp19139);
        vcdp->fullCData(oldp+22,((0xfU & __Vtemp19140[0U])),4);
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp19143, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19146[0U] = (7U & (__Vtemp19143[0U] 
                                  >> 1U));
        __Vtemp19146[1U] = 0U;
        __Vtemp19146[2U] = 0U;
        __Vtemp19146[3U] = 0U;
        __Vtemp19146[4U] = 0U;
        __Vtemp19146[5U] = 0U;
        __Vtemp19146[6U] = 0U;
        __Vtemp19146[7U] = 0U;
        __Vtemp19146[8U] = 0U;
        __Vtemp19146[9U] = 0U;
        __Vtemp19146[0xaU] = 0U;
        __Vtemp19146[0xbU] = 0U;
        __Vtemp19146[0xcU] = 0U;
        __Vtemp19146[0xdU] = 0U;
        __Vtemp19146[0xeU] = 0U;
        __Vtemp19146[0xfU] = 0U;
        __Vtemp19146[0x10U] = 0U;
        __Vtemp19146[0x11U] = 0U;
        __Vtemp19146[0x12U] = 0U;
        __Vtemp19146[0x13U] = 0U;
        __Vtemp19146[0x14U] = 0U;
        __Vtemp19146[0x15U] = 0U;
        __Vtemp19146[0x16U] = 0U;
        __Vtemp19146[0x17U] = 0U;
        __Vtemp19146[0x18U] = 0U;
        __Vtemp19146[0x19U] = 0U;
        __Vtemp19146[0x1aU] = 0U;
        __Vtemp19146[0x1bU] = 0U;
        __Vtemp19146[0x1cU] = 0U;
        __Vtemp19146[0x1dU] = 0U;
        __Vtemp19146[0x1eU] = 0U;
        __Vtemp19146[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19147, __Vtemp19146);
        vcdp->fullCData(oldp+23,((0xfU & __Vtemp19147[0U])),4);
        VL_EXTEND_WI(2051,4, __Vtemp19149, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                                   << 1U))
                                             : 0U));
        VL_SHIFTL_WWI(2051,2051,11, __Vtemp19150, __Vtemp19149, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19155[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[0U] : 0U);
        __Vtemp19155[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[1U] : 0U);
        __Vtemp19155[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[2U] : 0U);
        __Vtemp19155[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[3U] : 0U);
        __Vtemp19155[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[4U] : 0U);
        __Vtemp19155[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[5U] : 0U);
        __Vtemp19155[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[6U] : 0U);
        __Vtemp19155[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[7U] : 0U);
        __Vtemp19155[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[8U] : 0U);
        __Vtemp19155[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19150[9U] : 0U);
        __Vtemp19155[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19150[0xaU]
                               : 0U);
        __Vtemp19155[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19150[0xbU]
                               : 0U);
        __Vtemp19155[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19150[0xcU]
                               : 0U);
        __Vtemp19155[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19150[0xdU]
                               : 0U);
        __Vtemp19155[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19150[0xeU]
                               : 0U);
        __Vtemp19155[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19150[0xfU]
                               : 0U);
        __Vtemp19155[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x10U]
                                : 0U);
        __Vtemp19155[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x11U]
                                : 0U);
        __Vtemp19155[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x12U]
                                : 0U);
        __Vtemp19155[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x13U]
                                : 0U);
        __Vtemp19155[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x14U]
                                : 0U);
        __Vtemp19155[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x15U]
                                : 0U);
        __Vtemp19155[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x16U]
                                : 0U);
        __Vtemp19155[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x17U]
                                : 0U);
        __Vtemp19155[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x18U]
                                : 0U);
        __Vtemp19155[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x19U]
                                : 0U);
        __Vtemp19155[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x1aU]
                                : 0U);
        __Vtemp19155[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x1bU]
                                : 0U);
        __Vtemp19155[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x1cU]
                                : 0U);
        __Vtemp19155[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x1dU]
                                : 0U);
        __Vtemp19155[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x1eU]
                                : 0U);
        __Vtemp19155[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19150[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+24,(__Vtemp19155),1024);
    }
}

void VTestHarness::traceFullThis__67(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+714);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19187[32];
    WData/*2079:0*/ __Vtemp19189[65];
    WData/*2079:0*/ __Vtemp19190[65];
    WData/*1023:0*/ __Vtemp19195[32];
    // Body
    {
        __Vtemp19187[0U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp19187[1U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp19187[2U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp19187[3U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp19187[4U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp19187[5U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp19187[6U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp19187[7U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp19187[8U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U];
        __Vtemp19187[9U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U];
        __Vtemp19187[0xaU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU];
        __Vtemp19187[0xbU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU];
        __Vtemp19187[0xcU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU];
        __Vtemp19187[0xdU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU];
        __Vtemp19187[0xeU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU];
        __Vtemp19187[0xfU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU];
        __Vtemp19187[0x10U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U];
        __Vtemp19187[0x11U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U];
        __Vtemp19187[0x12U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U];
        __Vtemp19187[0x13U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U];
        __Vtemp19187[0x14U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U];
        __Vtemp19187[0x15U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U];
        __Vtemp19187[0x16U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U];
        __Vtemp19187[0x17U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U];
        __Vtemp19187[0x18U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U];
        __Vtemp19187[0x19U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U];
        __Vtemp19187[0x1aU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU];
        __Vtemp19187[0x1bU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU];
        __Vtemp19187[0x1cU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU];
        __Vtemp19187[0x1dU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU];
        __Vtemp19187[0x1eU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU];
        __Vtemp19187[0x1fU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU];
        vcdp->fullWData(oldp+0,(__Vtemp19187),1024);
        VL_EXTEND_WI(2050,3, __Vtemp19189, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | (6U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                      << 1U)))
                                             : 0U));
        VL_SHIFTL_WWI(2050,2050,11, __Vtemp19190, __Vtemp19189, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19195[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[0U] : 0U);
        __Vtemp19195[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[1U] : 0U);
        __Vtemp19195[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[2U] : 0U);
        __Vtemp19195[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[3U] : 0U);
        __Vtemp19195[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[4U] : 0U);
        __Vtemp19195[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[5U] : 0U);
        __Vtemp19195[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[6U] : 0U);
        __Vtemp19195[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[7U] : 0U);
        __Vtemp19195[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[8U] : 0U);
        __Vtemp19195[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19190[9U] : 0U);
        __Vtemp19195[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19190[0xaU]
                               : 0U);
        __Vtemp19195[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19190[0xbU]
                               : 0U);
        __Vtemp19195[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19190[0xcU]
                               : 0U);
        __Vtemp19195[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19190[0xdU]
                               : 0U);
        __Vtemp19195[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19190[0xeU]
                               : 0U);
        __Vtemp19195[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19190[0xfU]
                               : 0U);
        __Vtemp19195[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x10U]
                                : 0U);
        __Vtemp19195[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x11U]
                                : 0U);
        __Vtemp19195[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x12U]
                                : 0U);
        __Vtemp19195[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x13U]
                                : 0U);
        __Vtemp19195[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x14U]
                                : 0U);
        __Vtemp19195[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x15U]
                                : 0U);
        __Vtemp19195[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x16U]
                                : 0U);
        __Vtemp19195[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x17U]
                                : 0U);
        __Vtemp19195[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x18U]
                                : 0U);
        __Vtemp19195[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x19U]
                                : 0U);
        __Vtemp19195[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x1aU]
                                : 0U);
        __Vtemp19195[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x1bU]
                                : 0U);
        __Vtemp19195[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x1cU]
                                : 0U);
        __Vtemp19195[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x1dU]
                                : 0U);
        __Vtemp19195[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x1eU]
                                : 0U);
        __Vtemp19195[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19190[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+32,(__Vtemp19195),1024);
        vcdp->fullBit(oldp+64,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready));
        vcdp->fullBit(oldp+65,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+66,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->fullCData(oldp+67,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->fullCData(oldp+68,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size),3);
        vcdp->fullCData(oldp+69,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source),4);
        vcdp->fullBit(oldp+70,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink));
        vcdp->fullBit(oldp+71,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied));
        vcdp->fullCData(oldp+72,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid),2);
        vcdp->fullCData(oldp+73,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter),4);
        vcdp->fullCData(oldp+74,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready),4);
        vcdp->fullCData(oldp+75,((3U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)))),2);
        vcdp->fullBit(oldp+76,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)))));
        vcdp->fullBit(oldp+77,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0));
        vcdp->fullBit(oldp+78,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0));
        vcdp->fullBit(oldp+79,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
                                         >> 1U)))));
        vcdp->fullBit(oldp+80,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1));
        vcdp->fullBit(oldp+81,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1));
        vcdp->fullBit(oldp+82,((0U == (0x10000000U 
                                       & (0x10000000U 
                                          ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)))))));
        vcdp->fullBit(oldp+83,((0U == (0x10000000U 
                                       & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0x16U) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                             >> 0xaU))))));
    }
}

void VTestHarness::traceFullThis__69(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+798);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullCData(oldp+0,((7U & (~ (0x3ffU & 
                                          (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                           >> 3U))))),3);
        vcdp->fullBit(oldp+1,((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))));
        vcdp->fullCData(oldp+2,(((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (7U & (~ (0x3ffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                 >> 3U))))
                                  : 0U)),3);
        vcdp->fullCData(oldp+3,((7U & (~ (0x3ffU & 
                                          (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                           >> 3U))))),3);
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch));
        vcdp->fullCData(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
                                  ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? (7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                     >> 3U))))
                                      : 0U) : 0U)),3);
        vcdp->fullCData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
                                  ? (7U & (~ (0x3ffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                 >> 3U))))
                                  : 0U)),3);
        vcdp->fullCData(oldp+7,((7U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
                                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                             ? (~ (0x3ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                      >> 3U)))
                                             : 0U) : 0U) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
                                           ? (~ (0x3ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                    >> 3U)))
                                           : 0U)))),3);
        vcdp->fullBit(oldp+8,(((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                                ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3))));
        vcdp->fullBit(oldp+9,((1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                                      ? (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2))
                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0)))));
    }
}

void VTestHarness::traceFullThis__71(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+808);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                                      ? (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
                                            >> 1U))
                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1)))));
        vcdp->fullCData(oldp+1,((0x3fU & (~ (0x1fffU 
                                             & ((IData)(0x3fU) 
                                                << 
                                                (7U 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xeU))))))),6);
        vcdp->fullBit(oldp+2,((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)) 
                                               & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                          >> 0xeU))))))))));
        vcdp->fullCData(oldp+3,((3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU))),2);
        vcdp->fullCData(oldp+4,((7U & (1U | (0xfU & 
                                             ((IData)(1U) 
                                              << (3U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0xeU))))))),3);
        vcdp->fullBit(oldp+5,((1U & (((IData)(1U) << 
                                      (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                                     >> 2U))));
        vcdp->fullBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xcU))));
        vcdp->fullBit(oldp+7,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xcU)))));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+10,((1U & (((IData)(1U) 
                                       << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                      >> 1U))));
    }
}

void VTestHarness::traceFullThis__73(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+819);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
        vcdp->fullBit(oldp+1,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xbU)))));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU))));
        vcdp->fullBit(oldp+11,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU)))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU))))));
        vcdp->fullBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                   >> 0xaU))));
        vcdp->fullBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU))))));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                   >> 0xaU))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
    }
}

void VTestHarness::traceFullThis__75(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+839);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->fullCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask),8);
        vcdp->fullCData(oldp+9,((7U & (~ (0x3ffU & 
                                          (((IData)(0x3fU) 
                                            << (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xeU))) 
                                           >> 3U))))),3);
        vcdp->fullBit(oldp+10,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x17U)))));
        vcdp->fullCData(oldp+11,((7U & (~ (0x3ffU & 
                                           (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 3U))))),3);
        vcdp->fullBit(oldp+12,((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))));
        vcdp->fullCData(oldp+13,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? (1U | (0xeU & 
                                            (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x14U)))
                                   : 0U)),4);
    }
}

void VTestHarness::traceFullThis__77(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+853);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19206[5];
    WData/*159:0*/ __Vtemp19207[5];
    // Body
    {
        vcdp->fullCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (0xeU & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                  : 0U)),4);
        vcdp->fullSData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (0xffffU & ((IData)(1U) 
                                                << 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))
                                  : 0U)),16);
        vcdp->fullSData(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                  & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                  ? (0xffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))
                                  : 0U)),16);
        vcdp->fullBit(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xaU)) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))));
        vcdp->fullCData(oldp+4,((0xfU & (IData)((VL_ULL(7) 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                    >> 1U))))),4);
        vcdp->fullCData(oldp+5,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                 & (((0x3fU 
                                                      >= 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                       << 2U))
                                                      ? 
                                                     (VL_ULL(0xf) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
                                                         >> 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                          << 2U)))
                                                      : VL_ULL(0)) 
                                                    >> 1U))))),4);
        VL_EXTEND_WI(131,4, __Vtemp19206, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x14U)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19207, __Vtemp19206, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->fullQData(oldp+6,((((QData)((IData)((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp19207[1U]
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                                & (0U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp19207[0U]
                                                                : 0U))))),64);
    }
}

void VTestHarness::traceFullThis__79(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+861);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19220[5];
    WData/*159:0*/ __Vtemp19221[5];
    WData/*159:0*/ __Vtemp19227[5];
    WData/*159:0*/ __Vtemp19228[5];
    // Body
    {
        vcdp->fullQData(oldp+0,((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[0U])))),64);
        VL_EXTEND_WI(131,4, __Vtemp19220, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19221, __Vtemp19220, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->fullQData(oldp+2,((((QData)((IData)((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp19221[1U]
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                                & (0U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp19221[0U]
                                                                : 0U))))),64);
        vcdp->fullSData(oldp+4,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                  ? (0xffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))
                                  : 0U)),16);
        vcdp->fullCData(oldp+5,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                 & (((0x3fU 
                                                      >= 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                       << 2U))
                                                      ? 
                                                     (VL_ULL(0xf) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
                                                         >> 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                          << 2U)))
                                                      : VL_ULL(0)) 
                                                    >> 1U))))),4);
        __Vtemp19227[0U] = 0xfU;
        __Vtemp19227[1U] = 0U;
        __Vtemp19227[2U] = 0U;
        __Vtemp19227[3U] = 0U;
        __Vtemp19227[4U] = 0U;
        VL_SHIFTL_WWI(143,143,7, __Vtemp19228, __Vtemp19227, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        vcdp->fullQData(oldp+6,((((QData)((IData)((
                                                   (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp19228[1U]
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                                 & (0U 
                                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                                & (6U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                                ? 
                                                               __Vtemp19228[0U]
                                                                : 0U))))),64);
        vcdp->fullCData(oldp+8,((7U & (~ (0x3fU & ((IData)(7U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))),3);
    }
}

void VTestHarness::traceFullThis__81(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+870);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                            & (~ (0x3fU 
                                                  & ((IData)(7U) 
                                                     << 
                                                     (3U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))));
        vcdp->fullCData(oldp+1,((7U & (1U | (0xfU & 
                                             ((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))),3);
        vcdp->fullBit(oldp+2,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                                     >> 2U))));
        vcdp->fullBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U))));
        vcdp->fullBit(oldp+4,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U)))));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+7,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                                     >> 1U))));
        vcdp->fullBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 1U))));
        vcdp->fullBit(oldp+9,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 1U)))));
        vcdp->fullBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
        vcdp->fullBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+18,((1U & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
    }
}

void VTestHarness::traceFullThis__83(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+889);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((1U & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                   & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                   & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceFullThis__85(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+902);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp19247[8];
    WData/*255:0*/ __Vtemp19248[8];
    WData/*255:0*/ __Vtemp19251[8];
    WData/*255:0*/ __Vtemp19252[8];
    WData/*255:0*/ __Vtemp19253[8];
    WData/*255:0*/ __Vtemp19256[8];
    WData/*255:0*/ __Vtemp19257[8];
    WData/*255:0*/ __Vtemp19258[8];
    WData/*255:0*/ __Vtemp19261[8];
    // Body
    {
        vcdp->fullBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->fullBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->fullBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->fullCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask),8);
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done));
        vcdp->fullWData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready),256);
        vcdp->fullCData(oldp+15,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                   ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                            << 1U))
                                   : 0U)),4);
        vcdp->fullCData(oldp+16,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                   ? (1U | (6U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                  << 1U)))
                                   : 0U)),3);
        __Vtemp19247[0U] = 1U;
        __Vtemp19247[1U] = 0U;
        __Vtemp19247[2U] = 0U;
        __Vtemp19247[3U] = 0U;
        __Vtemp19247[4U] = 0U;
        __Vtemp19247[5U] = 0U;
        __Vtemp19247[6U] = 0U;
        __Vtemp19247[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19248, __Vtemp19247, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp19251[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[0U] : 0U);
        __Vtemp19251[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[1U] : 0U);
        __Vtemp19251[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[2U] : 0U);
        __Vtemp19251[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[3U] : 0U);
        __Vtemp19251[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[4U] : 0U);
        __Vtemp19251[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[5U] : 0U);
        __Vtemp19251[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[6U] : 0U);
        __Vtemp19251[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19248[7U] : 0U);
        vcdp->fullWData(oldp+17,(__Vtemp19251),256);
        __Vtemp19252[0U] = 1U;
        __Vtemp19252[1U] = 0U;
        __Vtemp19252[2U] = 0U;
        __Vtemp19252[3U] = 0U;
        __Vtemp19252[4U] = 0U;
        __Vtemp19252[5U] = 0U;
        __Vtemp19252[6U] = 0U;
        __Vtemp19252[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19253, __Vtemp19252, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19256[0U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[0U] : 0U);
        __Vtemp19256[1U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[1U] : 0U);
        __Vtemp19256[2U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[2U] : 0U);
        __Vtemp19256[3U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[3U] : 0U);
        __Vtemp19256[4U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[4U] : 0U);
        __Vtemp19256[5U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[5U] : 0U);
        __Vtemp19256[6U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[6U] : 0U);
        __Vtemp19256[7U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19253[7U] : 0U);
        vcdp->fullWData(oldp+25,(__Vtemp19256),256);
        __Vtemp19257[0U] = 1U;
        __Vtemp19257[1U] = 0U;
        __Vtemp19257[2U] = 0U;
        __Vtemp19257[3U] = 0U;
        __Vtemp19257[4U] = 0U;
        __Vtemp19257[5U] = 0U;
        __Vtemp19257[6U] = 0U;
        __Vtemp19257[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19258, __Vtemp19257, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19261[0U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[0U] : 0U);
        __Vtemp19261[1U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[1U] : 0U);
        __Vtemp19261[2U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[2U] : 0U);
        __Vtemp19261[3U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[3U] : 0U);
        __Vtemp19261[4U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[4U] : 0U);
        __Vtemp19261[5U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[5U] : 0U);
        __Vtemp19261[6U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[6U] : 0U);
        __Vtemp19261[7U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19258[7U] : 0U);
        vcdp->fullWData(oldp+33,(__Vtemp19261),256);
    }
}

void VTestHarness::traceFullThis__87(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+943);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19281[32];
    WData/*1023:0*/ __Vtemp19282[32];
    WData/*1023:0*/ __Vtemp19285[32];
    WData/*1023:0*/ __Vtemp19288[32];
    WData/*1023:0*/ __Vtemp19289[32];
    WData/*2079:0*/ __Vtemp19291[65];
    WData/*2079:0*/ __Vtemp19292[65];
    WData/*1023:0*/ __Vtemp19297[32];
    WData/*1023:0*/ __Vtemp19298[32];
    WData/*2079:0*/ __Vtemp19300[65];
    WData/*2079:0*/ __Vtemp19301[65];
    WData/*1023:0*/ __Vtemp19306[32];
    WData/*255:0*/ __Vtemp19307[8];
    WData/*255:0*/ __Vtemp19308[8];
    WData/*255:0*/ __Vtemp19311[8];
    // Body
    {
        vcdp->fullBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))));
        __Vtemp19281[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp19281[1U] = 0U;
        __Vtemp19281[2U] = 0U;
        __Vtemp19281[3U] = 0U;
        __Vtemp19281[4U] = 0U;
        __Vtemp19281[5U] = 0U;
        __Vtemp19281[6U] = 0U;
        __Vtemp19281[7U] = 0U;
        __Vtemp19281[8U] = 0U;
        __Vtemp19281[9U] = 0U;
        __Vtemp19281[0xaU] = 0U;
        __Vtemp19281[0xbU] = 0U;
        __Vtemp19281[0xcU] = 0U;
        __Vtemp19281[0xdU] = 0U;
        __Vtemp19281[0xeU] = 0U;
        __Vtemp19281[0xfU] = 0U;
        __Vtemp19281[0x10U] = 0U;
        __Vtemp19281[0x11U] = 0U;
        __Vtemp19281[0x12U] = 0U;
        __Vtemp19281[0x13U] = 0U;
        __Vtemp19281[0x14U] = 0U;
        __Vtemp19281[0x15U] = 0U;
        __Vtemp19281[0x16U] = 0U;
        __Vtemp19281[0x17U] = 0U;
        __Vtemp19281[0x18U] = 0U;
        __Vtemp19281[0x19U] = 0U;
        __Vtemp19281[0x1aU] = 0U;
        __Vtemp19281[0x1bU] = 0U;
        __Vtemp19281[0x1cU] = 0U;
        __Vtemp19281[0x1dU] = 0U;
        __Vtemp19281[0x1eU] = 0U;
        __Vtemp19281[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19282, __Vtemp19281);
        vcdp->fullCData(oldp+1,((0xfU & __Vtemp19282[0U])),4);
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp19285, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19288[0U] = (7U & (__Vtemp19285[0U] 
                                  >> 1U));
        __Vtemp19288[1U] = 0U;
        __Vtemp19288[2U] = 0U;
        __Vtemp19288[3U] = 0U;
        __Vtemp19288[4U] = 0U;
        __Vtemp19288[5U] = 0U;
        __Vtemp19288[6U] = 0U;
        __Vtemp19288[7U] = 0U;
        __Vtemp19288[8U] = 0U;
        __Vtemp19288[9U] = 0U;
        __Vtemp19288[0xaU] = 0U;
        __Vtemp19288[0xbU] = 0U;
        __Vtemp19288[0xcU] = 0U;
        __Vtemp19288[0xdU] = 0U;
        __Vtemp19288[0xeU] = 0U;
        __Vtemp19288[0xfU] = 0U;
        __Vtemp19288[0x10U] = 0U;
        __Vtemp19288[0x11U] = 0U;
        __Vtemp19288[0x12U] = 0U;
        __Vtemp19288[0x13U] = 0U;
        __Vtemp19288[0x14U] = 0U;
        __Vtemp19288[0x15U] = 0U;
        __Vtemp19288[0x16U] = 0U;
        __Vtemp19288[0x17U] = 0U;
        __Vtemp19288[0x18U] = 0U;
        __Vtemp19288[0x19U] = 0U;
        __Vtemp19288[0x1aU] = 0U;
        __Vtemp19288[0x1bU] = 0U;
        __Vtemp19288[0x1cU] = 0U;
        __Vtemp19288[0x1dU] = 0U;
        __Vtemp19288[0x1eU] = 0U;
        __Vtemp19288[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19289, __Vtemp19288);
        vcdp->fullCData(oldp+2,((0xfU & __Vtemp19289[0U])),4);
        VL_EXTEND_WI(2051,4, __Vtemp19291, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                   << 1U))
                                             : 0U));
        VL_SHIFTL_WWI(2051,2051,11, __Vtemp19292, __Vtemp19291, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19297[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[0U] : 0U);
        __Vtemp19297[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[1U] : 0U);
        __Vtemp19297[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[2U] : 0U);
        __Vtemp19297[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[3U] : 0U);
        __Vtemp19297[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[4U] : 0U);
        __Vtemp19297[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[5U] : 0U);
        __Vtemp19297[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[6U] : 0U);
        __Vtemp19297[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[7U] : 0U);
        __Vtemp19297[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[8U] : 0U);
        __Vtemp19297[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19292[9U] : 0U);
        __Vtemp19297[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19292[0xaU]
                               : 0U);
        __Vtemp19297[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19292[0xbU]
                               : 0U);
        __Vtemp19297[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19292[0xcU]
                               : 0U);
        __Vtemp19297[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19292[0xdU]
                               : 0U);
        __Vtemp19297[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19292[0xeU]
                               : 0U);
        __Vtemp19297[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19292[0xfU]
                               : 0U);
        __Vtemp19297[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x10U]
                                : 0U);
        __Vtemp19297[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x11U]
                                : 0U);
        __Vtemp19297[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x12U]
                                : 0U);
        __Vtemp19297[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x13U]
                                : 0U);
        __Vtemp19297[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x14U]
                                : 0U);
        __Vtemp19297[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x15U]
                                : 0U);
        __Vtemp19297[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x16U]
                                : 0U);
        __Vtemp19297[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x17U]
                                : 0U);
        __Vtemp19297[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x18U]
                                : 0U);
        __Vtemp19297[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x19U]
                                : 0U);
        __Vtemp19297[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x1aU]
                                : 0U);
        __Vtemp19297[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x1bU]
                                : 0U);
        __Vtemp19297[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x1cU]
                                : 0U);
        __Vtemp19297[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x1dU]
                                : 0U);
        __Vtemp19297[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x1eU]
                                : 0U);
        __Vtemp19297[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19292[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+3,(__Vtemp19297),1024);
        __Vtemp19298[0U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp19298[1U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp19298[2U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp19298[3U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp19298[4U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp19298[5U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp19298[6U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp19298[7U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp19298[8U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[8U];
        __Vtemp19298[9U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[9U];
        __Vtemp19298[0xaU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xaU];
        __Vtemp19298[0xbU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xbU];
        __Vtemp19298[0xcU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xcU];
        __Vtemp19298[0xdU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xdU];
        __Vtemp19298[0xeU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xeU];
        __Vtemp19298[0xfU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xfU];
        __Vtemp19298[0x10U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x10U];
        __Vtemp19298[0x11U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x11U];
        __Vtemp19298[0x12U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x12U];
        __Vtemp19298[0x13U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x13U];
        __Vtemp19298[0x14U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x14U];
        __Vtemp19298[0x15U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x15U];
        __Vtemp19298[0x16U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x16U];
        __Vtemp19298[0x17U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x17U];
        __Vtemp19298[0x18U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x18U];
        __Vtemp19298[0x19U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x19U];
        __Vtemp19298[0x1aU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1aU];
        __Vtemp19298[0x1bU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1bU];
        __Vtemp19298[0x1cU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1cU];
        __Vtemp19298[0x1dU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1dU];
        __Vtemp19298[0x1eU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1eU];
        __Vtemp19298[0x1fU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1fU];
        vcdp->fullWData(oldp+35,(__Vtemp19298),1024);
        VL_EXTEND_WI(2050,3, __Vtemp19300, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | (6U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                      << 1U)))
                                             : 0U));
        VL_SHIFTL_WWI(2050,2050,11, __Vtemp19301, __Vtemp19300, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19306[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[0U] : 0U);
        __Vtemp19306[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[1U] : 0U);
        __Vtemp19306[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[2U] : 0U);
        __Vtemp19306[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[3U] : 0U);
        __Vtemp19306[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[4U] : 0U);
        __Vtemp19306[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[5U] : 0U);
        __Vtemp19306[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[6U] : 0U);
        __Vtemp19306[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[7U] : 0U);
        __Vtemp19306[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[8U] : 0U);
        __Vtemp19306[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19301[9U] : 0U);
        __Vtemp19306[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19301[0xaU]
                               : 0U);
        __Vtemp19306[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19301[0xbU]
                               : 0U);
        __Vtemp19306[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19301[0xcU]
                               : 0U);
        __Vtemp19306[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19301[0xdU]
                               : 0U);
        __Vtemp19306[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19301[0xeU]
                               : 0U);
        __Vtemp19306[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19301[0xfU]
                               : 0U);
        __Vtemp19306[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x10U]
                                : 0U);
        __Vtemp19306[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x11U]
                                : 0U);
        __Vtemp19306[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x12U]
                                : 0U);
        __Vtemp19306[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x13U]
                                : 0U);
        __Vtemp19306[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x14U]
                                : 0U);
        __Vtemp19306[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x15U]
                                : 0U);
        __Vtemp19306[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x16U]
                                : 0U);
        __Vtemp19306[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x17U]
                                : 0U);
        __Vtemp19306[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x18U]
                                : 0U);
        __Vtemp19306[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x19U]
                                : 0U);
        __Vtemp19306[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x1aU]
                                : 0U);
        __Vtemp19306[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x1bU]
                                : 0U);
        __Vtemp19306[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x1cU]
                                : 0U);
        __Vtemp19306[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x1dU]
                                : 0U);
        __Vtemp19306[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x1eU]
                                : 0U);
        __Vtemp19306[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19301[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+67,(__Vtemp19306),1024);
        __Vtemp19307[0U] = 1U;
        __Vtemp19307[1U] = 0U;
        __Vtemp19307[2U] = 0U;
        __Vtemp19307[3U] = 0U;
        __Vtemp19307[4U] = 0U;
        __Vtemp19307[5U] = 0U;
        __Vtemp19307[6U] = 0U;
        __Vtemp19307[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19308, __Vtemp19307, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19311[0U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[0U] : 0U);
        __Vtemp19311[1U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[1U] : 0U);
        __Vtemp19311[2U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[2U] : 0U);
        __Vtemp19311[3U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[3U] : 0U);
        __Vtemp19311[4U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[4U] : 0U);
        __Vtemp19311[5U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[5U] : 0U);
        __Vtemp19311[6U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[6U] : 0U);
        __Vtemp19311[7U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19308[7U] : 0U);
        vcdp->fullWData(oldp+99,(__Vtemp19311),256);
    }
}

void VTestHarness::traceFullThis__89(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1050);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19349[32];
    WData/*1023:0*/ __Vtemp19352[32];
    WData/*1023:0*/ __Vtemp19353[32];
    WData/*2079:0*/ __Vtemp19355[65];
    WData/*2079:0*/ __Vtemp19356[65];
    WData/*1023:0*/ __Vtemp19361[32];
    IData/*31:0*/ __Vilp;
    // Body
    {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp19349, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19352[0U] = (7U & (__Vtemp19349[0U] 
                                  >> 1U));
        __Vtemp19352[1U] = 0U;
        __Vtemp19352[2U] = 0U;
        __Vtemp19352[3U] = 0U;
        __Vtemp19352[4U] = 0U;
        __Vtemp19352[5U] = 0U;
        __Vtemp19352[6U] = 0U;
        __Vtemp19352[7U] = 0U;
        __Vtemp19352[8U] = 0U;
        __Vtemp19352[9U] = 0U;
        __Vtemp19352[0xaU] = 0U;
        __Vtemp19352[0xbU] = 0U;
        __Vtemp19352[0xcU] = 0U;
        __Vtemp19352[0xdU] = 0U;
        __Vtemp19352[0xeU] = 0U;
        __Vtemp19352[0xfU] = 0U;
        __Vtemp19352[0x10U] = 0U;
        __Vtemp19352[0x11U] = 0U;
        __Vtemp19352[0x12U] = 0U;
        __Vtemp19352[0x13U] = 0U;
        __Vtemp19352[0x14U] = 0U;
        __Vtemp19352[0x15U] = 0U;
        __Vtemp19352[0x16U] = 0U;
        __Vtemp19352[0x17U] = 0U;
        __Vtemp19352[0x18U] = 0U;
        __Vtemp19352[0x19U] = 0U;
        __Vtemp19352[0x1aU] = 0U;
        __Vtemp19352[0x1bU] = 0U;
        __Vtemp19352[0x1cU] = 0U;
        __Vtemp19352[0x1dU] = 0U;
        __Vtemp19352[0x1eU] = 0U;
        __Vtemp19352[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19353, __Vtemp19352);
        vcdp->fullCData(oldp+0,((0xfU & __Vtemp19353[0U])),4);
        __Vtemp19355[0U] = 0xfU;
        __Vilp = 1U;
        while ((__Vilp <= 0x40U)) {
            __Vtemp19355[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(2063,2063,11, __Vtemp19356, __Vtemp19355, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19361[0U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[0U] : 0U);
        __Vtemp19361[1U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[1U] : 0U);
        __Vtemp19361[2U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[2U] : 0U);
        __Vtemp19361[3U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[3U] : 0U);
        __Vtemp19361[4U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[4U] : 0U);
        __Vtemp19361[5U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[5U] : 0U);
        __Vtemp19361[6U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[6U] : 0U);
        __Vtemp19361[7U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[7U] : 0U);
        __Vtemp19361[8U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[8U] : 0U);
        __Vtemp19361[9U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19356[9U] : 0U);
        __Vtemp19361[0xaU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19356[0xaU]
                               : 0U);
        __Vtemp19361[0xbU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19356[0xbU]
                               : 0U);
        __Vtemp19361[0xcU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19356[0xcU]
                               : 0U);
        __Vtemp19361[0xdU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19356[0xdU]
                               : 0U);
        __Vtemp19361[0xeU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19356[0xeU]
                               : 0U);
        __Vtemp19361[0xfU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19356[0xfU]
                               : 0U);
        __Vtemp19361[0x10U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x10U]
                                : 0U);
        __Vtemp19361[0x11U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x11U]
                                : 0U);
        __Vtemp19361[0x12U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x12U]
                                : 0U);
        __Vtemp19361[0x13U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x13U]
                                : 0U);
        __Vtemp19361[0x14U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x14U]
                                : 0U);
        __Vtemp19361[0x15U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x15U]
                                : 0U);
        __Vtemp19361[0x16U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x16U]
                                : 0U);
        __Vtemp19361[0x17U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x17U]
                                : 0U);
        __Vtemp19361[0x18U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x18U]
                                : 0U);
        __Vtemp19361[0x19U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x19U]
                                : 0U);
        __Vtemp19361[0x1aU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x1aU]
                                : 0U);
        __Vtemp19361[0x1bU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x1bU]
                                : 0U);
        __Vtemp19361[0x1cU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x1cU]
                                : 0U);
        __Vtemp19361[0x1dU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x1dU]
                                : 0U);
        __Vtemp19361[0x1eU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x1eU]
                                : 0U);
        __Vtemp19361[0x1fU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19356[0x1fU]
                                : 0U);
        vcdp->fullWData(oldp+1,(__Vtemp19361),1024);
        vcdp->fullBit(oldp+33,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                                & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))));
        vcdp->fullBit(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match));
        vcdp->fullBit(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty));
        vcdp->fullBit(oldp+36,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full));
        vcdp->fullBit(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq));
        vcdp->fullBit(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->fullBit(oldp+39,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
                                & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))));
        vcdp->fullBit(oldp+40,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
        vcdp->fullBit(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
        vcdp->fullBit(oldp+42,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
        vcdp->fullBit(oldp+43,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->fullBit(oldp+44,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->fullBit(oldp+45,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid));
        vcdp->fullCData(oldp+46,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size),3);
        vcdp->fullBit(oldp+47,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat));
        vcdp->fullCData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size),3);
        vcdp->fullCData(oldp+49,((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xaU)))),4);
        vcdp->fullIData(oldp+50,((0x1fffffffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                  ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address
                                                  : 
                                                 ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                     >> 0xaU))))),29);
        vcdp->fullCData(oldp+51,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                            : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                  >> 1U))))),8);
        vcdp->fullCData(oldp+52,((7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))),3);
    }
}

void VTestHarness::traceFullThis__91(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1103);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))));
        vcdp->fullCData(oldp+1,((0xfU & ((IData)(1U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)))),4);
        vcdp->fullCData(oldp+2,((7U & (~ (0x3fU & ((IData)(7U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)))))),3);
        vcdp->fullBit(oldp+3,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                     | (1U & (((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                              >> 3U))))));
        vcdp->fullCData(oldp+4,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                       >> 4U))),3);
        vcdp->fullCData(oldp+5,((0xfU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6))),4);
        vcdp->fullCData(oldp+6,((3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                       >> 2U))),2);
        vcdp->fullCData(oldp+7,((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8))),2);
        vcdp->fullCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size),3);
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
        vcdp->fullCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag),3);
        vcdp->fullCData(oldp+12,((0x3fU & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))))),6);
        vcdp->fullCData(oldp+13,((7U & (~ (0x3ffU & 
                                           ((IData)(7U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))),3);
        vcdp->fullBit(oldp+14,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                         >> 2U)))));
        vcdp->fullCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1),3);
        vcdp->fullCData(oldp+16,(((0x1eU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xaU)) 
                                            << 1U)) 
                                  | (1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                                               ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle)
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r)))))),5);
    }
}

void VTestHarness::traceFullThis__93(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1120);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc));
        vcdp->fullBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1));
        vcdp->fullBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2));
        vcdp->fullBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2));
        vcdp->fullBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3));
        vcdp->fullBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3));
        vcdp->fullBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4));
        vcdp->fullBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4));
        vcdp->fullBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5));
        vcdp->fullBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5));
        vcdp->fullBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU))))));
        vcdp->fullBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                   >> 0xaU))));
        vcdp->fullBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU))))));
        vcdp->fullBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                   >> 0xaU))));
        vcdp->fullBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                      >> 0xaU)))));
        vcdp->fullBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU))))));
    }
}
